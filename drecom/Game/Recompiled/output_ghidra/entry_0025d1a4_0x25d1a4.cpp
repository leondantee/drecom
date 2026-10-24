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

// Function: entry_0025d1a4
// Address: 0x25d1a4 - 0x25d1d8
void entry_0025d1a4_0x25d1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d1a4_0x25d1a4");
#endif

    ctx->pc = 0x25d1a4u;

    // 0x25d1a4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x25d1a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x25d1a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x25d1a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25d1ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25d1acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d1b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25d1b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d1b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25d1b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25d1b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25d1b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25d1bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25d1bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d1c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25d1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d1c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d1c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25d1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d1cc: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x25d1ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x25d1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x25D1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D1D8u;
}
