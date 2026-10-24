#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _id2type
// Address: 0x1091d0 - 0x1093cc
void _id2type_0x1091d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_id2type_0x1091d0");
#endif

    switch (ctx->pc) {
        case 0x109280u: goto label_109280;
        default: break;
    }

    ctx->pc = 0x1091d0u;

    // 0x1091d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1091d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1091d4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1091d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1091d8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1091d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1091dc: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1091dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1091e0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1091e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1091e4: 0x6763a  dsrl        $t6, $a2, 24
    ctx->pc = 0x1091e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
    // 0x1091e8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1091e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1091ec: 0x6683e  dsrl32      $t5, $a2, 0
    ctx->pc = 0x1091ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1091f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1091f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1091f4: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x1091f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1091f8: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1091f8u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1091fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1091fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x109200: 0x24633b38  addiu       $v1, $v1, 0x3B38
    ctx->pc = 0x109200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15160));
    // 0x109204: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x109208: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x109208u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10920c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109210: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109210u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109218: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x109218u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10921c: 0xb5e38  dsll        $t3, $t3, 24
    ctx->pc = 0x10921cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x109220: 0x3417ff00  ori         $s7, $zero, 0xFF00
    ctx->pc = 0x109220u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x109224: 0x17be38  dsll        $s7, $s7, 24
    ctx->pc = 0x109224u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
    // 0x109228: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x109228u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10922c: 0x16b63a  dsrl        $s6, $s6, 24
    ctx->pc = 0x10922cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x109230: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x109230u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109234: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x109234u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x109238: 0x15ae3a  dsrl        $s5, $s5, 24
    ctx->pc = 0x109238u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
    // 0x10923c: 0x3414bd20  ori         $s4, $zero, 0xBD20
    ctx->pc = 0x10923cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48416);
    // 0x109240: 0x14a638  dsll        $s4, $s4, 24
    ctx->pc = 0x109240u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
    // 0x109244: 0x3413bd80  ori         $s3, $zero, 0xBD80
    ctx->pc = 0x109244u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48512);
    // 0x109248: 0x139e38  dsll        $s3, $s3, 24
    ctx->pc = 0x109248u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x10924c: 0x3412bd90  ori         $s2, $zero, 0xBD90
    ctx->pc = 0x10924cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48528);
    // 0x109250: 0x129638  dsll        $s2, $s2, 24
    ctx->pc = 0x109250u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x109254: 0x3411bda0  ori         $s1, $zero, 0xBDA0
    ctx->pc = 0x109254u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48544);
    // 0x109258: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x109258u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x10925c: 0x3410ffe0  ori         $s0, $zero, 0xFFE0
    ctx->pc = 0x10925cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x109260: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x109260u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x109264: 0x3419fff8  ori         $t9, $zero, 0xFFF8
    ctx->pc = 0x109264u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x109268: 0x19ce38  dsll        $t9, $t9, 24
    ctx->pc = 0x109268u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
    // 0x10926c: 0x3418f000  ori         $t8, $zero, 0xF000
    ctx->pc = 0x10926cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x109270: 0x18c638  dsll        $t8, $t8, 24
    ctx->pc = 0x109270u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
    // 0x109274: 0x340fc000  ori         $t7, $zero, 0xC000
    ctx->pc = 0x109274u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x109278: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x109278u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x10927c: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x10927cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_109280:
    // 0x109280: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x109280u;
    {
        const bool branch_taken_0x109280 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x109284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109280u;
        // 0x109284: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109280) {
            ctx->pc = 0x1092C8u;
            goto label_1092c8;
        }
    }
    ctx->pc = 0x109288u;
    // 0x109288: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109288u;
    {
        const bool branch_taken_0x109288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109288) {
            ctx->pc = 0x1092A0u;
            goto label_1092a0;
        }
    }
    ctx->pc = 0x109290u;
    // 0x109290: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x109290u;
    {
        const bool branch_taken_0x109290 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x109290) {
            ctx->pc = 0x109294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109290u;
            // 0x109294: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109334u;
            goto label_109334;
        }
    }
    ctx->pc = 0x109298u;
    // 0x109298: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x109298u;
    {
        const bool branch_taken_0x109298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109298u;
        // 0x10929c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109298) {
            ctx->pc = 0x10938Cu;
            goto label_10938c;
        }
    }
    ctx->pc = 0x1092A0u;
label_1092a0:
    // 0x1092a0: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x1092A0u;
    {
        const bool branch_taken_0x1092a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x1092a0) {
            ctx->pc = 0x1092A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1092A0u;
            // 0x1092a4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10938Cu;
            goto label_10938c;
        }
    }
    ctx->pc = 0x1092A8u;
    // 0x1092a8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1092a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1092ac: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x1092acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1092b0: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1092B0u;
    {
        const bool branch_taken_0x1092b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1092b0) {
            ctx->pc = 0x1092B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1092B0u;
            // 0x1092b4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10938Cu;
            goto label_10938c;
        }
    }
    ctx->pc = 0x1092B8u;
    // 0x1092b8: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1092b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1092bc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1092bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1092c0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1092C0u;
    {
        const bool branch_taken_0x1092c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092C0u;
        // 0x1092c4: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092c0) {
            ctx->pc = 0x109388u;
            goto label_109388;
        }
    }
    ctx->pc = 0x1092C8u;
