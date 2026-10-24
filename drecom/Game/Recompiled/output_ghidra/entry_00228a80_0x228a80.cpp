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

// Function: entry_00228a80
// Address: 0x228a80 - 0x228aa8
void entry_00228a80_0x228a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00228a80_0x228a80");
#endif

    ctx->pc = 0x228a80u;

    // 0x228a80: 0x3c05469c  lui         $a1, 0x469C
    ctx->pc = 0x228a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18076 << 16));
    // 0x228a84: 0x34a44000  ori         $a0, $a1, 0x4000
    ctx->pc = 0x228a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x228a88: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x228a88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228a8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x228a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x228a90: 0x24030522  addiu       $v1, $zero, 0x522
    ctx->pc = 0x228a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x228a94: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x228a94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x228a98: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x228a9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x228a9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x228aa0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x228AA0u;
    SET_GPR_U32(ctx, 31, 0x228AA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x228AA0u, 0x228AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228AA8u;
}
