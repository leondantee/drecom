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

// Function: entry_001a8ee4
// Address: 0x1a8ee4 - 0x1a8f10
void entry_001a8ee4_0x1a8ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8ee4_0x1a8ee4");
#endif

    ctx->pc = 0x1a8ee4u;

    // 0x1a8ee4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a8ee8: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a8ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a8eec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a8eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a8ef0: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a8ef4: 0x34422b13  ori         $v0, $v0, 0x2B13
    ctx->pc = 0x1a8ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11027);
    // 0x1a8ef8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x1a8ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8efc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a8f00: 0x2445f140  addiu       $a1, $v0, -0xEC0
    ctx->pc = 0x1a8f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x1a8f04: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x1a8f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a8f08: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A8F08u;
    SET_GPR_U32(ctx, 31, 0x1A8F10u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A8F08u, 0x1A8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F10u;
}
