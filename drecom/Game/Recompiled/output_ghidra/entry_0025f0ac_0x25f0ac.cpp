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

// Function: entry_0025f0ac
// Address: 0x25f0ac - 0x25f0c0
void entry_0025f0ac_0x25f0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025f0ac_0x25f0ac");
#endif

    ctx->pc = 0x25f0acu;

    // 0x25f0ac: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25f0acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25f0b0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x25f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x25f0b4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25f0b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25f0b8: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25F0B8u;
    SET_GPR_U32(ctx, 31, 0x25F0C0u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25F0B8u, 0x25F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0C0u;
}