label_1092c8:
    // 0x1092c8: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x1092c8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1092cc: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x1092ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48520);
    // 0x1092d0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1092d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1092d4: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1092D4u;
    {
        const bool branch_taken_0x1092d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1092D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092D4u;
        // 0x1092d8: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092d4) {
            ctx->pc = 0x10931Cu;
            goto label_10931c;
        }
    }
    ctx->pc = 0x1092DCu;
    // 0x1092dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1092DCu;
    {
        const bool branch_taken_0x1092dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1092dc) {
            ctx->pc = 0x1092FCu;
            goto label_1092fc;
        }
    }
    ctx->pc = 0x1092E4u;
    // 0x1092e4: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1092E4u;
    {
        const bool branch_taken_0x1092e4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x1092E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092E4u;
        // 0x1092e8: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092e4) {
            ctx->pc = 0x109314u;
            goto label_109314;
        }
    }
    ctx->pc = 0x1092ECu;
    // 0x1092ec: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1092ECu;
    {
        const bool branch_taken_0x1092ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x1092F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092ECu;
        // 0x1092f0: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092ec) {
            ctx->pc = 0x10931Cu;
            goto label_10931c;
        }
    }
    ctx->pc = 0x1092F4u;
    // 0x1092f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1092F4u;
    {
        const bool branch_taken_0x1092f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092F4u;
        // 0x1092f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092f4) {
            ctx->pc = 0x109324u;
            goto label_109324;
        }
    }
    ctx->pc = 0x1092FCu;
label_1092fc:
    // 0x1092fc: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1092FCu;
    {
        const bool branch_taken_0x1092fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x109300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092FCu;
        // 0x109300: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092fc) {
            ctx->pc = 0x109320u;
            goto label_109320;
        }
    }
    ctx->pc = 0x109304u;
    // 0x109304: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x109304u;
    {
        const bool branch_taken_0x109304 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x109308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109304u;
        // 0x109308: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109304) {
            ctx->pc = 0x10931Cu;
            goto label_10931c;
        }
    }
    ctx->pc = 0x10930Cu;
    // 0x10930c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10930Cu;
    {
        const bool branch_taken_0x10930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10930Cu;
        // 0x109310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10930c) {
            ctx->pc = 0x109324u;
            goto label_109324;
        }
    }
    ctx->pc = 0x109314u;
label_109314:
    // 0x109314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x109314u;
    {
        const bool branch_taken_0x109314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109314u;
        // 0x109318: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109314) {
            ctx->pc = 0x109324u;
            goto label_109324;
        }
    }
    ctx->pc = 0x10931Cu;
label_10931c:
    // 0x10931c: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x10931cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
label_109320:
    // 0x109320: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x109320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_109324:
    // 0x109324: 0x54e80019  bnel        $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x109324u;
    {
        const bool branch_taken_0x109324 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x109324) {
            ctx->pc = 0x109328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109324u;
            // 0x109328: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10938Cu;
            goto label_10938c;
        }
    }
    ctx->pc = 0x10932Cu;
    // 0x10932c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10932Cu;
    {
        const bool branch_taken_0x10932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10932Cu;
        // 0x109330: 0x1c21024  and         $v0, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10932c) {
            ctx->pc = 0x109374u;
            goto label_109374;
        }
    }
    ctx->pc = 0x109334u;
label_109334:
    // 0x109334: 0x3402e000  ori         $v0, $zero, 0xE000
    ctx->pc = 0x109334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x109338: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x10933c: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10933Cu;
    {
        const bool branch_taken_0x10933c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x10933c) {
            ctx->pc = 0x109350u;
            goto label_109350;
        }
    }
    ctx->pc = 0x109344u;
    // 0x109344: 0xd83824  and         $a3, $a2, $t8
    ctx->pc = 0x109344u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 24));
    // 0x109348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109348u;
    {
        const bool branch_taken_0x109348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109348u;
        // 0x10934c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109348) {
            ctx->pc = 0x109368u;
            goto label_109368;
        }
    }
    ctx->pc = 0x109350u;
label_109350:
    // 0x109350: 0x150f0004  bne         $t0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x109350u;
    {
        const bool branch_taken_0x109350 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 15));
        ctx->pc = 0x109354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109350u;
        // 0x109354: 0xc73824  and         $a3, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109350) {
            ctx->pc = 0x109364u;
            goto label_109364;
        }
    }
    ctx->pc = 0x109358u;
    // 0x109358: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x109358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x10935c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10935Cu;
    {
        const bool branch_taken_0x10935c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10935Cu;
        // 0x109360: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10935c) {
            ctx->pc = 0x109368u;
            goto label_109368;
        }
    }
    ctx->pc = 0x109364u;
label_109364:
    // 0x109364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109368:
    // 0x109368: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109368u;
    {
        const bool branch_taken_0x109368 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x109368) {
            ctx->pc = 0x10936Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109368u;
            // 0x10936c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10938Cu;
            goto label_10938c;
        }
    }
    ctx->pc = 0x109370u;
    // 0x109370: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x109370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_109374:
    // 0x109374: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x109374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x109378: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10937c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10937cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x109380: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x109380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109384: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x109384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_109388:
    // 0x109388: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x109388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_10938c:
    // 0x10938c: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x10938cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x109390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109390u;
    {
        const bool branch_taken_0x109390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109390u;
        // 0x109394: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109390) {
            ctx->pc = 0x1093A0u;
            goto label_1093a0;
        }
    }
    ctx->pc = 0x109398u;
    // 0x109398: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
    ctx->pc = 0x109398u;
    {
        const bool branch_taken_0x109398 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x109398) {
            ctx->pc = 0x10939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109398u;
            // 0x10939c: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109280;
        }
    }
    ctx->pc = 0x1093A0u;
label_1093a0:
    // 0x1093a0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1093a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1093a4: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1093a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1093a8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1093a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1093ac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1093acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1093b0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1093b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1093b4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1093b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1093b8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1093b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1093bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1093bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1093c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1093c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1093c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1093C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1093C4u;
        // 0x1093c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1093C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1093CCu;
}
