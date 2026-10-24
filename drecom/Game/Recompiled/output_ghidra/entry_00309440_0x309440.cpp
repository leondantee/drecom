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

// Function: entry_00309440
// Address: 0x309440 - 0x30946c
void entry_00309440_0x309440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309440_0x309440");
#endif

    switch (ctx->pc) {
        case 0x309460u: goto label_309460;
        default: break;
    }

    ctx->pc = 0x309440u;

    // 0x309440: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309444: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309448: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x309448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30944c: 0x24062834  addiu       $a2, $zero, 0x2834
    ctx->pc = 0x30944cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10292));
    // 0x309450: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x309450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x309454: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x309454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x309458: 0xc0965d0  jal         func_259740
    ctx->pc = 0x309458u;
    SET_GPR_U32(ctx, 31, 0x309460u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x309458u, 0x309460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309460u;
label_309460:
    // 0x309460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x309460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309464: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x309464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309468: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x309468u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x30946cu;
}
