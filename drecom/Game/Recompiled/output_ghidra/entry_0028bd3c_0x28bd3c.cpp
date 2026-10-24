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

// Function: entry_0028bd3c
// Address: 0x28bd3c - 0x28bd60
void entry_0028bd3c_0x28bd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bd3c_0x28bd3c");
#endif

    ctx->pc = 0x28bd3cu;

    // 0x28bd3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd40: 0x8c222060  lw          $v0, 0x2060($at)
    ctx->pc = 0x28bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x622060u));
    // 0x28bd44: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x28bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x28bd48: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28bd48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28bd4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28bd4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28bd50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28bd50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bd54: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28bd54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28bd58: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28BD58u;
    SET_GPR_U32(ctx, 31, 0x28BD60u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28BD58u, 0x28BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28BD60u;
}
