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

// Function: entry_0014c5b0
// Address: 0x14c5b0 - 0x14c5cc
void entry_0014c5b0_0x14c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c5b0_0x14c5b0");
#endif

    switch (ctx->pc) {
        case 0x14c5c0u: goto label_14c5c0;
        default: break;
    }

    ctx->pc = 0x14c5b0u;

    // 0x14c5b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c5b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c5b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c5b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C5B8u;
    SET_GPR_U32(ctx, 31, 0x14C5C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C5B8u, 0x14C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C5C0u;
label_14c5c0:
    // 0x14c5c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c5c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c5c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c5c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c5c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x14c5ccu;
}
