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

// Function: entry_0012e270
// Address: 0x12e270 - 0x12e290
void entry_0012e270_0x12e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e270_0x12e270");
#endif

    ctx->pc = 0x12e270u;

    // 0x12e270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e274: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e278: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12e278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12e27c: 0x24063c48  addiu       $a2, $zero, 0x3C48
    ctx->pc = 0x12e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15432));
    // 0x12e280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12e280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e284: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12e284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12e288: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12E288u;
    SET_GPR_U32(ctx, 31, 0x12E290u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12E288u, 0x12E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E290u;
}
