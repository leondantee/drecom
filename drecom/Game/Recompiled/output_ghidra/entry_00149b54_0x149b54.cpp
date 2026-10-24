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

// Function: entry_00149b54
// Address: 0x149b54 - 0x149b74
void entry_00149b54_0x149b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149b54_0x149b54");
#endif

    ctx->pc = 0x149b54u;

    // 0x149b54: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x149b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149b58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x149b5c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x149b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x149b60: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x149b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x149b64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x149b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149b68: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x149b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x149b6c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x149B6Cu;
    SET_GPR_U32(ctx, 31, 0x149B74u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x149B6Cu, 0x149B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B74u;
}
