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

// Function: entry_002dde9c
// Address: 0x2dde9c - 0x2ddebc
void entry_002dde9c_0x2dde9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dde9c_0x2dde9c");
#endif

    ctx->pc = 0x2dde9cu;

    // 0x2dde9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2dde9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddea0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2ddea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ddea4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2ddea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2ddea8: 0x24060a38  addiu       $a2, $zero, 0xA38
    ctx->pc = 0x2ddea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2616));
    // 0x2ddeac: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2ddeacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ddeb0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2ddeb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ddeb4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DDEB4u;
    SET_GPR_U32(ctx, 31, 0x2DDEBCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDEB4u, 0x2DDEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEBCu;
}
