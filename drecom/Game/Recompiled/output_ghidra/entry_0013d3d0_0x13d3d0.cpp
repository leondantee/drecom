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

// Function: entry_0013d3d0
// Address: 0x13d3d0 - 0x13d408
void entry_0013d3d0_0x13d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d3d0_0x13d3d0");
#endif

    ctx->pc = 0x13d3d0u;

    // 0x13d3d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x13d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13d3d4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x13d3d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13d3d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13d3d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13d3dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13d3dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13d3e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13d3e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13d3e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13d3e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d3e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13d3e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13d3ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13d3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d3f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d3f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d3f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d3f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d3fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x13d3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13d400: 0x3e00008  jr          $ra
    ctx->pc = 0x13D400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D408u;
}
