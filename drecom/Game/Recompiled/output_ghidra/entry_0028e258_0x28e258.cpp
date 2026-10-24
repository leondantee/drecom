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

// Function: entry_0028e258
// Address: 0x28e258 - 0x28e280
void entry_0028e258_0x28e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e258_0x28e258");
#endif

    ctx->pc = 0x28e258u;

    // 0x28e258: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28e258u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28e25c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28e25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28e260: 0x8c2427c8  lw          $a0, 0x27C8($at)
    ctx->pc = 0x28e260u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6227C8u));
    // 0x28e264: 0x24850200  addiu       $a1, $a0, 0x200
    ctx->pc = 0x28e264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x28e268: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x28e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x28e26c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28e26cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28e270: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28e270u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e274: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28e274u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28e278: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28E278u;
    SET_GPR_U32(ctx, 31, 0x28E280u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28E278u, 0x28E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E280u;
}
