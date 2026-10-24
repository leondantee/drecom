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

// Function: __pack_d
// Address: 0x11e6f0 - 0x11e81c
void ps2___pack_d_0x11e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_d_0x11e6f0");
#endif

    ctx->pc = 0x11e6f0u;

    // 0x11e6f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e6f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11e6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6f8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x11e6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11e6fc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11e6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11e700: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E700u;
    {
        const bool branch_taken_0x11e700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E700u;
        // 0x11e704: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e700) {
            ctx->pc = 0x11E71Cu;
            goto label_11e71c;
        }
    }
    ctx->pc = 0x11E708u;
    // 0x11e708: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x11e708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11e70c: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x11e70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x11e710: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x11e710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x11e714: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x11E714u;
    {
        const bool branch_taken_0x11e714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E714u;
        // 0x11e718: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e714) {
            ctx->pc = 0x11E7C0u;
            goto label_11e7c0;
        }
    }
    ctx->pc = 0x11E71Cu;
label_11e71c:
    // 0x11e71c: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x11e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x11e720: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x11E720u;
    {
        const bool branch_taken_0x11e720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e720) {
            ctx->pc = 0x11E724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E720u;
            // 0x11e724: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E77Cu;
            goto label_11e77c;
        }
    }
    ctx->pc = 0x11E728u;
    // 0x11e728: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x11e728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x11e72c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E72Cu;
    {
        const bool branch_taken_0x11e72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e72c) {
            ctx->pc = 0x11E73Cu;
            goto label_11e73c;
        }
    }
    ctx->pc = 0x11E734u;
    // 0x11e734: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11E734u;
    {
        const bool branch_taken_0x11e734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E734u;
        // 0x11e738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e734) {
            ctx->pc = 0x11E7C0u;
            goto label_11e7c0;
        }
    }
    ctx->pc = 0x11E73Cu;
label_11e73c:
    // 0x11e73c: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x11E73Cu;
    {
        const bool branch_taken_0x11e73c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e73c) {
            ctx->pc = 0x11E7C0u;
            goto label_11e7c0;
        }
    }
    ctx->pc = 0x11E744u;
    // 0x11e744: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x11e744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11e748: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x11e748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x11e74c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E74Cu;
    {
        const bool branch_taken_0x11e74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E74Cu;
        // 0x11e750: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e74c) {
            ctx->pc = 0x11E76Cu;
            goto label_11e76c;
        }
    }
    ctx->pc = 0x11E754u;
    // 0x11e754: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11e754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11e758: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x11e758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x11e75c: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11E75Cu;
    {
        const bool branch_taken_0x11e75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E75Cu;
        // 0x11e760: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e75c) {
            ctx->pc = 0x11E7BCu;
            goto label_11e7bc;
        }
    }
    ctx->pc = 0x11E764u;
    // 0x11e764: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11E764u;
    {
        const bool branch_taken_0x11e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E764u;
        // 0x11e768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e764) {
            ctx->pc = 0x11E7BCu;
            goto label_11e7bc;
        }
    }
    ctx->pc = 0x11E76Cu;
label_11e76c:
    // 0x11e76c: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x11e76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11e770: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E770u;
    {
        const bool branch_taken_0x11e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E770u;
        // 0x11e774: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e770) {
            ctx->pc = 0x11E784u;
            goto label_11e784;
        }
    }
    ctx->pc = 0x11E778u;
    // 0x11e778: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x11e778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_11e77c:
    // 0x11e77c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11E77Cu;
    {
        const bool branch_taken_0x11e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E77Cu;
        // 0x11e780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e77c) {
            ctx->pc = 0x11E7C0u;
            goto label_11e7c0;
        }
    }
    ctx->pc = 0x11E784u;
label_11e784:
    // 0x11e784: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11e788: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x11e788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x11e78c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E78Cu;
    {
        const bool branch_taken_0x11e78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e78c) {
            ctx->pc = 0x11E790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E78Cu;
            // 0x11e790: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E7A0u;
            goto label_11e7a0;
        }
    }
    ctx->pc = 0x11E794u;
    // 0x11e794: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x11e794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x11e798: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x11e798u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x11e79c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x11e79cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_11e7a0:
    // 0x11e7a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e7a4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x11e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x11e7a8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x11e7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11e7ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E7ACu;
    {
        const bool branch_taken_0x11e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e7ac) {
            ctx->pc = 0x11E7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E7ACu;
            // 0x11e7b0: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E7C0u;
            goto label_11e7c0;
        }
    }
    ctx->pc = 0x11E7B4u;
    // 0x11e7b4: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x11e7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x11e7b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x11e7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_11e7bc:
    // 0x11e7bc: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x11e7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_11e7c0:
    // 0x11e7c0: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x11e7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x11e7c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x11e7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x11e7c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e7cc: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x11e7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x11e7d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11e7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11e7d4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x11e7d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11e7d8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x11e7d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11e7dc: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x11e7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x11e7e0: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x11e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x11e7e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e7e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11e7ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e7f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11e7f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e7f8: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x11e7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x11e7fc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x11e7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11e800: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11e800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e804: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x11e804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x11e808: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x11e808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x11e80c: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x11e80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x11e810: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x11e810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x11e814: 0x3e00008  jr          $ra
    ctx->pc = 0x11E814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E814u;
        // 0x11e818: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E81Cu;
}
