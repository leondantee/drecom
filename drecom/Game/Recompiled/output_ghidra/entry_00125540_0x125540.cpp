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

// Function: entry_00125540
// Address: 0x125540 - 0x125554
void entry_00125540_0x125540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125540_0x125540");
#endif

    switch (ctx->pc) {
        case 0x125550u: goto label_125550;
        default: break;
    }

    ctx->pc = 0x125540u;

    // 0x125540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x125540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125544: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x125544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x125548: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x125548u;
    SET_GPR_U32(ctx, 31, 0x125550u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x125548u, 0x125550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125550u;
label_125550:
    // 0x125550: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x125550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->pc = 0x125554u;
}
