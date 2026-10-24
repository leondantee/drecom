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

// Function: entry_00334fa8
// Address: 0x334fa8 - 0x334fcc
void entry_00334fa8_0x334fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334fa8_0x334fa8");
#endif

    ctx->pc = 0x334fa8u;

    // 0x334fa8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x334fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x334fac: 0x8c2232d8  lw          $v0, 0x32D8($at)
    ctx->pc = 0x334facu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8932D8u));
    // 0x334fb0: 0x24420027  addiu       $v0, $v0, 0x27
    ctx->pc = 0x334fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 39));
    // 0x334fb4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x334fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x334fb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x334fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x334fbc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x334fbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334fc0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x334fc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x334fc4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x334FC4u;
    SET_GPR_U32(ctx, 31, 0x334FCCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x334FC4u, 0x334FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FCCu;
}
