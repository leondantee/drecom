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

// Function: _dtoa_r
// Address: 0x115d20 - 0x116eec
void _dtoa_r_0x115d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dtoa_r_0x115d20");
#endif

    switch (ctx->pc) {
        case 0x115d90u: goto label_115d90;
        case 0x115e48u: goto label_115e48;
        case 0x115e90u: goto label_115e90;
        case 0x115f40u: goto label_115f40;
        case 0x115f58u: goto label_115f58;
        case 0x115f98u: goto label_115f98;
        case 0x115fa8u: goto label_115fa8;
        case 0x115fb8u: goto label_115fb8;
        case 0x115fc4u: goto label_115fc4;
        case 0x115fd4u: goto label_115fd4;
        case 0x115fe0u: goto label_115fe0;
        case 0x115fecu: goto label_115fec;
        case 0x115ffcu: goto label_115ffc;
        case 0x11600cu: goto label_11600c;
        case 0x116018u: goto label_116018;
        case 0x116050u: goto label_116050;
        case 0x116190u: goto label_116190;
        case 0x1161ccu: goto label_1161cc;
        case 0x116234u: goto label_116234;
        case 0x116248u: goto label_116248;
        case 0x116260u: goto label_116260;
        case 0x11627cu: goto label_11627c;
        case 0x1162b0u: goto label_1162b0;
        case 0x1162c0u: goto label_1162c0;
        case 0x1162d8u: goto label_1162d8;
        case 0x116304u: goto label_116304;
        case 0x11633cu: goto label_11633c;
        case 0x116348u: goto label_116348;
        case 0x116354u: goto label_116354;
        case 0x116364u: goto label_116364;
        case 0x1163acu: goto label_1163ac;
        case 0x1163bcu: goto label_1163bc;
        case 0x1163d0u: goto label_1163d0;
        case 0x1163dcu: goto label_1163dc;
        case 0x11641cu: goto label_11641c;
        case 0x116428u: goto label_116428;
        case 0x116430u: goto label_116430;
        case 0x116440u: goto label_116440;
        case 0x116454u: goto label_116454;
        case 0x116460u: goto label_116460;
        case 0x11646cu: goto label_11646c;
        case 0x116478u: goto label_116478;
        case 0x116494u: goto label_116494;
        case 0x1164acu: goto label_1164ac;
        case 0x1164b8u: goto label_1164b8;
        case 0x1164fcu: goto label_1164fc;
        case 0x116508u: goto label_116508;
        case 0x11651cu: goto label_11651c;
        case 0x116528u: goto label_116528;
        case 0x116534u: goto label_116534;
        case 0x116540u: goto label_116540;
        case 0x116568u: goto label_116568;
        case 0x116574u: goto label_116574;
        case 0x11658cu: goto label_11658c;
        case 0x116598u: goto label_116598;
        case 0x1165a8u: goto label_1165a8;
        case 0x116634u: goto label_116634;
        case 0x116640u: goto label_116640;
        case 0x116660u: goto label_116660;
        case 0x116670u: goto label_116670;
        case 0x116680u: goto label_116680;
        case 0x116694u: goto label_116694;
        case 0x11669cu: goto label_11669c;
        case 0x1166a8u: goto label_1166a8;
        case 0x1166b4u: goto label_1166b4;
        case 0x1166c0u: goto label_1166c0;
        case 0x1166e0u: goto label_1166e0;
        case 0x1166f0u: goto label_1166f0;
        case 0x116704u: goto label_116704;
        case 0x11672cu: goto label_11672c;
        case 0x116800u: goto label_116800;
        case 0x116880u: goto label_116880;
        case 0x116894u: goto label_116894;
        case 0x1168a4u: goto label_1168a4;
        case 0x1168c0u: goto label_1168c0;
        case 0x1168d4u: goto label_1168d4;
        case 0x1168e4u: goto label_1168e4;
        case 0x116900u: goto label_116900;
        case 0x11697cu: goto label_11697c;
        case 0x116a0cu: goto label_116a0c;
        case 0x116a28u: goto label_116a28;
        case 0x116a40u: goto label_116a40;
        case 0x116a5cu: goto label_116a5c;
        case 0x116a80u: goto label_116a80;
        case 0x116ac0u: goto label_116ac0;
        case 0x116ad0u: goto label_116ad0;
        case 0x116b18u: goto label_116b18;
        case 0x116b38u: goto label_116b38;
        case 0x116b5cu: goto label_116b5c;
        case 0x116b6cu: goto label_116b6c;
        case 0x116b80u: goto label_116b80;
        case 0x116b94u: goto label_116b94;
        case 0x116bb8u: goto label_116bb8;
        case 0x116bd8u: goto label_116bd8;
        case 0x116bf0u: goto label_116bf0;
        case 0x116c04u: goto label_116c04;
        case 0x116c14u: goto label_116c14;
        case 0x116c28u: goto label_116c28;
        case 0x116c44u: goto label_116c44;
        case 0x116c54u: goto label_116c54;
        case 0x116cccu: goto label_116ccc;
        case 0x116cdcu: goto label_116cdc;
        case 0x116d60u: goto label_116d60;
        case 0x116d74u: goto label_116d74;
        case 0x116d88u: goto label_116d88;
        case 0x116db0u: goto label_116db0;
        case 0x116dc0u: goto label_116dc0;
        case 0x116df0u: goto label_116df0;
        case 0x116e30u: goto label_116e30;
        case 0x116e5cu: goto label_116e5c;
        case 0x116e80u: goto label_116e80;
        case 0x116e8cu: goto label_116e8c;
        case 0x116ea0u: goto label_116ea0;
        default: break;
    }

    ctx->pc = 0x115d20u;

    // 0x115d20: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x115d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x115d24: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x115d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x115d28: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x115d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x115d2c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x115d2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d30: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x115d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x115d34: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x115d34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d38: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x115d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x115d3c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x115d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d40: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x115d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x115d44: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x115d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x115d48: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x115d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x115d4c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x115d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x115d50: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x115d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x115d54: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x115d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x115d58: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x115d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x115d5c: 0x8fcb0040  lw          $t3, 0x40($fp)
    ctx->pc = 0x115d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x115d60: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x115d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x115d64: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x115d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x115d68: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x115D68u;
    {
        const bool branch_taken_0x115d68 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D68u;
        // 0x115d6c: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d68) {
            ctx->pc = 0x115D94u;
            goto label_115d94;
        }
    }
    ctx->pc = 0x115D70u;
    // 0x115d70: 0x8fc60044  lw          $a2, 0x44($fp)
    ctx->pc = 0x115d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x115d74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115d78: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x115d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d7c: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x115d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x115d80: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x115d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x115d84: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x115d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x115d88: 0xc046372  jal         func_118DC8
    ctx->pc = 0x115D88u;
    SET_GPR_U32(ctx, 31, 0x115D90u);
    ctx->pc = 0x115D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115D88u;
    // 0x115d8c: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x115D88u, 0x115D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D90u;
label_115d90:
    // 0x115d90: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x115d90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_115d94:
    // 0x115d94: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x115d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x115d98: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x115d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115d9c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x115d9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x115da0: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x115DA0u;
    {
        const bool branch_taken_0x115da0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x115da0) {
            ctx->pc = 0x115DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115DA0u;
            // 0x115da4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115DD4u;
            goto label_115dd4;
        }
    }
    ctx->pc = 0x115DA8u;
    // 0x115da8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x115da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x115dac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x115dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x115db0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x115db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x115db4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115db8: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x115db8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x115dbc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x115dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x115dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x115dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115dc4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x115dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115dc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x115dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x115dcc: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x115dccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x115dd0: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x115dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_115dd4:
    // 0x115dd4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x115dd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115dd8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x115dd8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x115ddc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x115ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x115de0: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x115de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x115de4: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x115DE4u;
    {
        const bool branch_taken_0x115de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x115DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DE4u;
        // 0x115de8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115de4) {
            ctx->pc = 0x115E40u;
            goto label_115e40;
        }
    }
    ctx->pc = 0x115DECu;
    // 0x115dec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115df0: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x115df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x115df4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115df8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x115df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x115dfc: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x115dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x115e00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115E00u;
    {
        const bool branch_taken_0x115e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E00u;
        // 0x115e04: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e00) {
            ctx->pc = 0x115E14u;
            goto label_115e14;
        }
    }
    ctx->pc = 0x115E08u;
    // 0x115e08: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x115e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x115e0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115E0Cu;
    {
        const bool branch_taken_0x115e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E0Cu;
        // 0x115e10: 0x2455d950  addiu       $s5, $v0, -0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e0c) {
            ctx->pc = 0x115E1Cu;
            goto label_115e1c;
        }
    }
    ctx->pc = 0x115E14u;
label_115e14:
    // 0x115e14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x115e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x115e18: 0x2455d960  addiu       $s5, $v0, -0x26A0
    ctx->pc = 0x115e18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
label_115e1c:
    // 0x115e1c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x115e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x115e20: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x115E20u;
    {
        const bool branch_taken_0x115e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E20u;
        // 0x115e24: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e20) {
            ctx->pc = 0x115E78u;
            goto label_115e78;
        }
    }
    ctx->pc = 0x115E28u;
    // 0x115e28: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x115e28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x115e2c: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x115e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x115e30: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x115e30u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x115e34: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x115e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x115e38: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115E38u;
    {
        const bool branch_taken_0x115e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E38u;
        // 0x115e3c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e38) {
            ctx->pc = 0x115E78u;
            goto label_115e78;
        }
    }
    ctx->pc = 0x115E40u;
label_115e40:
    // 0x115e40: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x115E40u;
    SET_GPR_U32(ctx, 31, 0x115E48u);
    ctx->pc = 0x115E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E40u;
    // 0x115e44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x115E40u, 0x115E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E48u;
label_115e48:
    // 0x115e48: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x115E48u;
    {
        const bool branch_taken_0x115e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E48u;
        // 0x115e4c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e48) {
            ctx->pc = 0x115E80u;
            goto label_115e80;
        }
    }
    ctx->pc = 0x115E50u;
    // 0x115e50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115e58: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x115e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x115e5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x115e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x115e60: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x115e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x115e64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115E64u;
    {
        const bool branch_taken_0x115e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E64u;
        // 0x115e68: 0x2475d968  addiu       $s5, $v1, -0x2698 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e64) {
            ctx->pc = 0x115E78u;
            goto label_115e78;
        }
    }
    ctx->pc = 0x115E6Cu;
    // 0x115e6c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x115e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x115e70: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x115e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x115e74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x115e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_115e78:
    // 0x115e78: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x115E78u;
    {
        const bool branch_taken_0x115e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E78u;
        // 0x115e7c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e78) {
            ctx->pc = 0x116EBCu;
            goto label_116ebc;
        }
    }
    ctx->pc = 0x115E80u;
label_115e80:
    // 0x115e80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x115e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e84: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x115e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e88: 0xc0466a4  jal         func_119A90
    ctx->pc = 0x115E88u;
    SET_GPR_U32(ctx, 31, 0x115E90u);
    ctx->pc = 0x115E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E88u;
    // 0x115e8c: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A90u, 0x115E88u, 0x115E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E90u;
