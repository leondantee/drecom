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

// Function: entry_0028cb88
// Address: 0x28cb88 - 0x28cbac
void entry_0028cb88_0x28cb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cb88_0x28cb88");
#endif

    ctx->pc = 0x28cb88u;

    // 0x28cb88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cb8c: 0x8c2220f0  lw          $v0, 0x20F0($at)
    ctx->pc = 0x28cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6220F0u));
    // 0x28cb90: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x28cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x28cb94: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28cb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28cb98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28cb98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28cb9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28cb9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cba0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28cba0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cba4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28CBA4u;
    SET_GPR_U32(ctx, 31, 0x28CBACu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28CBA4u, 0x28CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CBACu;
}
