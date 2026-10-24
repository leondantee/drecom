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

// Function: entry_001989f4
// Address: 0x1989f4 - 0x198a04
void entry_001989f4_0x1989f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001989f4_0x1989f4");
#endif

    ctx->pc = 0x1989f4u;

    // 0x1989f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1989f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1989f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1989f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1989fc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1989FCu;
    SET_GPR_U32(ctx, 31, 0x198A04u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1989FCu, 0x198A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A04u;
}
