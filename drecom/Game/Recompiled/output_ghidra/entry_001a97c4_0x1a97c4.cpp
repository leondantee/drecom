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

// Function: entry_001a97c4
// Address: 0x1a97c4 - 0x1a97f0
void entry_001a97c4_0x1a97c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a97c4_0x1a97c4");
#endif

    ctx->pc = 0x1a97c4u;

    // 0x1a97c4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a97c8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a97c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a97cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a97ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a97d0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a97d4: 0x34422311  ori         $v0, $v0, 0x2311
    ctx->pc = 0x1a97d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8977);
    // 0x1a97d8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a97d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a97dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a97e0: 0x2445f270  addiu       $a1, $v0, -0xD90
    ctx->pc = 0x1a97e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963824));
    // 0x1a97e4: 0x72603628  paddub      $a2, $s3, $zero
    ctx->pc = 0x1a97e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1a97e8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A97E8u;
    SET_GPR_U32(ctx, 31, 0x1A97F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A97E8u, 0x1A97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A97F0u;
}
