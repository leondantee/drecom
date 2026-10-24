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

// Function: entry_0032ac48
// Address: 0x32ac48 - 0x32ac98
void entry_0032ac48_0x32ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ac48_0x32ac48");
#endif

    switch (ctx->pc) {
        case 0x32ac94u: goto label_32ac94;
        default: break;
    }

    ctx->pc = 0x32ac48u;

    // 0x32ac48: 0x2602000a  addiu       $v0, $s0, 0xA
    ctx->pc = 0x32ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x32ac4c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x32ac4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ac50: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x32ac50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x32ac54: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x32ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x32ac58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ac5c: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x32ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x32ac60: 0x34422800  ori         $v0, $v0, 0x2800
    ctx->pc = 0x32ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x32ac64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32ac68: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32ac68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32ac6c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x32ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x32ac70: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x32ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32ac74: 0x2442a220  addiu       $v0, $v0, -0x5DE0
    ctx->pc = 0x32ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943264));
    // 0x32ac78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x32ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32ac7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x32ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x32ac80: 0x24451ec0  addiu       $a1, $v0, 0x1EC0
    ctx->pc = 0x32ac80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7872));
    // 0x32ac84: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x32ac84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32ac88: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x32ac88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32ac8c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x32AC8Cu;
    SET_GPR_U32(ctx, 31, 0x32AC94u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x32AC8Cu, 0x32AC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AC94u;
label_32ac94:
    // 0x32ac94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32ac94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x32ac98u;
}
