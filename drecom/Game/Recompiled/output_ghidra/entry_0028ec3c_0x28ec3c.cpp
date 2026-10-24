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

// Function: entry_0028ec3c
// Address: 0x28ec3c - 0x28ec70
void entry_0028ec3c_0x28ec3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ec3c_0x28ec3c");
#endif

    ctx->pc = 0x28ec3cu;

    // 0x28ec3c: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x28ec3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ec40: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28ec40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ec44: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28ec44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ec48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28ec48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ec4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28ec4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ec50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ec50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ec54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ec54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ec58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ec58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ec5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ec5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ec60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ec60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ec64: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x28ec64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28ec68: 0x3e00008  jr          $ra
    ctx->pc = 0x28EC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EC70u;
}
