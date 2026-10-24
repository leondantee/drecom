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

// Function: entry_002d3244
// Address: 0x2d3244 - 0x2d3264
void entry_002d3244_0x2d3244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d3244_0x2d3244");
#endif

    ctx->pc = 0x2d3244u;

    // 0x2d3244: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d3244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3248: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d3248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d324c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d324cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d3250: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x2d3250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x2d3254: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d3254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d3258: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d3258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d325c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D325Cu;
    SET_GPR_U32(ctx, 31, 0x2D3264u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D325Cu, 0x2D3264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3264u;
}
