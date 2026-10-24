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

// Function: entry_00141858
// Address: 0x141858 - 0x141870
void entry_00141858_0x141858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141858_0x141858");
#endif

    ctx->pc = 0x141858u;

    // 0x141858: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x141858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14185c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x14185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x141860: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x141860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141864: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x141864u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141868: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x141868u;
    SET_GPR_U32(ctx, 31, 0x141870u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x141868u, 0x141870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141870u;
}
