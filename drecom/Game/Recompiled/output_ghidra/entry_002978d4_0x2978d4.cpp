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

// Function: entry_002978d4
// Address: 0x2978d4 - 0x297908
void entry_002978d4_0x2978d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002978d4_0x2978d4");
#endif

    ctx->pc = 0x2978d4u;

    // 0x2978d4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2978d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2978d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2978d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2978dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2978dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2978e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2978e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2978e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2978e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2978e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2978e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2978ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2978ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2978f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2978f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2978f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2978f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2978f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2978fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2978fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x297900: 0x3e00008  jr          $ra
    ctx->pc = 0x297900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297908u;
}
