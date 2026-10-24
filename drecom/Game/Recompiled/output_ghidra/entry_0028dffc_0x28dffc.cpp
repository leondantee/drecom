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

// Function: entry_0028dffc
// Address: 0x28dffc - 0x28e020
void entry_0028dffc_0x28dffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028dffc_0x28dffc");
#endif

    ctx->pc = 0x28dffcu;

    // 0x28dffc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e000: 0x8c2227c8  lw          $v0, 0x27C8($at)
    ctx->pc = 0x28e000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6227C8u));
    // 0x28e004: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x28e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x28e008: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28e008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28e00c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e00cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e010: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e014: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e014u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e018: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28E018u;
    SET_GPR_U32(ctx, 31, 0x28E020u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28E018u, 0x28E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E020u;
}
