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

// Function: entry_00201b60
// Address: 0x201b60 - 0x201b90
void entry_00201b60_0x201b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201b60_0x201b60");
#endif

    ctx->pc = 0x201b60u;

    // 0x201b60: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x201b64: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x201b68: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201b6c: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x201b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x201b70: 0x34422812  ori         $v0, $v0, 0x2812
    ctx->pc = 0x201b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10258);
    // 0x201b74: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x201b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201b78: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x201b7c: 0x24450d50  addiu       $a1, $v0, 0xD50
    ctx->pc = 0x201b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3408));
    // 0x201b80: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201b84: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x201b84u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201b88: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201B88u;
    SET_GPR_U32(ctx, 31, 0x201B90u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201B88u, 0x201B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B90u;
}
