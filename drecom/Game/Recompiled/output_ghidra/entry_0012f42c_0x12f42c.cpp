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

// Function: entry_0012f42c
// Address: 0x12f42c - 0x12f45c
void entry_0012f42c_0x12f42c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f42c_0x12f42c");
#endif

    switch (ctx->pc) {
        case 0x12f44cu: goto label_12f44c;
        default: break;
    }

    ctx->pc = 0x12f42cu;

    // 0x12f42c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f430: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f434: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12f434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12f438: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x12f438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12f43c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12f43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f440: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12f440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12f444: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12F444u;
    SET_GPR_U32(ctx, 31, 0x12F44Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12F444u, 0x12F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F44Cu;
label_12f44c:
    // 0x12f44c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f450: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12f450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f458: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12f458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12f45cu;
}
