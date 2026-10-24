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

// Function: entry_0036e6f4
// Address: 0x36e6f4 - 0x36e708
void entry_0036e6f4_0x36e6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036e6f4_0x36e6f4");
#endif

    switch (ctx->pc) {
        case 0x36e704u: goto label_36e704;
        default: break;
    }

    ctx->pc = 0x36e6f4u;

    // 0x36e6f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36e6f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36e6f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36e6fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36E6FCu;
    SET_GPR_U32(ctx, 31, 0x36E704u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36E6FCu, 0x36E704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E704u;
label_36e704:
    // 0x36e704: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36e704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x36e708u;
}
