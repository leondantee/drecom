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

// Function: _hi0bits
// Address: 0x119058 - 0x1190dc
void _hi0bits_0x119058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_hi0bits_0x119058");
#endif

    ctx->pc = 0x119058u;

    // 0x119058: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x119058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11905c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x119060: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119060u;
    {
        const bool branch_taken_0x119060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119060u;
        // 0x119064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119060) {
            ctx->pc = 0x119070u;
            goto label_119070;
        }
    }
    ctx->pc = 0x119068u;
    // 0x119068: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x119068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11906c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x11906cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_119070:
    // 0x119070: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x119070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x119074: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x119074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x119078: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119078u;
    {
        const bool branch_taken_0x119078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119078) {
            ctx->pc = 0x119088u;
            goto label_119088;
        }
    }
    ctx->pc = 0x119080u;
    // 0x119080: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x119080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x119084: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x119084u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_119088:
    // 0x119088: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x119088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x11908c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x119090: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119090u;
    {
        const bool branch_taken_0x119090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119090) {
            ctx->pc = 0x1190A0u;
            goto label_1190a0;
        }
    }
    ctx->pc = 0x119098u;
    // 0x119098: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x119098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11909c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x11909cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1190a0:
    // 0x1190a0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1190a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1190a4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1190a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1190a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1190A8u;
    {
        const bool branch_taken_0x1190a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1190a8) {
            ctx->pc = 0x1190B8u;
            goto label_1190b8;
        }
    }
    ctx->pc = 0x1190B0u;
    // 0x1190b0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1190b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x1190b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1190b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1190b8:
    // 0x1190b8: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1190B8u;
    {
        const bool branch_taken_0x1190b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1190BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190B8u;
        // 0x1190bc: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190b8) {
            ctx->pc = 0x1190D0u;
            goto label_1190d0;
        }
    }
    ctx->pc = 0x1190C0u;
    // 0x1190c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1190c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1190c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1190c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1190c8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1190C8u;
    {
        const bool branch_taken_0x1190c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190C8u;
        // 0x1190cc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190c8) {
            ctx->pc = 0x1190D4u;
            goto label_1190d4;
        }
    }
    ctx->pc = 0x1190D0u;
label_1190d0:
    // 0x1190d0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1190d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1190d4:
    // 0x1190d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1190D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190DCu;
}
