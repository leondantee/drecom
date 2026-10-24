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

// Function: entry_0013cf90
// Address: 0x13cf90 - 0x13cfdc
void entry_0013cf90_0x13cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cf90_0x13cf90");
#endif

    ctx->pc = 0x13cf90u;

    // 0x13cf90: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13cf90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13cf94: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x13cf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13cf98: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x13cf98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13cf9c: 0x1440fdca  bnez        $v0, . + 4 + (-0x236 << 2)
    ctx->pc = 0x13CF9Cu;
    {
        const bool branch_taken_0x13cf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13cf9c) {
            ctx->pc = 0x13C6C8u;
            return;
        }
    }
    ctx->pc = 0x13CFA4u;
    // 0x13cfa4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x13cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13cfa8: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x13cfa8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13cfac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13cfacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13cfb0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13cfb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13cfb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13cfb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13cfb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13cfb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13cfbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13cfbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13cfc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13cfc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cfc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13cfc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cfc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cfc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cfcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cfccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfd0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x13cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x13cfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CFDCu;
}