label_115e90:
    // 0x115e90: 0x101d02  srl         $v1, $s0, 20
    ctx->pc = 0x115e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x115e94: 0x307407ff  andi        $s4, $v1, 0x7FF
    ctx->pc = 0x115e94u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x115e98: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x115E98u;
    {
        const bool branch_taken_0x115e98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E98u;
        // 0x115e9c: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e98) {
            ctx->pc = 0x115EF0u;
            goto label_115ef0;
        }
    }
    ctx->pc = 0x115EA0u;
    // 0x115ea0: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x115ea0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ea4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x115ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x115ea8: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x115ea8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x115eac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x115eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x115eb0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x115eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x115eb4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x115eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x115eb8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x115eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x115ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x115ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x115ec0: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x115ec0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x115ec4: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x115ec4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x115ec8: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x115ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x115ecc: 0x17103f  dsra32      $v0, $s7, 0
    ctx->pc = 0x115eccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x115ed0: 0x2694fc01  addiu       $s4, $s4, -0x3FF
    ctx->pc = 0x115ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966273));
    // 0x115ed4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x115ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x115ed8: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x115ed8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x115edc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x115edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115ee0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x115ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x115ee4: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x115ee4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x115ee8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x115EE8u;
    {
        const bool branch_taken_0x115ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EE8u;
        // 0x115eec: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ee8) {
            ctx->pc = 0x115F88u;
            goto label_115f88;
        }
    }
    ctx->pc = 0x115EF0u;
label_115ef0:
    // 0x115ef0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x115ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115ef4: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x115ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x115ef8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x115ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x115efc: 0x24940432  addiu       $s4, $a0, 0x432
    ctx->pc = 0x115efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x115f00: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x115f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x115f04: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x115F04u;
    {
        const bool branch_taken_0x115f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F04u;
        // 0x115f08: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f04) {
            ctx->pc = 0x115F2Cu;
            goto label_115f2c;
        }
    }
    ctx->pc = 0x115F0Cu;
    // 0x115f0c: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x115f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x115f10: 0x141823  negu        $v1, $s4
    ctx->pc = 0x115f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x115f14: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x115f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x115f18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x115f18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x115f1c: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x115f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x115f20: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x115f24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115F24u;
    {
        const bool branch_taken_0x115f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F24u;
        // 0x115f28: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f24) {
            ctx->pc = 0x115F38u;
            goto label_115f38;
        }
    }
    ctx->pc = 0x115F2Cu;
label_115f2c:
    // 0x115f2c: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x115f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x115f30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x115f30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x115f34: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x115f34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_115f38:
    // 0x115f38: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x115F38u;
    SET_GPR_U32(ctx, 31, 0x115F40u);
    ctx->pc = 0x115F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F38u;
    // 0x115f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x115F38u, 0x115F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F40u;
label_115f40:
    // 0x115f40: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115F40u;
    {
        const bool branch_taken_0x115f40 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x115F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F40u;
        // 0x115f44: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f40) {
            ctx->pc = 0x115F5Cu;
            goto label_115f5c;
        }
    }
    ctx->pc = 0x115F48u;
    // 0x115f48: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x115f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x115f4c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x115f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x115f50: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x115F50u;
    SET_GPR_U32(ctx, 31, 0x115F58u);
    ctx->pc = 0x115F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F50u;
    // 0x115f54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x115F50u, 0x115F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F58u;
label_115f58:
    // 0x115f58: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x115f58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_115f5c:
    // 0x115f5c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x115f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x115f60: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x115f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x115f64: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x115f64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x115f68: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x115f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x115f6c: 0x2e4b824  and         $s7, $s7, $a0
    ctx->pc = 0x115f6cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
    // 0x115f70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115f78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x115f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x115f7c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x115f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x115f80: 0x2694fbcd  addiu       $s4, $s4, -0x433
    ctx->pc = 0x115f80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966221));
    // 0x115f84: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x115f84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_115f88:
    // 0x115f88: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x115f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x115f8c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x115f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x115f90: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x115F90u;
    SET_GPR_U32(ctx, 31, 0x115F98u);
    ctx->pc = 0x115F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F90u;
    // 0x115f94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x115F90u, 0x115F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F98u;
label_115f98:
    // 0x115f98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x115f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x115f9c: 0xdc25d970  ld          $a1, -0x2690($at)
    ctx->pc = 0x115f9cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD970u));
    // 0x115fa0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x115FA0u;
    SET_GPR_U32(ctx, 31, 0x115FA8u);
    ctx->pc = 0x115FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FA0u;
    // 0x115fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x115FA0u, 0x115FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FA8u;
label_115fa8:
    // 0x115fa8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x115fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x115fac: 0xdc25d978  ld          $a1, -0x2688($at)
    ctx->pc = 0x115facu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD978u));
    // 0x115fb0: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x115FB0u;
    SET_GPR_U32(ctx, 31, 0x115FB8u);
    ctx->pc = 0x115FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FB0u;
    // 0x115fb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x115FB0u, 0x115FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FB8u;
label_115fb8:
    // 0x115fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fbc: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x115FBCu;
    SET_GPR_U32(ctx, 31, 0x115FC4u);
    ctx->pc = 0x115FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FBCu;
    // 0x115fc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x115FBCu, 0x115FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FC4u;
label_115fc4:
    // 0x115fc4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x115fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x115fc8: 0xdc25d980  ld          $a1, -0x2680($at)
    ctx->pc = 0x115fc8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD980u));
    // 0x115fcc: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x115FCCu;
    SET_GPR_U32(ctx, 31, 0x115FD4u);
    ctx->pc = 0x115FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FCCu;
    // 0x115fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x115FCCu, 0x115FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FD4u;
label_115fd4:
    // 0x115fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fd8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x115FD8u;
    SET_GPR_U32(ctx, 31, 0x115FE0u);
    ctx->pc = 0x115FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FD8u;
    // 0x115fdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x115FD8u, 0x115FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FE0u;
label_115fe0:
    // 0x115fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fe4: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x115FE4u;
    SET_GPR_U32(ctx, 31, 0x115FECu);
    ctx->pc = 0x115FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FE4u;
    // 0x115fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x115FE4u, 0x115FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FECu;
label_115fec:
    // 0x115fec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x115fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ff4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x115FF4u;
    SET_GPR_U32(ctx, 31, 0x115FFCu);
    ctx->pc = 0x115FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FF4u;
    // 0x115ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x115FF4u, 0x115FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FFCu;
label_115ffc:
    // 0x115ffc: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x115FFCu;
    {
        const bool branch_taken_0x115ffc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FFCu;
        // 0x116000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ffc) {
            ctx->pc = 0x116024u;
            goto label_116024;
        }
    }
    ctx->pc = 0x116004u;
    // 0x116004: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x116004u;
    SET_GPR_U32(ctx, 31, 0x11600Cu);
    ctx->pc = 0x116008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116004u;
    // 0x116008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x116004u, 0x11600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11600Cu;
label_11600c:
    // 0x11600c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11600cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116010: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116010u;
    SET_GPR_U32(ctx, 31, 0x116018u);
    ctx->pc = 0x116014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116010u;
    // 0x116014: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116010u, 0x116018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116018u;
label_116018:
    // 0x116018: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x116018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11601c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x11601cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x116020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116024:
    // 0x116024: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x116024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x116028: 0x2e620017  sltiu       $v0, $s3, 0x17
    ctx->pc = 0x116028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x11602c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11602Cu;
    {
        const bool branch_taken_0x11602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11602Cu;
        // 0x116030: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11602c) {
            ctx->pc = 0x116060u;
            goto label_116060;
        }
    }
    ctx->pc = 0x116034u;
    // 0x116034: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x116034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x116038: 0x2442da08  addiu       $v0, $v0, -0x25F8
    ctx->pc = 0x116038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957576));
    // 0x11603c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11603cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116044: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x116044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x116048: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116048u;
    SET_GPR_U32(ctx, 31, 0x116050u);
    ctx->pc = 0x11604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116048u;
    // 0x11604c: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116048u, 0x116050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116050u;
label_116050:
    // 0x116050: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x116050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116054: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x116054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x116058: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x116058u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11605c: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x11605cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_116060:
    // 0x116060: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x116060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x116064: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x116064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x116068: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116068u;
    {
        const bool branch_taken_0x116068 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x116068) {
            ctx->pc = 0x11606Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116068u;
            // 0x11606c: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11607Cu;
            goto label_11607c;
        }
    }
    ctx->pc = 0x116070u;
    // 0x116070: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x116070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x116074: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116074u;
    {
        const bool branch_taken_0x116074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116074u;
        // 0x116078: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116074) {
            ctx->pc = 0x116084u;
            goto label_116084;
        }
    }
    ctx->pc = 0x11607Cu;
label_11607c:
    // 0x11607c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x11607cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x116080: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x116080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_116084:
    // 0x116084: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x116084u;
    {
        const bool branch_taken_0x116084 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x116088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116084u;
        // 0x116088: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116084) {
            ctx->pc = 0x1160A0u;
            goto label_1160a0;
        }
    }
    ctx->pc = 0x11608Cu;
    // 0x11608c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x11608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x116090: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x116090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x116094: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x116094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
    // 0x116098: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x116098u;
    {
        const bool branch_taken_0x116098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116098u;
        // 0x11609c: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116098) {
            ctx->pc = 0x1160B8u;
            goto label_1160b8;
        }
    }
    ctx->pc = 0x1160A0u;
label_1160a0:
    // 0x1160a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1160a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1160a4: 0x131023  negu        $v0, $s3
    ctx->pc = 0x1160a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1160a8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1160a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1160ac: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1160acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1160b0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1160b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1160b4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1160b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1160b8:
    // 0x1160b8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1160b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1160bc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1160bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160c0: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1160c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1160c4: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x1160c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x1160c8: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x1160c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1160cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1160CCu;
    {
        const bool branch_taken_0x1160cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1160D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160CCu;
        // 0x1160d0: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160cc) {
            ctx->pc = 0x1160E0u;
            goto label_1160e0;
        }
    }
    ctx->pc = 0x1160D4u;
    // 0x1160d4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1160d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1160d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1160d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160dc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1160dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_1160e0:
    // 0x1160e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1160e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1160e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1160e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1160e8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1160e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1160ec: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1160ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1160f0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1160F0u;
    {
        const bool branch_taken_0x1160f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1160F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1160F0u;
        // 0x1160f4: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1160f0) {
            ctx->pc = 0x116174u;
            goto label_116174;
        }
    }
    ctx->pc = 0x1160F8u;
    // 0x1160f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1160f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1160fc: 0x2442d990  addiu       $v0, $v0, -0x2670
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957456));
    // 0x116100: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x116104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116108: 0x800008  jr          $a0
    ctx->pc = 0x116108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116110u: goto label_116110;
            case 0x11612Cu: goto label_11612c;
            case 0x116130u: goto label_116130;
            case 0x116150u: goto label_116150;
            case 0x116154u: goto label_116154;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x116110u;
label_116110:
    // 0x116110: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x116110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116114: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x116114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116118: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x116118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x11611c: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x11611cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x116120: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x116120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x116124: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x116124u;
    {
        const bool branch_taken_0x116124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116124u;
        // 0x116128: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116124) {
            ctx->pc = 0x116174u;
            goto label_116174;
        }
    }
    ctx->pc = 0x11612Cu;
label_11612c:
    // 0x11612c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x11612cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_116130:
    // 0x116130: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x116134: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x116134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116138: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x116138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11613c: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x11613cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x116140: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x116140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
    // 0x116144: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x116144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x116148: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116148u;
    {
        const bool branch_taken_0x116148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116148u;
        // 0x11614c: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116148) {
            ctx->pc = 0x116174u;
            goto label_116174;
        }
    }
    ctx->pc = 0x116150u;
label_116150:
    // 0x116150: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x116150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_116154:
    // 0x116154: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x116154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x116158: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11615c: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x11615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x116160: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x116160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116164: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x116164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x116168: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x116168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x11616c: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x11616cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x116170: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x116170u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_116174:
    // 0x116174: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x116174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116178: 0x2e820018  sltiu       $v0, $s4, 0x18
    ctx->pc = 0x116178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x11617c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11617Cu;
    {
        const bool branch_taken_0x11617c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11617Cu;
        // 0x116180: 0xafc00044  sw          $zero, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11617c) {
            ctx->pc = 0x1161B8u;
            goto label_1161b8;
        }
    }
    ctx->pc = 0x116184u;
    // 0x116184: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x116184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116188: 0x2c51000f  sltiu       $s1, $v0, 0xF
    ctx->pc = 0x116188u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x11618c: 0x0  nop
    ctx->pc = 0x11618cu;
    // NOP
