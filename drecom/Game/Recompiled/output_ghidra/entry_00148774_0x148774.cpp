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

// Function: entry_00148774
// Address: 0x148774 - 0x148794
void entry_00148774_0x148774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148774_0x148774");
#endif

    ctx->pc = 0x148774u;

    // 0x148774: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148778: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14877c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14877cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148780: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x148780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x148784: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x148784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x148788: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14878c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14878Cu;
    SET_GPR_U32(ctx, 31, 0x148794u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14878Cu, 0x148794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148794u;
}
