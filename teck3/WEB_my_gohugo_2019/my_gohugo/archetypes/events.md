---
title: "{{ replace .Name "-" " " | title }}"
postalAddress:
    address: ""
    postalCode: "75000"
    city: "Paris"
    label: ""
when: {{ time (now.Format "Mon, 02 Jan 2006 15:04:05 MST") }}
description: ""
photos: []
draft: true
important: false
association: ""
---