label_116190:
    // 0x116190: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x116190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x116194: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x116194u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x116198: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x116198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x11619c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1161a0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1161a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1161a4: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x1161a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x1161a8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1161A8u;
    {
        const bool branch_taken_0x1161a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1161a8) {
            ctx->pc = 0x116190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116190;
        }
    }
    ctx->pc = 0x1161B0u;
    // 0x1161b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1161B0u;
    {
        const bool branch_taken_0x1161b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161B0u;
        // 0x1161b4: 0x8fc50044  lw          $a1, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161b0) {
            ctx->pc = 0x1161C4u;
            goto label_1161c4;
        }
    }
    ctx->pc = 0x1161B8u;
label_1161b8:
    // 0x1161b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1161b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1161bc: 0x2c71000f  sltiu       $s1, $v1, 0xF
    ctx->pc = 0x1161bcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1161c0: 0x8fc50044  lw          $a1, 0x44($fp)
    ctx->pc = 0x1161c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_1161c4:
    // 0x1161c4: 0xc046348  jal         func_118D20
    ctx->pc = 0x1161C4u;
    SET_GPR_U32(ctx, 31, 0x1161CCu);
    ctx->pc = 0x1161C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161C4u;
    // 0x1161c8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x1161C4u, 0x1161CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161CCu;
label_1161cc:
    // 0x1161cc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1161ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1161d0: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x1161d0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x1161d4: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
    ctx->pc = 0x1161D4u;
    {
        const bool branch_taken_0x1161d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161D4u;
        // 0x1161d8: 0x8fb50058  lw          $s5, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161d4) {
            ctx->pc = 0x1165E0u;
            goto label_1165e0;
        }
    }
    ctx->pc = 0x1161DCu;
    // 0x1161dc: 0x12400100  beqz        $s2, . + 4 + (0x100 << 2)
    ctx->pc = 0x1161DCu;
    {
        const bool branch_taken_0x1161dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1161E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161DCu;
        // 0x1161e0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161dc) {
            ctx->pc = 0x1165E0u;
            goto label_1165e0;
        }
    }
    ctx->pc = 0x1161E4u;
    // 0x1161e4: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x1161e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161e8: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x1161e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x1161ec: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1161ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1161f0: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x1161F0u;
    {
        const bool branch_taken_0x1161f0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1161F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1161F0u;
        // 0x1161f4: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1161f0) {
            ctx->pc = 0x116284u;
            goto label_116284;
        }
    }
    ctx->pc = 0x1161F8u;
    // 0x1161f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1161f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1161fc: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x1161fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x116200: 0x2442da08  addiu       $v0, $v0, -0x25F8
    ctx->pc = 0x116200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957576));
    // 0x116204: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x116204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x116208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11620c: 0x138103  sra         $s0, $s3, 4
    ctx->pc = 0x11620cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
    // 0x116210: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x116210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x116214: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116214u;
    {
        const bool branch_taken_0x116214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116214u;
        // 0x116218: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116214) {
            ctx->pc = 0x116238u;
            goto label_116238;
        }
    }
    ctx->pc = 0x11621Cu;
    // 0x11621c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x116220: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116224: 0xdc45daf0  ld          $a1, -0x2510($v0)
    ctx->pc = 0x116224u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3ADAF0u));
    // 0x116228: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x116228u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x11622c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x11622Cu;
    SET_GPR_U32(ctx, 31, 0x116234u);
    ctx->pc = 0x116230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11622Cu;
    // 0x116230: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x11622Cu, 0x116234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x116234u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116238:
    // 0x116238: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x116238u;
    {
        const bool branch_taken_0x116238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116238u;
        // 0x11623c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116238) {
            ctx->pc = 0x116270u;
            goto label_116270;
        }
    }
    ctx->pc = 0x116240u;
    // 0x116240: 0x2451dad0  addiu       $s1, $v0, -0x2530
    ctx->pc = 0x116240u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957776));
    // 0x116244: 0x0  nop
    ctx->pc = 0x116244u;
    // NOP
label_116248:
    // 0x116248: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x116248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x11624c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11624Cu;
    {
        const bool branch_taken_0x11624c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11624Cu;
        // 0x116250: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11624c) {
            ctx->pc = 0x116264u;
            goto label_116264;
        }
    }
    ctx->pc = 0x116254u;
    // 0x116254: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x116254u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x116258: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116258u;
    SET_GPR_U32(ctx, 31, 0x116260u);
    ctx->pc = 0x11625Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116258u;
    // 0x11625c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116258u, 0x116260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116260u;
label_116260:
    // 0x116260: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116260u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116264:
    // 0x116264: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x116264u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x116268: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x116268u;
    {
        const bool branch_taken_0x116268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116268u;
        // 0x11626c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116268) {
            ctx->pc = 0x116248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116248;
        }
    }
    ctx->pc = 0x116270u;
label_116270:
    // 0x116270: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116274: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x116274u;
    SET_GPR_U32(ctx, 31, 0x11627Cu);
    ctx->pc = 0x116278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116274u;
    // 0x116278: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x116274u, 0x11627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11627Cu;
label_11627c:
    // 0x11627c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x11627Cu;
    {
        const bool branch_taken_0x11627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11627Cu;
        // 0x116280: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11627c) {
            ctx->pc = 0x1162E8u;
            goto label_1162e8;
        }
    }
    ctx->pc = 0x116284u;
label_116284:
    // 0x116284: 0x138823  negu        $s1, $s3
    ctx->pc = 0x116284u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x116288: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x116288u;
    {
        const bool branch_taken_0x116288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116288u;
        // 0x11628c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116288) {
            ctx->pc = 0x1162E8u;
            goto label_1162e8;
        }
    }
    ctx->pc = 0x116290u;
    // 0x116290: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x116290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x116294: 0x2463da08  addiu       $v1, $v1, -0x25F8
    ctx->pc = 0x116294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957576));
    // 0x116298: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x116298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x11629c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11629cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1162a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1162a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162a4: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1162a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1162a8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1162A8u;
    SET_GPR_U32(ctx, 31, 0x1162B0u);
    ctx->pc = 0x1162ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162A8u;
    // 0x1162ac: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1162A8u, 0x1162B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162B0u;
label_1162b0:
    // 0x1162b0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1162B0u;
    {
        const bool branch_taken_0x1162b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162B0u;
        // 0x1162b4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162b0) {
            ctx->pc = 0x1162E8u;
            goto label_1162e8;
        }
    }
    ctx->pc = 0x1162B8u;
    // 0x1162b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1162b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1162bc: 0x2451dad0  addiu       $s1, $v0, -0x2530
    ctx->pc = 0x1162bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957776));
label_1162c0:
    // 0x1162c0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1162c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1162c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1162C4u;
    {
        const bool branch_taken_0x1162c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1162C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162C4u;
        // 0x1162c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162c4) {
            ctx->pc = 0x1162DCu;
            goto label_1162dc;
        }
    }
    ctx->pc = 0x1162CCu;
    // 0x1162cc: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1162ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1162d0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1162D0u;
    SET_GPR_U32(ctx, 31, 0x1162D8u);
    ctx->pc = 0x1162D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162D0u;
    // 0x1162d4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1162D0u, 0x1162D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162D8u;
label_1162d8:
    // 0x1162d8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1162d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1162dc:
    // 0x1162dc: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1162dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1162e0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1162E0u;
    {
        const bool branch_taken_0x1162e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1162E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1162E0u;
        // 0x1162e4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1162e0) {
            ctx->pc = 0x1162C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1162c0;
        }
    }
    ctx->pc = 0x1162E8u;
label_1162e8:
    // 0x1162e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1162e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1162ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1162ECu;
    {
        const bool branch_taken_0x1162ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1162ec) {
            ctx->pc = 0x116340u;
            goto label_116340;
        }
    }
    ctx->pc = 0x1162F4u;
    // 0x1162f4: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x1162f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1162f8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1162f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1162fc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1162FCu;
    SET_GPR_U32(ctx, 31, 0x116304u);
    ctx->pc = 0x116300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1162FCu;
    // 0x116300: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1162FCu, 0x116304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116304u;
label_116304:
    // 0x116304: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x116304u;
    {
        const bool branch_taken_0x116304 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116304u;
        // 0x116308: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116304) {
            ctx->pc = 0x116340u;
            goto label_116340;
        }
    }
    ctx->pc = 0x11630Cu;
    // 0x11630c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11630Cu;
    {
        const bool branch_taken_0x11630c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11630c) {
            ctx->pc = 0x116340u;
            goto label_116340;
        }
    }
    ctx->pc = 0x116314u;
    // 0x116314: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x116314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116318: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x116318u;
    {
        const bool branch_taken_0x116318 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x11631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116318u;
        // 0x11631c: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116318) {
            ctx->pc = 0x1165CCu;
            goto label_1165cc;
        }
    }
    ctx->pc = 0x116320u;
    // 0x116320: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x116320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116324: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x116328: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x11632c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x11632cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x116330: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x116330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x116334: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116334u;
    SET_GPR_U32(ctx, 31, 0x11633Cu);
    ctx->pc = 0x116338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116334u;
    // 0x116338: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116334u, 0x11633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11633Cu;
label_11633c:
    // 0x11633c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11633cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116340:
    // 0x116340: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x116340u;
    SET_GPR_U32(ctx, 31, 0x116348u);
    ctx->pc = 0x116344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116340u;
    // 0x116344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x116340u, 0x116348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116348u;
label_116348:
    // 0x116348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11634c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11634Cu;
    SET_GPR_U32(ctx, 31, 0x116354u);
    ctx->pc = 0x116350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11634Cu;
    // 0x116350: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11634Cu, 0x116354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116354u;
label_116354:
    // 0x116354: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x116354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x116358: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x116358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11635c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11635Cu;
    SET_GPR_U32(ctx, 31, 0x116364u);
    ctx->pc = 0x116360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11635Cu;
    // 0x116360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11635Cu, 0x116364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116364u;
label_116364:
    // 0x116364: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116368: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x116368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11636c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x11636cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x116370: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x116370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x116374: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x116374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x116378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11637c: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x11637cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x116380: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x116380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x116384: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x116384u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x116388: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x116388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11638c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x11638Cu;
    {
        const bool branch_taken_0x11638c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11638c) {
            ctx->pc = 0x116390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11638Cu;
            // 0x116390: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1163ECu;
            goto label_1163ec;
        }
    }
    ctx->pc = 0x116394u;
    // 0x116394: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x116394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x116398: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x116398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11639c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163a0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1163a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1163a4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1163A4u;
    SET_GPR_U32(ctx, 31, 0x1163ACu);
    ctx->pc = 0x1163A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163A4u;
    // 0x1163a8: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1163A4u, 0x1163ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163ACu;
label_1163ac:
    // 0x1163ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1163acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1163b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163b4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1163B4u;
    SET_GPR_U32(ctx, 31, 0x1163BCu);
    ctx->pc = 0x1163B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163B4u;
    // 0x1163b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1163B4u, 0x1163BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163BCu;
label_1163bc:
    // 0x1163bc: 0x1c4001ca  bgtz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x1163BCu;
    {
        const bool branch_taken_0x1163bc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1163C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163BCu;
        // 0x1163c0: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163bc) {
            ctx->pc = 0x116AE8u;
            goto label_116ae8;
        }
    }
    ctx->pc = 0x1163C4u;
    // 0x1163c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1163c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163c8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1163C8u;
    SET_GPR_U32(ctx, 31, 0x1163D0u);
    ctx->pc = 0x1163CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163C8u;
    // 0x1163cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1163C8u, 0x1163D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163D0u;
