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

// Function: entry_0031e9d4
// Address: 0x31e9d4 - 0x31e9f4
void entry_0031e9d4_0x31e9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e9d4_0x31e9d4");
#endif

    switch (ctx->pc) {
        case 0x31e9f0u: goto label_31e9f0;
        default: break;
    }

    ctx->pc = 0x31e9d4u;

    // 0x31e9d4: 0x93a20058  lbu         $v0, 0x58($sp)
    ctx->pc = 0x31e9d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31e9d8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x31e9d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31e9dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31e9e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31e9e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31e9e4: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x31e9e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x31e9e8: 0xc0c7a84  jal         func_31EA10
    ctx->pc = 0x31E9E8u;
    SET_GPR_U32(ctx, 31, 0x31E9F0u);
    ctx->pc = 0x31EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA10u, 0x31E9E8u, 0x31E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E9F0u;
label_31e9f0:
    // 0x31e9f0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31e9f0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x31e9f4u;
}
