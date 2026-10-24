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

// Function: entry_00244900
// Address: 0x244900 - 0x244920
void entry_00244900_0x244900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244900_0x244900");
#endif

    ctx->pc = 0x244900u;

    // 0x244900: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244904: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244908: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x24490c: 0x3406f00b  ori         $a2, $zero, 0xF00B
    ctx->pc = 0x24490cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61451);
    // 0x244910: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244914: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244918: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244918u;
    SET_GPR_U32(ctx, 31, 0x244920u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244918u, 0x244920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244920u;
}