label_1163d0:
    // 0x1163d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1163d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163d4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1163D4u;
    SET_GPR_U32(ctx, 31, 0x1163DCu);
    ctx->pc = 0x1163D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163D4u;
    // 0x1163d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1163D4u, 0x1163DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163DCu;
label_1163dc:
    // 0x1163dc: 0x44001be  bltz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x1163DCu;
    {
        const bool branch_taken_0x1163dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1163E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163DCu;
        // 0x1163e0: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163dc) {
            ctx->pc = 0x116AD8u;
            goto label_116ad8;
        }
    }
    ctx->pc = 0x1163E4u;
    // 0x1163e4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1163E4u;
    {
        const bool branch_taken_0x1163e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163E4u;
        // 0x1163e8: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163e4) {
            ctx->pc = 0x1165D4u;
            goto label_1165d4;
        }
    }
    ctx->pc = 0x1163ECu;
label_1163ec:
    // 0x1163ec: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1163ECu;
    {
        const bool branch_taken_0x1163ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163ECu;
        // 0x1163f0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163ec) {
            ctx->pc = 0x1164D8u;
            goto label_1164d8;
        }
    }
    ctx->pc = 0x1163F4u;
    // 0x1163f4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1163f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1163f8: 0x2463da08  addiu       $v1, $v1, -0x25F8
    ctx->pc = 0x1163f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957576));
    // 0x1163fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1163fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116400: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x116400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x116404: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x116404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x116408: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x116408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11640c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11640cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x116410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x116410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x116414: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x116414u;
    SET_GPR_U32(ctx, 31, 0x11641Cu);
    ctx->pc = 0x116418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116414u;
    // 0x116418: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x116414u, 0x11641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11641Cu;
label_11641c:
    // 0x11641c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11641cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116420: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x116420u;
    SET_GPR_U32(ctx, 31, 0x116428u);
    ctx->pc = 0x116424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116420u;
    // 0x116424: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x116420u, 0x116428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116428u;
label_116428:
    // 0x116428: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x116428u;
    {
        const bool branch_taken_0x116428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116428u;
        // 0x11642c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116428) {
            ctx->pc = 0x116458u;
            goto label_116458;
        }
    }
    ctx->pc = 0x116430u;
label_116430:
    // 0x116430: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x116434: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116438: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116438u;
    SET_GPR_U32(ctx, 31, 0x116440u);
    ctx->pc = 0x11643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116438u;
    // 0x11643c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116438u, 0x116440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116440u;
label_116440:
    // 0x116440: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x116444: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116448: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11644c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11644Cu;
    SET_GPR_U32(ctx, 31, 0x116454u);
    ctx->pc = 0x116450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11644Cu;
    // 0x116450: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11644Cu, 0x116454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116454u;
label_116454:
    // 0x116454: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x116454u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116458:
    // 0x116458: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x116458u;
    SET_GPR_U32(ctx, 31, 0x116460u);
    ctx->pc = 0x11645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116458u;
    // 0x11645c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x116458u, 0x116460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116460u;
label_116460:
    // 0x116460: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116464: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x116464u;
    SET_GPR_U32(ctx, 31, 0x11646Cu);
    ctx->pc = 0x116468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116464u;
    // 0x116468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x116464u, 0x11646Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11646Cu;
label_11646c:
    // 0x11646c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11646cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116470: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x116470u;
    SET_GPR_U32(ctx, 31, 0x116478u);
    ctx->pc = 0x116474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116470u;
    // 0x116474: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x116470u, 0x116478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116478u;
label_116478:
    // 0x116478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11647c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11647cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116480: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x116480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x116484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116488: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x116488u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11648c: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11648Cu;
    SET_GPR_U32(ctx, 31, 0x116494u);
    ctx->pc = 0x116490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11648Cu;
    // 0x116490: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11648Cu, 0x116494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116494u;
label_116494:
    // 0x116494: 0x442027f  bltzl       $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x116494u;
    {
        const bool branch_taken_0x116494 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x116494) {
            ctx->pc = 0x116498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116494u;
            // 0x116498: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x11649Cu;
    // 0x11649c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x11649cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1164a0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1164a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1164a4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1164A4u;
    SET_GPR_U32(ctx, 31, 0x1164ACu);
    ctx->pc = 0x1164A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1164A4u;
    // 0x1164a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1164A4u, 0x1164ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164ACu;
label_1164ac:
    // 0x1164ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1164acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164b0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1164B0u;
    SET_GPR_U32(ctx, 31, 0x1164B8u);
    ctx->pc = 0x1164B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1164B0u;
    // 0x1164b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1164B0u, 0x1164B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164B8u;
label_1164b8:
    // 0x1164b8: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1164B8u;
    {
        const bool branch_taken_0x1164b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1164BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164B8u;
        // 0x1164bc: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164b8) {
            ctx->pc = 0x11671Cu;
            goto label_11671c;
        }
    }
    ctx->pc = 0x1164C0u;
    // 0x1164c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1164c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1164c4: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1164c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1164c8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1164C8u;
    {
        const bool branch_taken_0x1164c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1164c8) {
            ctx->pc = 0x116430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116430;
        }
    }
    ctx->pc = 0x1164D0u;
    // 0x1164d0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1164D0u;
    {
        const bool branch_taken_0x1164d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1164D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164D0u;
        // 0x1164d4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164d0) {
            ctx->pc = 0x1165D0u;
            goto label_1165d0;
        }
    }
    ctx->pc = 0x1164D8u;
label_1164d8:
    // 0x1164d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1164d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1164dc: 0x2463da08  addiu       $v1, $v1, -0x25F8
    ctx->pc = 0x1164dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957576));
    // 0x1164e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1164e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164e4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1164e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1164e8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1164e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1164ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1164ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1164f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1164f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1164f4: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1164F4u;
    SET_GPR_U32(ctx, 31, 0x1164FCu);
    ctx->pc = 0x1164F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1164F4u;
    // 0x1164f8: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1164F4u, 0x1164FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164FCu;
label_1164fc:
    // 0x1164fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1164FCu;
    {
        const bool branch_taken_0x1164fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1164FCu;
        // 0x116500: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1164fc) {
            ctx->pc = 0x116520u;
            goto label_116520;
        }
    }
    ctx->pc = 0x116504u;
    // 0x116504: 0x0  nop
    ctx->pc = 0x116504u;
    // NOP
label_116508:
    // 0x116508: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x11650c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x11650cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x116510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116514: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116514u;
    SET_GPR_U32(ctx, 31, 0x11651Cu);
    ctx->pc = 0x116518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116514u;
    // 0x116518: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116514u, 0x11651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11651Cu;
label_11651c:
    // 0x11651c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11651cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116520:
    // 0x116520: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x116520u;
    SET_GPR_U32(ctx, 31, 0x116528u);
    ctx->pc = 0x116524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116520u;
    // 0x116524: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x116520u, 0x116528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116528u;
label_116528:
    // 0x116528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11652c: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x11652Cu;
    SET_GPR_U32(ctx, 31, 0x116534u);
    ctx->pc = 0x116530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11652Cu;
    // 0x116530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x11652Cu, 0x116534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116534u;
label_116534:
    // 0x116534: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116538: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x116538u;
    SET_GPR_U32(ctx, 31, 0x116540u);
    ctx->pc = 0x11653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116538u;
    // 0x11653c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x116538u, 0x116540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116540u;
label_116540:
    // 0x116540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116544: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x116548: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x116548u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11654c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116550: 0x1682ffed  bne         $s4, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x116550u;
    {
        const bool branch_taken_0x116550 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x116554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116550u;
        // 0x116554: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116550) {
            ctx->pc = 0x116508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116508;
        }
    }
    ctx->pc = 0x116558u;
    // 0x116558: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x116558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11655c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11655cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x116560: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x116560u;
    SET_GPR_U32(ctx, 31, 0x116568u);
    ctx->pc = 0x116564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116560u;
    // 0x116564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x116560u, 0x116568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116568u;
label_116568:
    // 0x116568: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11656c: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11656Cu;
    SET_GPR_U32(ctx, 31, 0x116574u);
    ctx->pc = 0x116570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11656Cu;
    // 0x116570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11656Cu, 0x116574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116574u;
label_116574:
    // 0x116574: 0x5c40006a  bgtzl       $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x116574u;
    {
        const bool branch_taken_0x116574 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x116574) {
            ctx->pc = 0x116578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116574u;
            // 0x116578: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116720u;
            goto label_116720;
        }
    }
    ctx->pc = 0x11657Cu;
    // 0x11657c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x11657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x116580: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x116580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x116584: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x116584u;
    SET_GPR_U32(ctx, 31, 0x11658Cu);
    ctx->pc = 0x116588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116584u;
    // 0x116588: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x116584u, 0x11658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11658Cu;
label_11658c:
    // 0x11658c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116590: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116590u;
    SET_GPR_U32(ctx, 31, 0x116598u);
    ctx->pc = 0x116594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116590u;
    // 0x116594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116590u, 0x116598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116598u;
label_116598:
    // 0x116598: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x116598u;
    {
        const bool branch_taken_0x116598 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116598u;
        // 0x11659c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116598) {
            ctx->pc = 0x1165D0u;
            goto label_1165d0;
        }
    }
    ctx->pc = 0x1165A0u;
    // 0x1165a0: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x1165a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1165a4: 0x0  nop
    ctx->pc = 0x1165a4u;
    // NOP
label_1165a8:
    // 0x1165a8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1165a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1165ac: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1165acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1165b0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x1165b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1165b4: 0x0  nop
    ctx->pc = 0x1165b4u;
    // NOP
    // 0x1165b8: 0x0  nop
    ctx->pc = 0x1165b8u;
    // NOP
    // 0x1165bc: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1165BCu;
    {
        const bool branch_taken_0x1165bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1165bc) {
            ctx->pc = 0x1165A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1165a8;
        }
    }
    ctx->pc = 0x1165C4u;
    // 0x1165c4: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x1165C4u;
    {
        const bool branch_taken_0x1165c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165C4u;
        // 0x1165c8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165c4) {
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x1165CCu;
label_1165cc:
    // 0x1165cc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1165ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1165d0:
    // 0x1165d0: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x1165d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1165d4:
    // 0x1165d4: 0x8fb3002c  lw          $s3, 0x2C($sp)
    ctx->pc = 0x1165d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1165d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1165d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1165dc: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x1165dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1165e0:
    // 0x1165e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1165e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1165e4: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1165E4u;
    {
        const bool branch_taken_0x1165e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1165E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165E4u;
        // 0x1165e8: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165e4) {
            ctx->pc = 0x116760u;
            goto label_116760;
        }
    }
    ctx->pc = 0x1165ECu;
    // 0x1165ec: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1165ECu;
    {
        const bool branch_taken_0x1165ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1165F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1165ECu;
        // 0x1165f0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1165ec) {
            ctx->pc = 0x116760u;
            goto label_116760;
        }
    }
    ctx->pc = 0x1165F4u;
    // 0x1165f4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1165f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1165f8: 0x2442da08  addiu       $v0, $v0, -0x25F8
    ctx->pc = 0x1165f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957576));
    // 0x1165fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1165fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116600: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x116600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x116604: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x116604u;
    {
        const bool branch_taken_0x116604 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116604u;
        // 0x116608: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116604) {
            ctx->pc = 0x116650u;
            goto label_116650;
        }
    }
    ctx->pc = 0x11660Cu;
    // 0x11660c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116610: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x116610u;
    {
        const bool branch_taken_0x116610 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x116614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116610u;
        // 0x116614: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116610) {
            ctx->pc = 0x116658u;
            goto label_116658;
        }
    }
    ctx->pc = 0x116618u;
    // 0x116618: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x116618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x11661c: 0x460012e  bltz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x11661Cu;
    {
        const bool branch_taken_0x11661c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x116620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11661Cu;
        // 0x116620: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11661c) {
            ctx->pc = 0x116AD8u;
            goto label_116ad8;
        }
    }
    ctx->pc = 0x116624u;
    // 0x116624: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x116624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x116628: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x116628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11662c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11662Cu;
    SET_GPR_U32(ctx, 31, 0x116634u);
    ctx->pc = 0x116630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11662Cu;
    // 0x116630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11662Cu, 0x116634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116634u;
