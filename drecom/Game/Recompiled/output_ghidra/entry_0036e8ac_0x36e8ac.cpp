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

// Function: entry_0036e8ac
// Address: 0x36e8ac - 0x36e8c0
void entry_0036e8ac_0x36e8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e8ac_0x36e8ac");
#endif

    switch (ctx->pc) {
        case 0x36e8bcu: goto label_36e8bc;
        default: break;
    }

    ctx->pc = 0x36e8acu;

    // 0x36e8ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e8b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e8b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e8b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E8B4u;
    SET_GPR_U32(ctx, 31, 0x36E8BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E8B4u, 0x36E8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E8BCu;
label_36e8bc:
    // 0x36e8bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x36e8c0u;
}
