// RFC https://datatracker.ietf.org/doc/html/rfc2849
// WIKI https://en.wikipedia.org/wiki/LDAP_Data_Interchange_Format

const FILL = /\s*/;
const SEP = /\r?\n/;

module.exports = grammar({
    name: 'ldif',

    // extras: $ => [/\s/, $.comment],
    // word: $ => $.identifier,

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.comment,
            $.ldif_change_record,
        ),

        // TOP LEVEL


        ldif_change_record: $ => seq(
            $.dn_spec,
            $.changerecord
        ),

        // From RFC

        dn_spec: $ => seq(
            "dn:",
            FILL,
            $.distinguishedName
        ),

        distinguishedName: $ => //repeat(
                $.dn_key_value,
        //),

        dn_key_value: $ => seq(
            $.dn_identifier,
            "=",
            $.dn_value,
            optional(",")
        ),

        dn_identifier: $ => /[a-zA-Z][\w\-^\S\t\n\r]+/,
        dn_value: $ => /[a-zA-Z][\w\-^\S\t\n\r]+/,

        changerecord: $ => seq(
                "changetype:",
                FILL,
                choice("add", "delete", "modify", "moddn")
            ),

        change_add: $ => seq("add",
            SEP
            // 1*attrval-spec
        ),
        change_delete: $ => seq("delete",
            SEP
        ),
        change_moddn: $ => seq(
            choice( "modrdn", "moddn"),
            //SEP,
            "newrdn:"
                // (FILL rdn /
                //                            ":" FILL base64-rdn) SEP
                //                 "deleteoldrdn:" FILL ("0" / "1")  SEP
                //             0*1("newsuperior:"
                //                 (    FILL distinguishedName /
                //                     ":" FILL base64-distinguishedName) SEP)
        ),
        change_modify: $ => seq("modify",
            SEP,
            repeat($.mod_spec)
        ),

        mod_spec: $ => seq(
            choice("add:", "delete:", "replace:"),
            FILL, $.attrval_spec, SEP,
            "-", SEP
        ),

        attrval_spec: $ => seq(
            $.
            FILL,
            $.value_spec
        ),

        value_spec: $ => seq(
            // (    FILL 0*1(SAFE-STRING) /
            //                                 ":" FILL (BASE64-STRING) /
            //                                 "<" FILL url)
            //                            ; See notes 7 and 8
            $.identifier
        ),


        identifier: $ =>  /[a-zA-Z][\w\-]+/,
        comment: $ => token(seq('#', /.*/))
    },



});