label_116634:
    // 0x116634: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116638: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116638u;
    SET_GPR_U32(ctx, 31, 0x116640u);
    ctx->pc = 0x11663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116638u;
    // 0x11663c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116638u, 0x116640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116640u;
label_116640:
    // 0x116640: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x116640u;
    {
        const bool branch_taken_0x116640 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x116644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116640u;
        // 0x116644: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116640) {
            ctx->pc = 0x116AD8u;
            goto label_116ad8;
        }
    }
    ctx->pc = 0x116648u;
    // 0x116648: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x116648u;
    {
        const bool branch_taken_0x116648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116648u;
        // 0x11664c: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116648) {
            ctx->pc = 0x116AECu;
            goto label_116aec;
        }
    }
    ctx->pc = 0x116650u;
label_116650:
    // 0x116650: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x116650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116654: 0x0  nop
    ctx->pc = 0x116654u;
    // NOP
label_116658:
    // 0x116658: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x116658u;
    {
        const bool branch_taken_0x116658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116658u;
        // 0x11665c: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116658) {
            ctx->pc = 0x116688u;
            goto label_116688;
        }
    }
    ctx->pc = 0x116660u;
label_116660:
    // 0x116660: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x116660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x116664: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x116664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x116668: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x116668u;
    SET_GPR_U32(ctx, 31, 0x116670u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x116668u, 0x116670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116670u;
label_116670:
    // 0x116670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116678: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116678u;
    SET_GPR_U32(ctx, 31, 0x116680u);
    ctx->pc = 0x11667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116678u;
    // 0x11667c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116678u, 0x116680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116680u;
label_116680:
    // 0x116680: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x116680u;
    {
        const bool branch_taken_0x116680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116680u;
        // 0x116684: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116680) {
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x116688u;
label_116688:
    // 0x116688: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11668c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x11668Cu;
    SET_GPR_U32(ctx, 31, 0x116694u);
    ctx->pc = 0x116690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11668Cu;
    // 0x116690: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x11668Cu, 0x116694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116694u;
label_116694:
    // 0x116694: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x116694u;
    SET_GPR_U32(ctx, 31, 0x11669Cu);
    ctx->pc = 0x116698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116694u;
    // 0x116698: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x116694u, 0x11669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11669Cu;
label_11669c:
    // 0x11669c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11669cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166a0: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1166A0u;
    SET_GPR_U32(ctx, 31, 0x1166A8u);
    ctx->pc = 0x1166A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166A0u;
    // 0x1166a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1166A0u, 0x1166A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166A8u;
label_1166a8:
    // 0x1166a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1166a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166ac: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1166ACu;
    SET_GPR_U32(ctx, 31, 0x1166B4u);
    ctx->pc = 0x1166B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166ACu;
    // 0x1166b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1166ACu, 0x1166B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166B4u;
label_1166b4:
    // 0x1166b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1166b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166b8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1166B8u;
    SET_GPR_U32(ctx, 31, 0x1166C0u);
    ctx->pc = 0x1166BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166B8u;
    // 0x1166bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1166B8u, 0x1166C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166C0u;
label_1166c0:
    // 0x1166c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1166c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166c4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1166c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1166c8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1166c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1166cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1166ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1166d0: 0x1684ffe3  bne         $s4, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1166D0u;
    {
        const bool branch_taken_0x1166d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1166D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166D0u;
        // 0x1166d4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166d0) {
            ctx->pc = 0x116660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116660;
        }
    }
    ctx->pc = 0x1166D8u;
    // 0x1166d8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1166D8u;
    SET_GPR_U32(ctx, 31, 0x1166E0u);
    ctx->pc = 0x1166DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166D8u;
    // 0x1166dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1166D8u, 0x1166E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166E0u;
label_1166e0:
    // 0x1166e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1166e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1166e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166e8: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1166E8u;
    SET_GPR_U32(ctx, 31, 0x1166F0u);
    ctx->pc = 0x1166ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166E8u;
    // 0x1166ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1166E8u, 0x1166F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166F0u;
label_1166f0:
    // 0x1166f0: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1166F0u;
    {
        const bool branch_taken_0x1166f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1166F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166F0u;
        // 0x1166f4: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166f0) {
            ctx->pc = 0x116724u;
            goto label_116724;
        }
    }
    ctx->pc = 0x1166F8u;
    // 0x1166f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1166f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166fc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1166FCu;
    SET_GPR_U32(ctx, 31, 0x116704u);
    ctx->pc = 0x116700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166FCu;
    // 0x116700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1166FCu, 0x116704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116704u;
label_116704:
    // 0x116704: 0x144001e3  bnez        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x116704u;
    {
        const bool branch_taken_0x116704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116704u;
        // 0x116708: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116704) {
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x11670Cu;
    // 0x11670c: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x11670Cu;
    {
        const bool branch_taken_0x11670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11670Cu;
        // 0x116710: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11670c) {
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x116714u;
    // 0x116714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116714u;
    {
        const bool branch_taken_0x116714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116714u;
        // 0x116718: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116714) {
            ctx->pc = 0x116728u;
            goto label_116728;
        }
    }
    ctx->pc = 0x11671Cu;
label_11671c:
    // 0x11671c: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x11671cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_116720:
    // 0x116720: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x116720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_116724:
    // 0x116724: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x116724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_116728:
    // 0x116728: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x116728u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_11672c:
    // 0x11672c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x11672cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x116730: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x116730u;
    {
        const bool branch_taken_0x116730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x116734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116730u;
        // 0x116734: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116730) {
            ctx->pc = 0x116750u;
            goto label_116750;
        }
    }
    ctx->pc = 0x116738u;
    // 0x116738: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x116738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11673c: 0x56a2fffb  bnel        $s5, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x11673Cu;
    {
        const bool branch_taken_0x11673c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x11673c) {
            ctx->pc = 0x116740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11673Cu;
            // 0x116740: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11672Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11672c;
        }
    }
    ctx->pc = 0x116744u;
    // 0x116744: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x116744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x116748: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x116748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11674c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x11674cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_116750:
    // 0x116750: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x116750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116754: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x116754u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116758: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x116758u;
    {
        const bool branch_taken_0x116758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116758u;
        // 0x11675c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116758) {
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x116760u;
label_116760:
    // 0x116760: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x116760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x116764: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x116764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116768: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x116768u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11676c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x11676cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x116770: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x116770u;
    {
        const bool branch_taken_0x116770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116770u;
        // 0x116774: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116770) {
            ctx->pc = 0x116820u;
            goto label_116820;
        }
    }
    ctx->pc = 0x116778u;
    // 0x116778: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x116778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11677c: 0x28570002  slti        $s7, $v0, 0x2
    ctx->pc = 0x11677cu;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x116780: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x116780u;
    {
        const bool branch_taken_0x116780 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x116784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116780u;
        // 0x116784: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116780) {
            ctx->pc = 0x1167A0u;
            goto label_1167a0;
        }
    }
    ctx->pc = 0x116788u;
    // 0x116788: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x116788u;
    {
        const bool branch_taken_0x116788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116788u;
        // 0x11678c: 0x24740433  addiu       $s4, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116788) {
            ctx->pc = 0x1167F4u;
            goto label_1167f4;
        }
    }
    ctx->pc = 0x116790u;
    // 0x116790: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x116790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x116794: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x116794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x116798: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x116798u;
    {
        const bool branch_taken_0x116798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116798u;
        // 0x11679c: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116798) {
            ctx->pc = 0x1167F4u;
            goto label_1167f4;
        }
    }
    ctx->pc = 0x1167A0u;
label_1167a0:
    // 0x1167a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1167a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1167a4: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x1167a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1167a8: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1167a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1167ac: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x1167acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1167b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1167B0u;
    {
        const bool branch_taken_0x1167b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1167B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167B0u;
        // 0x1167b4: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167b0) {
            ctx->pc = 0x1167C0u;
            goto label_1167c0;
        }
    }
    ctx->pc = 0x1167B8u;
    // 0x1167b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1167B8u;
    {
        const bool branch_taken_0x1167b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167B8u;
        // 0x1167bc: 0x709023  subu        $s2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167b8) {
            ctx->pc = 0x1167DCu;
            goto label_1167dc;
        }
    }
    ctx->pc = 0x1167C0u;
label_1167c0:
    // 0x1167c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1167c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167c4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1167c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1167c8: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1167c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1167cc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1167ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1167d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1167d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1167d4: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x1167d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x1167d8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1167d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_1167dc:
    // 0x1167dc: 0x8fb40020  lw          $s4, 0x20($sp)
    ctx->pc = 0x1167dcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1167e0: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1167E0u;
    {
        const bool branch_taken_0x1167e0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1167E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167E0u;
        // 0x1167e4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167e0) {
            ctx->pc = 0x1167F8u;
            goto label_1167f8;
        }
    }
    ctx->pc = 0x1167E8u;
    // 0x1167e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1167e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1167ec: 0x748823  subu        $s1, $v1, $s4
    ctx->pc = 0x1167ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1167f0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1167f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1167f4:
    // 0x1167f4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1167f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1167f8:
    // 0x1167f8: 0xc046468  jal         func_1191A0
    ctx->pc = 0x1167F8u;
    SET_GPR_U32(ctx, 31, 0x116800u);
    ctx->pc = 0x1167FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167F8u;
    // 0x1167fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191A0u, 0x1167F8u, 0x116800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116800u;
label_116800:
    // 0x116800: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x116804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x116804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116808: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x116808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11680c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x11680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x116810: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x116810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x116814: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x116814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x116818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116818u;
    {
        const bool branch_taken_0x116818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116818u;
        // 0x11681c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116818) {
            ctx->pc = 0x116828u;
            goto label_116828;
        }
    }
    ctx->pc = 0x116820u;
label_116820:
    // 0x116820: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x116820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116824: 0x28770002  slti        $s7, $v1, 0x2
    ctx->pc = 0x116824u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_116828:
    // 0x116828: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x116828u;
    {
        const bool branch_taken_0x116828 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x11682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116828u;
        // 0x11682c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116828) {
            ctx->pc = 0x116858u;
            goto label_116858;
        }
    }
    ctx->pc = 0x116830u;
    // 0x116830: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x116830u;
    {
        const bool branch_taken_0x116830 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x116834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116830u;
        // 0x116834: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116830) {
            ctx->pc = 0x116858u;
            goto label_116858;
        }
    }
    ctx->pc = 0x116838u;
    // 0x116838: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x116838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x11683c: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x11683cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 17));
    // 0x116840: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x116840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x116844: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x116844u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x116848: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x116848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x11684c: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x11684cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x116850: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x116850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x116854: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x116854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_116858:
    // 0x116858: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x116858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11685c: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11685Cu;
    {
        const bool branch_taken_0x11685c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x116860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11685Cu;
        // 0x116860: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11685c) {
            ctx->pc = 0x1168D8u;
            goto label_1168d8;
        }
    }
    ctx->pc = 0x116864u;
    // 0x116864: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x116864u;
    {
        const bool branch_taken_0x116864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116864u;
        // 0x116868: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116864) {
            ctx->pc = 0x1168C8u;
            goto label_1168c8;
        }
    }
    ctx->pc = 0x11686Cu;
    // 0x11686c: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x11686Cu;
    {
        const bool branch_taken_0x11686c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x116870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11686Cu;
        // 0x116870: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11686c) {
            ctx->pc = 0x1168A4u;
            goto label_1168a4;
        }
    }
    ctx->pc = 0x116874u;
    // 0x116874: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116878: 0xc046502  jal         func_119408
    ctx->pc = 0x116878u;
    SET_GPR_U32(ctx, 31, 0x116880u);
    ctx->pc = 0x11687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116878u;
    // 0x11687c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119408u, 0x116878u, 0x116880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116880u;
