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

// Function: entry_00276e64
// Address: 0x276e64 - 0x276e98
void entry_00276e64_0x276e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276e64_0x276e64");
#endif

    switch (ctx->pc) {
        case 0x276e88u: goto label_276e88;
        case 0x276e94u: goto label_276e94;
        default: break;
    }

    ctx->pc = 0x276e64u;

    // 0x276e64: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x276e64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x276e68: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x276e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x276e6c: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x276e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x276e70: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x276e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276e74: 0x24047404  addiu       $a0, $zero, 0x7404
    ctx->pc = 0x276e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29700));
    // 0x276e78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x276e78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276e7c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x276e7cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x276e80: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x276E80u;
    SET_GPR_U32(ctx, 31, 0x276E88u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x276E80u, 0x276E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E88u;
label_276e88:
    // 0x276e88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x276e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x276e8c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x276E8Cu;
    SET_GPR_U32(ctx, 31, 0x276E94u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x276E8Cu, 0x276E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E94u;
label_276e94:
    // 0x276e94: 0x0  nop
    ctx->pc = 0x276e94u;
    // NOP
    ctx->pc = 0x276e98u;
}
