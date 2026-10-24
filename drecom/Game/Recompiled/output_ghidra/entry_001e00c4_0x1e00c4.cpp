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

// Function: entry_001e00c4
// Address: 0x1e00c4 - 0x1e0130
void entry_001e00c4_0x1e00c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e00c4_0x1e00c4");
#endif

    switch (ctx->pc) {
        case 0x1e00dcu: goto label_1e00dc;
        default: break;
    }

    ctx->pc = 0x1e00c4u;

label_1e00c4:
    // 0x1e00c4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x1e00c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e00c8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1e00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e00cc: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x1e00ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1e00d0: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x1e00d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1e00d4: 0xc07804c  jal         func_1E0130
    ctx->pc = 0x1E00D4u;
    SET_GPR_U32(ctx, 31, 0x1E00DCu);
    ctx->pc = 0x1E0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0130u, 0x1E00D4u, 0x1E00DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00DCu;
label_1e00dc:
    // 0x1e00dc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e00dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e00e0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1e00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e00e4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1e00e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e00e8: 0x2a902  srl         $s5, $v0, 4
    ctx->pc = 0x1e00e8u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1e00ec: 0xafb00088  sw          $s0, 0x88($sp)
    ctx->pc = 0x1e00ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 16));
    // 0x1e00f0: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x1e00f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1e00f4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e00f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e00f8: 0x1640fff2  bnez        $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E00F8u;
    {
        const bool branch_taken_0x1e00f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e00f8) {
            ctx->pc = 0x1E00C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e00c4;
        }
    }
    ctx->pc = 0x1E0100u;
    // 0x1e0100: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1e0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1e0104: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x1e0104u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e0108: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e0108u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e010c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e010cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e0110: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e0110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0114: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e0114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e0118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e011c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e011cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0120: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0124: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e0124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e0128: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0130u;
}