label_116880:
    // 0x116880: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x116884: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116888: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x116888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11688c: 0xc046476  jal         func_1191D8
    ctx->pc = 0x11688Cu;
    SET_GPR_U32(ctx, 31, 0x116894u);
    ctx->pc = 0x116890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11688Cu;
    // 0x116890: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191D8u, 0x11688Cu, 0x116894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116894u;
label_116894:
    // 0x116894: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116898: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11689c: 0xc046372  jal         func_118DC8
    ctx->pc = 0x11689Cu;
    SET_GPR_U32(ctx, 31, 0x1168A4u);
    ctx->pc = 0x1168A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11689Cu;
    // 0x1168a0: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x11689Cu, 0x1168A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168A4u;
label_1168a4:
    // 0x1168a4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1168a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1168a8: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1168a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1168ac: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1168ACu;
    {
        const bool branch_taken_0x1168ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1168B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168ACu;
        // 0x1168b0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168ac) {
            ctx->pc = 0x1168D8u;
            goto label_1168d8;
        }
    }
    ctx->pc = 0x1168B4u;
    // 0x1168b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1168b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168b8: 0xc046502  jal         func_119408
    ctx->pc = 0x1168B8u;
    SET_GPR_U32(ctx, 31, 0x1168C0u);
    ctx->pc = 0x1168BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168B8u;
    // 0x1168bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119408u, 0x1168B8u, 0x1168C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168C0u;
label_1168c0:
    // 0x1168c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1168C0u;
    {
        const bool branch_taken_0x1168c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1168C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168C0u;
        // 0x1168c4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168c0) {
            ctx->pc = 0x1168D8u;
            goto label_1168d8;
        }
    }
    ctx->pc = 0x1168C8u;
label_1168c8:
    // 0x1168c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1168c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168cc: 0xc046502  jal         func_119408
    ctx->pc = 0x1168CCu;
    SET_GPR_U32(ctx, 31, 0x1168D4u);
    ctx->pc = 0x1168D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168CCu;
    // 0x1168d0: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119408u, 0x1168CCu, 0x1168D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168D4u;
label_1168d4:
    // 0x1168d4: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1168d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1168d8:
    // 0x1168d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1168d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168dc: 0xc046468  jal         func_1191A0
    ctx->pc = 0x1168DCu;
    SET_GPR_U32(ctx, 31, 0x1168E4u);
    ctx->pc = 0x1168E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168DCu;
    // 0x1168e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1191A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191A0u, 0x1168DCu, 0x1168E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168E4u;
label_1168e4:
    // 0x1168e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1168e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1168e8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1168E8u;
    {
        const bool branch_taken_0x1168e8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1168ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168E8u;
        // 0x1168ec: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168e8) {
            ctx->pc = 0x116904u;
            goto label_116904;
        }
    }
    ctx->pc = 0x1168F0u;
    // 0x1168f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1168f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168f4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1168f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168f8: 0xc046502  jal         func_119408
    ctx->pc = 0x1168F8u;
    SET_GPR_U32(ctx, 31, 0x116900u);
    ctx->pc = 0x1168FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168F8u;
    // 0x1168fc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119408u, 0x1168F8u, 0x116900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116900u;
label_116900:
    // 0x116900: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x116900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_116904:
    // 0x116904: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x116904u;
    {
        const bool branch_taken_0x116904 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x116908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116904u;
        // 0x116908: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116904) {
            ctx->pc = 0x11695Cu;
            goto label_11695c;
        }
    }
    ctx->pc = 0x11690Cu;
    // 0x11690c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116910: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x116910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x116914: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x116914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x116918: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x116918u;
    {
        const bool branch_taken_0x116918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116918) {
            ctx->pc = 0x11691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116918u;
            // 0x11691c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116958u;
            goto label_116958;
        }
    }
    ctx->pc = 0x116920u;
    // 0x116920: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x116920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x116924: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x116924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x116928: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11692c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11692Cu;
    {
        const bool branch_taken_0x11692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11692Cu;
        // 0x116930: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11692c) {
            ctx->pc = 0x116954u;
            goto label_116954;
        }
    }
    ctx->pc = 0x116934u;
    // 0x116934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x116938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11693c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116940: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x116940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x116944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116948: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x116948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x11694c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11694Cu;
    {
        const bool branch_taken_0x11694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11694Cu;
        // 0x116950: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11694c) {
            ctx->pc = 0x116958u;
            goto label_116958;
        }
    }
    ctx->pc = 0x116954u;
label_116954:
    // 0x116954: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x116954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_116958:
    // 0x116958: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x116958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_11695c:
    // 0x11695c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11695Cu;
    {
        const bool branch_taken_0x11695c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11695Cu;
        // 0x116960: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11695c) {
            ctx->pc = 0x116988u;
            goto label_116988;
        }
    }
    ctx->pc = 0x116964u;
    // 0x116964: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x116964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x116968: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x116968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11696c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11696cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x116970: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x116970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x116974: 0xc046416  jal         func_119058
    ctx->pc = 0x116974u;
    SET_GPR_U32(ctx, 31, 0x11697Cu);
    ctx->pc = 0x116978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116974u;
    // 0x116978: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119058u, 0x116974u, 0x11697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11697Cu;
label_11697c:
    // 0x11697c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x11697cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116980: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x116980u;
    {
        const bool branch_taken_0x116980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116980u;
        // 0x116984: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116980) {
            ctx->pc = 0x116990u;
            goto label_116990;
        }
    }
    ctx->pc = 0x116988u;
label_116988:
    // 0x116988: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x116988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11698c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x11698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_116990:
    // 0x116990: 0x3054001f  andi        $s4, $v0, 0x1F
    ctx->pc = 0x116990u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x116994: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x116994u;
    {
        const bool branch_taken_0x116994 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x116998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116994u;
        // 0x116998: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116994) {
            ctx->pc = 0x1169A0u;
            goto label_1169a0;
        }
    }
    ctx->pc = 0x11699Cu;
    // 0x11699c: 0x54a023  subu        $s4, $v0, $s4
    ctx->pc = 0x11699cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1169a0:
    // 0x1169a0: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1169a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1169a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1169A4u;
    {
        const bool branch_taken_0x1169a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1169A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169A4u;
        // 0x1169a8: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169a4) {
            ctx->pc = 0x1169D0u;
            goto label_1169d0;
        }
    }
    ctx->pc = 0x1169ACu;
    // 0x1169ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1169acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1169b0: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x1169b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x1169b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1169b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1169b8: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1169b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1169bc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1169bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1169c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1169c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1169c4: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1169c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1169c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1169C8u;
    {
        const bool branch_taken_0x1169c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169C8u;
        // 0x1169cc: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169c8) {
            ctx->pc = 0x1169F4u;
            goto label_1169f4;
        }
    }
    ctx->pc = 0x1169D0u;
label_1169d0:
    // 0x1169d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1169D0u;
    {
        const bool branch_taken_0x1169d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169D0u;
        // 0x1169d4: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169d0) {
            ctx->pc = 0x1169F4u;
            goto label_1169f4;
        }
    }
    ctx->pc = 0x1169D8u;
    // 0x1169d8: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x1169d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1169dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1169dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1169e0: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x1169e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1169e4: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1169e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1169e8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1169e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1169ec: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1169ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1169f0: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1169f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1169f4:
    // 0x1169f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1169f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1169f8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1169F8u;
    {
        const bool branch_taken_0x1169f8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1169FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169F8u;
        // 0x1169fc: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169f8) {
            ctx->pc = 0x116A10u;
            goto label_116a10;
        }
    }
    ctx->pc = 0x116A00u;
    // 0x116a00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x116a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a04: 0xc046542  jal         func_119508
    ctx->pc = 0x116A04u;
    SET_GPR_U32(ctx, 31, 0x116A0Cu);
    ctx->pc = 0x116A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A04u;
    // 0x116a08: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116A04u, 0x116A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A0Cu;
label_116a0c:
    // 0x116a0c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_116a10:
    // 0x116a10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x116a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x116a14: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116A14u;
    {
        const bool branch_taken_0x116a14 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x116A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A14u;
        // 0x116a18: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a14) {
            ctx->pc = 0x116A2Cu;
            goto label_116a2c;
        }
    }
    ctx->pc = 0x116A1Cu;
    // 0x116a1c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x116a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a20: 0xc046542  jal         func_119508
    ctx->pc = 0x116A20u;
    SET_GPR_U32(ctx, 31, 0x116A28u);
    ctx->pc = 0x116A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A20u;
    // 0x116a24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116A20u, 0x116A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A28u;
label_116a28:
    // 0x116a28: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x116a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_116a2c:
    // 0x116a2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x116a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116a30: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x116A30u;
    {
        const bool branch_taken_0x116a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A30u;
        // 0x116a34: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a30) {
            ctx->pc = 0x116A8Cu;
            goto label_116a8c;
        }
    }
    ctx->pc = 0x116A38u;
    // 0x116a38: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116A38u;
    SET_GPR_U32(ctx, 31, 0x116A40u);
    ctx->pc = 0x116A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A38u;
    // 0x116a3c: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116A38u, 0x116A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A40u;
label_116a40:
    // 0x116a40: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x116A40u;
    {
        const bool branch_taken_0x116a40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A40u;
        // 0x116a44: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a40) {
            ctx->pc = 0x116A90u;
            goto label_116a90;
        }
    }
    ctx->pc = 0x116A48u;
    // 0x116a48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116a4c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a50: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116a54: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116A54u;
    SET_GPR_U32(ctx, 31, 0x116A5Cu);
    ctx->pc = 0x116A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A54u;
    // 0x116a58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116A54u, 0x116A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A5Cu;
label_116a5c:
    // 0x116a5c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x116a60: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x116a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x116a64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116A64u;
    {
        const bool branch_taken_0x116a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A64u;
        // 0x116a68: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a64) {
            ctx->pc = 0x116A84u;
            goto label_116a84;
        }
    }
    ctx->pc = 0x116A6Cu;
    // 0x116a6c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x116a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116a70: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116a74: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116a78: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116A78u;
    SET_GPR_U32(ctx, 31, 0x116A80u);
    ctx->pc = 0x116A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A78u;
    // 0x116a7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116A78u, 0x116A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A80u;
label_116a80:
    // 0x116a80: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_116a84:
    // 0x116a84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x116a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x116a88: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x116a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_116a8c:
    // 0x116a8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_116a90:
    // 0x116a90: 0x5c80001a  bgtzl       $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x116A90u;
    {
        const bool branch_taken_0x116a90 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x116a90) {
            ctx->pc = 0x116A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116A90u;
            // 0x116a94: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AFCu;
            goto label_116afc;
        }
    }
    ctx->pc = 0x116A98u;
    // 0x116a98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x116a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116a9c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x116a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x116aa0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x116AA0u;
    {
        const bool branch_taken_0x116aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116aa0) {
            ctx->pc = 0x116AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116AA0u;
            // 0x116aa4: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AFCu;
            goto label_116afc;
        }
    }
    ctx->pc = 0x116AA8u;
    // 0x116aa8: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x116AA8u;
    {
        const bool branch_taken_0x116aa8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x116AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AA8u;
        // 0x116aac: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116aa8) {
            ctx->pc = 0x116AD8u;
            goto label_116ad8;
        }
    }
    ctx->pc = 0x116AB0u;
    // 0x116ab0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ab4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x116ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x116ab8: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116AB8u;
    SET_GPR_U32(ctx, 31, 0x116AC0u);
    ctx->pc = 0x116ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AB8u;
    // 0x116abc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116AB8u, 0x116AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AC0u;
