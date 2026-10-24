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

// Function: entry_00278f58
// Address: 0x278f58 - 0x278fc0
void entry_00278f58_0x278f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278f58_0x278f58");
#endif

    switch (ctx->pc) {
        case 0x278f7cu: goto label_278f7c;
        case 0x278f88u: goto label_278f88;
        case 0x278facu: goto label_278fac;
        case 0x278fb8u: goto label_278fb8;
        default: break;
    }

    ctx->pc = 0x278f58u;

    // 0x278f58: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278f5c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278f60: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x278f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x278f64: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x278f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278f68: 0x24045700  addiu       $a0, $zero, 0x5700
    ctx->pc = 0x278f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22272));
    // 0x278f6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278f6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278f70: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278f70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278f74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278F74u;
    SET_GPR_U32(ctx, 31, 0x278F7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278F74u, 0x278F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F7Cu;
label_278f7c:
    // 0x278f7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x278f7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278f80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278F80u;
    SET_GPR_U32(ctx, 31, 0x278F88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278F80u, 0x278F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F88u;
label_278f88:
    // 0x278f88: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278f8c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278f90: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x278f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x278f94: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x278f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278f98: 0x24047300  addiu       $a0, $zero, 0x7300
    ctx->pc = 0x278f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29440));
    // 0x278f9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278fa0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278fa0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278fa4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278FA4u;
    SET_GPR_U32(ctx, 31, 0x278FACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278FA4u, 0x278FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FACu;
label_278fac:
    // 0x278fac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x278facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278fb0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278FB0u;
    SET_GPR_U32(ctx, 31, 0x278FB8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278FB0u, 0x278FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FB8u;
label_278fb8:
    // 0x278fb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x278fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x278fbc: 0x0  nop
    ctx->pc = 0x278fbcu;
    // NOP
    ctx->pc = 0x278fc0u;
}
