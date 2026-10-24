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

// Function: _ulp
// Address: 0x119878 - 0x119910
void _ulp_0x119878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ulp_0x119878");
#endif

    ctx->pc = 0x119878u;

    // 0x119878: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x119878u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11987c: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x11987cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x119880: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x119880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x119884: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x119884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x119888: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x119888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11988c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11988Cu;
    {
        const bool branch_taken_0x11988c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x119890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11988Cu;
        // 0x119890: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11988c) {
            ctx->pc = 0x11989Cu;
            goto label_11989c;
        }
    }
    ctx->pc = 0x119894u;
    // 0x119894: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x119894u;
    {
        const bool branch_taken_0x119894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119894u;
        // 0x119898: 0x4283c  dsll32      $a1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119894) {
            ctx->pc = 0x119904u;
            goto label_119904;
        }
    }
    ctx->pc = 0x11989Cu;
label_11989c:
    // 0x11989c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x11989cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1198a0: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x1198a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1198a4: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x1198a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1198a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1198A8u;
    {
        const bool branch_taken_0x1198a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198A8u;
        // 0x1198ac: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198a8) {
            ctx->pc = 0x1198BCu;
            goto label_1198bc;
        }
    }
    ctx->pc = 0x1198B0u;
    // 0x1198b0: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x1198b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1198b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1198B4u;
    {
        const bool branch_taken_0x1198b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198B4u;
        // 0x1198b8: 0x2283c  dsll32      $a1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198b4) {
            ctx->pc = 0x119904u;
            goto label_119904;
        }
    }
    ctx->pc = 0x1198BCu;
label_1198bc:
    // 0x1198bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1198bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1198c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1198c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1198c4: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x1198c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1198c8: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x1198c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1198cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1198CCu;
    {
        const bool branch_taken_0x1198cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198CCu;
        // 0x1198d0: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198cc) {
            ctx->pc = 0x1198E8u;
            goto label_1198e8;
        }
    }
    ctx->pc = 0x1198D4u;
    // 0x1198d4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1198d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1198d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1198d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1198dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1198dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1198e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1198E0u;
    {
        const bool branch_taken_0x1198e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198E0u;
        // 0x1198e4: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198e0) {
            ctx->pc = 0x1198ECu;
            goto label_1198ec;
        }
    }
    ctx->pc = 0x1198E8u;
label_1198e8:
    // 0x1198e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1198e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1198ec:
    // 0x1198ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1198ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1198f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1198f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1198f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1198f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1198f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1198f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1198fc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1198fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x119900: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x119900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_119904:
    // 0x119904: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x119904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119908: 0x3e00008  jr          $ra
    ctx->pc = 0x119908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119908u;
        // 0x11990c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119910u;
}