label_116ac0:
    // 0x116ac0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x116ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x116ac4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116ac8: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116AC8u;
    SET_GPR_U32(ctx, 31, 0x116AD0u);
    ctx->pc = 0x116ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AC8u;
    // 0x116acc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116AC8u, 0x116AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AD0u;
label_116ad0:
    // 0x116ad0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116AD0u;
    {
        const bool branch_taken_0x116ad0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x116AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AD0u;
        // 0x116ad4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ad0) {
            ctx->pc = 0x116AE8u;
            goto label_116ae8;
        }
    }
    ctx->pc = 0x116AD8u;
label_116ad8:
    // 0x116ad8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x116ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x116adc: 0x49827  nor         $s3, $zero, $a0
    ctx->pc = 0x116adcu;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x116ae0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x116AE0u;
    {
        const bool branch_taken_0x116ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AE0u;
        // 0x116ae4: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ae0) {
            ctx->pc = 0x116E50u;
            goto label_116e50;
        }
    }
    ctx->pc = 0x116AE8u;
label_116ae8:
    // 0x116ae8: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x116ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_116aec:
    // 0x116aec: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x116aecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x116af0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x116af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116af4: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x116AF4u;
    {
        const bool branch_taken_0x116af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AF4u;
        // 0x116af8: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116af4) {
            ctx->pc = 0x116E50u;
            goto label_116e50;
        }
    }
    ctx->pc = 0x116AFCu;
label_116afc:
    // 0x116afc: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x116AFCu;
    {
        const bool branch_taken_0x116afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AFCu;
        // 0x116b00: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116afc) {
            ctx->pc = 0x116D54u;
            goto label_116d54;
        }
    }
    ctx->pc = 0x116B04u;
    // 0x116b04: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116B04u;
    {
        const bool branch_taken_0x116b04 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x116B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B04u;
        // 0x116b08: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b04) {
            ctx->pc = 0x116B1Cu;
            goto label_116b1c;
        }
    }
    ctx->pc = 0x116B0Cu;
    // 0x116b0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x116b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b10: 0xc046542  jal         func_119508
    ctx->pc = 0x116B10u;
    SET_GPR_U32(ctx, 31, 0x116B18u);
    ctx->pc = 0x116B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B10u;
    // 0x116b14: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116B10u, 0x116B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B18u;
label_116b18:
    // 0x116b18: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_116b1c:
    // 0x116b1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x116b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116b20: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x116b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116b24: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x116B24u;
    {
        const bool branch_taken_0x116b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B24u;
        // 0x116b28: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b24) {
            ctx->pc = 0x116B70u;
            goto label_116b70;
        }
    }
    ctx->pc = 0x116B2Cu;
    // 0x116b2c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x116b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x116b30: 0xc046348  jal         func_118D20
    ctx->pc = 0x116B30u;
    SET_GPR_U32(ctx, 31, 0x116B38u);
    ctx->pc = 0x116B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B30u;
    // 0x116b34: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D20u, 0x116B30u, 0x116B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B38u;
label_116b38:
    // 0x116b38: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x116b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x116b3c: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x116b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x116b40: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x116b44: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x116b44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x116b48: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x116b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x116b4c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x116b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x116b50: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x116b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x116b54: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x116B54u;
    SET_GPR_U32(ctx, 31, 0x116B5Cu);
    ctx->pc = 0x116B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B54u;
    // 0x116b58: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x116B5Cu;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x116B5Cu) { return; }
    ctx->pc = 0x116B5Cu;
label_116b5c:
    // 0x116b5c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x116b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116b60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b64: 0xc046542  jal         func_119508
    ctx->pc = 0x116B64u;
    SET_GPR_U32(ctx, 31, 0x116B6Cu);
    ctx->pc = 0x116B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B64u;
    // 0x116b68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116B64u, 0x116B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B6Cu;
label_116b6c:
    // 0x116b6c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_116b70:
    // 0x116b70: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x116b70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116b74: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x116B74u;
    {
        const bool branch_taken_0x116b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B74u;
        // 0x116b78: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b74) {
            ctx->pc = 0x116BF8u;
            goto label_116bf8;
        }
    }
    ctx->pc = 0x116B7Cu;
    // 0x116b7c: 0x0  nop
    ctx->pc = 0x116b7cu;
    // NOP
label_116b80:
    // 0x116b80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116b84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b88: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116b8c: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116B8Cu;
    SET_GPR_U32(ctx, 31, 0x116B94u);
    ctx->pc = 0x116B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B8Cu;
    // 0x116b90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116B8Cu, 0x116B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B94u;
label_116b94:
    // 0x116b94: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x116b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x116b98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x116b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116b9c: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x116B9Cu;
    {
        const bool branch_taken_0x116b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x116BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B9Cu;
        // 0x116ba0: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b9c) {
            ctx->pc = 0x116BC4u;
            goto label_116bc4;
        }
    }
    ctx->pc = 0x116BA4u;
    // 0x116ba4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x116ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ba8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116bac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bb0: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116BB0u;
    SET_GPR_U32(ctx, 31, 0x116BB8u);
    ctx->pc = 0x116BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BB0u;
    // 0x116bb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116BB0u, 0x116BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BB8u;
label_116bb8:
    // 0x116bb8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x116bbc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x116BBCu;
    {
        const bool branch_taken_0x116bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116BBCu;
        // 0x116bc0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bbc) {
            ctx->pc = 0x116BF4u;
            goto label_116bf4;
        }
    }
    ctx->pc = 0x116BC4u;
label_116bc4:
    // 0x116bc4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x116bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x116bc8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116bcc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116bd0: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116BD0u;
    SET_GPR_U32(ctx, 31, 0x116BD8u);
    ctx->pc = 0x116BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BD0u;
    // 0x116bd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116BD0u, 0x116BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BD8u;
label_116bd8:
    // 0x116bd8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x116bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116bdc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116be0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x116be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x116be4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116be8: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116BE8u;
    SET_GPR_U32(ctx, 31, 0x116BF0u);
    ctx->pc = 0x116BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BE8u;
    // 0x116bec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116BE8u, 0x116BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116BF0u;
label_116bf0:
    // 0x116bf0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x116bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_116bf4:
    // 0x116bf4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x116bf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_116bf8:
    // 0x116bf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116bfc: 0xc0456c2  jal         func_115B08
    ctx->pc = 0x116BFCu;
    SET_GPR_U32(ctx, 31, 0x116C04u);
    ctx->pc = 0x116C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116BFCu;
    // 0x116c00: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B08u, 0x116BFCu, 0x116C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C04u;
label_116c04:
    // 0x116c04: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116c08: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x116c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x116c0c: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116C0Cu;
    SET_GPR_U32(ctx, 31, 0x116C14u);
    ctx->pc = 0x116C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C0Cu;
    // 0x116c10: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116C0Cu, 0x116C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C14u;
label_116c14:
    // 0x116c14: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x116c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x116c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c1c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x116c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116c20: 0xc0465ba  jal         func_1196E8
    ctx->pc = 0x116C20u;
    SET_GPR_U32(ctx, 31, 0x116C28u);
    ctx->pc = 0x116C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C20u;
    // 0x116c24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1196E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1196E8u, 0x116C20u, 0x116C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C28u;
label_116c28:
    // 0x116c28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116c28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c2c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x116c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x116c30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116C30u;
    {
        const bool branch_taken_0x116c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C30u;
        // 0x116c34: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c30) {
            ctx->pc = 0x116C48u;
            goto label_116c48;
        }
    }
    ctx->pc = 0x116C38u;
    // 0x116c38: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116c3c: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116C3Cu;
    SET_GPR_U32(ctx, 31, 0x116C44u);
    ctx->pc = 0x116C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C3Cu;
    // 0x116c40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116C3Cu, 0x116C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C44u;
label_116c44:
    // 0x116c44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116c48:
    // 0x116c48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x116c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116c4c: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116C4Cu;
    SET_GPR_U32(ctx, 31, 0x116C54u);
    ctx->pc = 0x116C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116C4Cu;
    // 0x116c50: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116C4Cu, 0x116C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116C54u;
label_116c54:
    // 0x116c54: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x116C54u;
    {
        const bool branch_taken_0x116c54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C54u;
        // 0x116c58: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c54) {
            ctx->pc = 0x116C8Cu;
            goto label_116c8c;
        }
    }
    ctx->pc = 0x116C5Cu;
    // 0x116c5c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x116C5Cu;
    {
        const bool branch_taken_0x116c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116c5c) {
            ctx->pc = 0x116C8Cu;
            goto label_116c8c;
        }
    }
    ctx->pc = 0x116C64u;
    // 0x116c64: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x116c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x116c68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116c68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116c6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116c70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116C70u;
    {
        const bool branch_taken_0x116c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C70u;
        // 0x116c74: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c70) {
            ctx->pc = 0x116C8Cu;
            goto label_116c8c;
        }
    }
    ctx->pc = 0x116C78u;
    // 0x116c78: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x116C78u;
    {
        const bool branch_taken_0x116c78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x116C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C78u;
        // 0x116c7c: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c78) {
            ctx->pc = 0x116D24u;
            goto label_116d24;
        }
    }
    ctx->pc = 0x116C80u;
    // 0x116c80: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x116c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x116c84: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x116C84u;
    {
        const bool branch_taken_0x116c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C84u;
        // 0x116c88: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c84) {
            ctx->pc = 0x116E4Cu;
            goto label_116e4c;
        }
    }
    ctx->pc = 0x116C8Cu;
label_116c8c:
    // 0x116c8c: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x116C8Cu;
    {
        const bool branch_taken_0x116c8c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x116c8c) {
            ctx->pc = 0x116CB8u;
            goto label_116cb8;
        }
    }
    ctx->pc = 0x116C94u;
    // 0x116c94: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x116C94u;
    {
        const bool branch_taken_0x116c94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x116C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C94u;
        // 0x116c98: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116c94) {
            ctx->pc = 0x116D14u;
            goto label_116d14;
        }
    }
    ctx->pc = 0x116C9Cu;
    // 0x116c9c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x116C9Cu;
    {
        const bool branch_taken_0x116c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116c9c) {
            ctx->pc = 0x116D14u;
            goto label_116d14;
        }
    }
    ctx->pc = 0x116CA4u;
    // 0x116ca4: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x116ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x116ca8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x116ca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x116cac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x116cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x116cb0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x116CB0u;
    {
        const bool branch_taken_0x116cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116cb0) {
            ctx->pc = 0x116D14u;
            goto label_116d14;
        }
    }
    ctx->pc = 0x116CB8u;
label_116cb8:
    // 0x116cb8: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x116CB8u;
    {
        const bool branch_taken_0x116cb8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x116CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116CB8u;
        // 0x116cbc: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116cb8) {
            ctx->pc = 0x116D0Cu;
            goto label_116d0c;
        }
    }
    ctx->pc = 0x116CC0u;
    // 0x116cc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116cc4: 0xc046542  jal         func_119508
    ctx->pc = 0x116CC4u;
    SET_GPR_U32(ctx, 31, 0x116CCCu);
    ctx->pc = 0x116CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CC4u;
    // 0x116cc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116CC4u, 0x116CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CCCu;
label_116ccc:
    // 0x116ccc: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x116cd0: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x116cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x116cd4: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116CD4u;
    SET_GPR_U32(ctx, 31, 0x116CDCu);
    ctx->pc = 0x116CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116CD4u;
    // 0x116cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116CD4u, 0x116CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116CDCu;
