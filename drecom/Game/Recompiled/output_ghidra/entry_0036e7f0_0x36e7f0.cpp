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

// Function: entry_0036e7f0
// Address: 0x36e7f0 - 0x36e810
void entry_0036e7f0_0x36e7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e7f0_0x36e7f0");
#endif

    switch (ctx->pc) {
        case 0x36e800u: goto label_36e800;
        case 0x36e80cu: goto label_36e80c;
        default: break;
    }

    ctx->pc = 0x36e7f0u;

    // 0x36e7f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e7f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e7f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e7f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E7F8u;
    SET_GPR_U32(ctx, 31, 0x36E800u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E7F8u, 0x36E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E800u;
label_36e800:
    // 0x36e800: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36e804: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36E804u;
    SET_GPR_U32(ctx, 31, 0x36E80Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36E804u, 0x36E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E80Cu;
label_36e80c:
    // 0x36e80c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x36e810u;
}