label_116cdc:
    // 0x116cdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116ce0: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x116CE0u;
    {
        const bool branch_taken_0x116ce0 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x116ce0) {
            ctx->pc = 0x116CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116CE0u;
            // 0x116ce4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116D00u;
            goto label_116d00;
        }
    }
    ctx->pc = 0x116CE8u;
    // 0x116ce8: 0x56200058  bnel        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x116CE8u;
    {
        const bool branch_taken_0x116ce8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x116ce8) {
            ctx->pc = 0x116CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116CE8u;
            // 0x116cec: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E4Cu;
            goto label_116e4c;
        }
    }
    ctx->pc = 0x116CF0u;
    // 0x116cf0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x116cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x116cf4: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x116CF4u;
    {
        const bool branch_taken_0x116cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116cf4) {
            ctx->pc = 0x116CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116CF4u;
            // 0x116cf8: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E4Cu;
            goto label_116e4c;
        }
    }
    ctx->pc = 0x116CFCu;
    // 0x116cfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x116cfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_116d00:
    // 0x116d00: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x116d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x116d04: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116D04u;
    {
        const bool branch_taken_0x116d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x116D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D04u;
        // 0x116d08: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d04) {
            ctx->pc = 0x116D28u;
            goto label_116d28;
        }
    }
    ctx->pc = 0x116D0Cu;
label_116d0c:
    // 0x116d0c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x116D0Cu;
    {
        const bool branch_taken_0x116d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D0Cu;
        // 0x116d10: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d0c) {
            ctx->pc = 0x116E4Cu;
            goto label_116e4c;
        }
    }
    ctx->pc = 0x116D14u;
label_116d14:
    // 0x116d14: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x116D14u;
    {
        const bool branch_taken_0x116d14 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x116D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D14u;
        // 0x116d18: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d14) {
            ctx->pc = 0x116D3Cu;
            goto label_116d3c;
        }
    }
    ctx->pc = 0x116D1Cu;
    // 0x116d1c: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116D1Cu;
    {
        const bool branch_taken_0x116d1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x116D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D1Cu;
        // 0x116d20: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d1c) {
            ctx->pc = 0x116D34u;
            goto label_116d34;
        }
    }
    ctx->pc = 0x116D24u;
label_116d24:
    // 0x116d24: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x116d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_116d28:
    // 0x116d28: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x116d28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x116d2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x116D2Cu;
    {
        const bool branch_taken_0x116d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D2Cu;
        // 0x116d30: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d2c) {
            ctx->pc = 0x116DE0u;
            goto label_116de0;
        }
    }
    ctx->pc = 0x116D34u;
label_116d34:
    // 0x116d34: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x116D34u;
    {
        const bool branch_taken_0x116d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D34u;
        // 0x116d38: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d34) {
            ctx->pc = 0x116E4Cu;
            goto label_116e4c;
        }
    }
    ctx->pc = 0x116D3Cu;
label_116d3c:
    // 0x116d3c: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x116d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x116d40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x116d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116d44: 0x1684ff8e  bne         $s4, $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x116D44u;
    {
        const bool branch_taken_0x116d44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x116D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D44u;
        // 0x116d48: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d44) {
            ctx->pc = 0x116B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116b80;
        }
    }
    ctx->pc = 0x116D4Cu;
    // 0x116d4c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x116D4Cu;
    {
        const bool branch_taken_0x116d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D4Cu;
        // 0x116d50: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d4c) {
            ctx->pc = 0x116DA4u;
            goto label_116da4;
        }
    }
    ctx->pc = 0x116D54u;
label_116d54:
    // 0x116d54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x116D54u;
    {
        const bool branch_taken_0x116d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D54u;
        // 0x116d58: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d54) {
            ctx->pc = 0x116D7Cu;
            goto label_116d7c;
        }
    }
    ctx->pc = 0x116D5Cu;
    // 0x116d5c: 0x0  nop
    ctx->pc = 0x116d5cu;
    // NOP
label_116d60:
    // 0x116d60: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116d64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d68: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x116d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x116d6c: 0xc04637e  jal         func_118DF8
    ctx->pc = 0x116D6Cu;
    SET_GPR_U32(ctx, 31, 0x116D74u);
    ctx->pc = 0x116D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D6Cu;
    // 0x116d70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DF8u, 0x116D6Cu, 0x116D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D74u;
label_116d74:
    // 0x116d74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x116d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x116d78: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_116d7c:
    // 0x116d7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x116d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x116d80: 0xc0456c2  jal         func_115B08
    ctx->pc = 0x116D80u;
    SET_GPR_U32(ctx, 31, 0x116D88u);
    ctx->pc = 0x116D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D80u;
    // 0x116d84: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B08u, 0x116D80u, 0x116D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D88u;
label_116d88:
    // 0x116d88: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x116d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x116d8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x116d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116d90: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x116d90u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x116d94: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x116d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x116d98: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x116D98u;
    {
        const bool branch_taken_0x116d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D98u;
        // 0x116d9c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d98) {
            ctx->pc = 0x116D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116d60;
        }
    }
    ctx->pc = 0x116DA0u;
    // 0x116da0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_116da4:
    // 0x116da4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x116da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116da8: 0xc046542  jal         func_119508
    ctx->pc = 0x116DA8u;
    SET_GPR_U32(ctx, 31, 0x116DB0u);
    ctx->pc = 0x116DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DA8u;
    // 0x116dac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119508u, 0x116DA8u, 0x116DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DB0u;
label_116db0:
    // 0x116db0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x116db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x116db4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x116db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x116db8: 0xc0465a0  jal         func_119680
    ctx->pc = 0x116DB8u;
    SET_GPR_U32(ctx, 31, 0x116DC0u);
    ctx->pc = 0x116DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116DB8u;
    // 0x116dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119680u, 0x116DB8u, 0x116DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116DC0u;
label_116dc0:
    // 0x116dc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116dc4: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116DC4u;
    {
        const bool branch_taken_0x116dc4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x116dc4) {
            ctx->pc = 0x116DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116DC4u;
            // 0x116dc8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116DE4u;
            goto label_116de4;
        }
    }
    ctx->pc = 0x116DCCu;
    // 0x116dcc: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x116DCCu;
    {
        const bool branch_taken_0x116dcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x116DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DCCu;
        // 0x116dd0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116dcc) {
            ctx->pc = 0x116E30u;
            goto label_116e30;
        }
    }
    ctx->pc = 0x116DD4u;
    // 0x116dd4: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x116dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x116dd8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x116DD8u;
    {
        const bool branch_taken_0x116dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116dd8) {
            ctx->pc = 0x116DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116DD8u;
            // 0x116ddc: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116E34u;
            goto label_116e34;
        }
    }
    ctx->pc = 0x116DE0u;
label_116de0:
    // 0x116de0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x116de0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_116de4:
    // 0x116de4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x116DE4u;
    {
        const bool branch_taken_0x116de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DE4u;
        // 0x116de8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116de4) {
            ctx->pc = 0x116DFCu;
            goto label_116dfc;
        }
    }
    ctx->pc = 0x116DECu;
    // 0x116dec: 0x0  nop
    ctx->pc = 0x116decu;
    // NOP
label_116df0:
    // 0x116df0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x116df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x116df4: 0x12a40007  beq         $s5, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116DF4u;
    {
        const bool branch_taken_0x116df4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x116DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116DF4u;
        // 0x116df8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116df4) {
            ctx->pc = 0x116E14u;
            goto label_116e14;
        }
    }
    ctx->pc = 0x116DFCu;
label_116dfc:
    // 0x116dfc: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x116dfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x116e00: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x116E00u;
    {
        const bool branch_taken_0x116e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x116E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E00u;
        // 0x116e04: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e00) {
            ctx->pc = 0x116DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116df0;
        }
    }
    ctx->pc = 0x116E08u;
    // 0x116e08: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x116e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116e0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116E0Cu;
    {
        const bool branch_taken_0x116e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E0Cu;
        // 0x116e10: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e0c) {
            ctx->pc = 0x116E4Cu;
            goto label_116e4c;
        }
    }
    ctx->pc = 0x116E14u;
label_116e14:
    // 0x116e14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x116e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x116e18: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x116e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x116e1c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x116e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x116e20: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x116e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x116e24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116E24u;
    {
        const bool branch_taken_0x116e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E24u;
        // 0x116e28: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e24) {
            ctx->pc = 0x116E50u;
            goto label_116e50;
        }
    }
    ctx->pc = 0x116E2Cu;
    // 0x116e2c: 0x0  nop
    ctx->pc = 0x116e2cu;
    // NOP
label_116e30:
    // 0x116e30: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x116e30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_116e34:
    // 0x116e34: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x116e34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x116e38: 0x0  nop
    ctx->pc = 0x116e38u;
    // NOP
    // 0x116e3c: 0x0  nop
    ctx->pc = 0x116e3cu;
    // NOP
    // 0x116e40: 0x0  nop
    ctx->pc = 0x116e40u;
    // NOP
    // 0x116e44: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116E44u;
    {
        const bool branch_taken_0x116e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x116e44) {
            ctx->pc = 0x116E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116e30;
        }
    }
    ctx->pc = 0x116E4Cu;
label_116e4c:
    // 0x116e4c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x116e4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_116e50:
    // 0x116e50: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x116e54: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116E54u;
    SET_GPR_U32(ctx, 31, 0x116E5Cu);
    ctx->pc = 0x116E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E54u;
    // 0x116e58: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116E54u, 0x116E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E5Cu;
label_116e5c:
    // 0x116e5c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x116e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116e60: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x116E60u;
    {
        const bool branch_taken_0x116e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E60u;
        // 0x116e64: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e60) {
            ctx->pc = 0x116E94u;
            goto label_116e94;
        }
    }
    ctx->pc = 0x116E68u;
    // 0x116e68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116E68u;
    {
        const bool branch_taken_0x116e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E68u;
        // 0x116e6c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e68) {
            ctx->pc = 0x116E84u;
            goto label_116e84;
        }
    }
    ctx->pc = 0x116E70u;
    // 0x116e70: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116E70u;
    {
        const bool branch_taken_0x116e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x116E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E70u;
        // 0x116e74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e70) {
            ctx->pc = 0x116E80u;
            goto label_116e80;
        }
    }
    ctx->pc = 0x116E78u;
    // 0x116e78: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116E78u;
    SET_GPR_U32(ctx, 31, 0x116E80u);
    ctx->pc = 0x116E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E78u;
    // 0x116e7c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116E78u, 0x116E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E80u;
label_116e80:
    // 0x116e80: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x116e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_116e84:
    // 0x116e84: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116E84u;
    SET_GPR_U32(ctx, 31, 0x116E8Cu);
    ctx->pc = 0x116E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E84u;
    // 0x116e88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116E84u, 0x116E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116E8Cu;
label_116e8c:
    // 0x116e8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116E8Cu;
    {
        const bool branch_taken_0x116e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E8Cu;
        // 0x116e90: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116e8c) {
            ctx->pc = 0x116E98u;
            goto label_116e98;
        }
    }
    ctx->pc = 0x116E94u;
label_116e94:
    // 0x116e94: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x116e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_116e98:
    // 0x116e98: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116E98u;
    SET_GPR_U32(ctx, 31, 0x116EA0u);
    ctx->pc = 0x116E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E98u;
    // 0x116e9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116E98u, 0x116EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EA0u;
label_116ea0:
    // 0x116ea0: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x116ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116ea4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x116ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116ea8: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x116ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x116eac: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x116eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x116eb0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x116EB0u;
    {
        const bool branch_taken_0x116eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x116eb0) {
            ctx->pc = 0x116EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116EB0u;
            // 0x116eb4: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116EB8u;
            goto label_116eb8;
        }
    }
    ctx->pc = 0x116EB8u;
label_116eb8:
    // 0x116eb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x116eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_116ebc:
    // 0x116ebc: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x116ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x116ec0: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x116ec0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x116ec4: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x116ec4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x116ec8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x116ec8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x116ecc: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x116eccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x116ed0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x116ed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116ed4: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x116ed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116ed8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x116ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116edc: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x116edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116ee0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x116ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x116EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116EE4u;
        // 0x116ee8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116EECu;
}
