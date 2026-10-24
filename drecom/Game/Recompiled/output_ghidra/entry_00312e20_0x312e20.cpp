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

// Function: entry_00312e20
// Address: 0x312e20 - 0x312e88
void entry_00312e20_0x312e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312e20_0x312e20");
#endif

    switch (ctx->pc) {
        case 0x312e84u: goto label_312e84;
        default: break;
    }

    ctx->pc = 0x312e20u;

    // 0x312e20: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x312e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312e24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x312e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x312e28: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x312e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x312e2c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x312e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x312e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312e34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x312e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312e38: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312e3c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x312e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x312e40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312e44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312e48: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x312e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312e4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x312e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312e50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x312e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312e54: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312e58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x312e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x312e5c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312e60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312e64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x312e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312e68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x312e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312e6c: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x312e6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x312e70: 0x24043900  addiu       $a0, $zero, 0x3900
    ctx->pc = 0x312e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x312e74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x312e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312e78: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x312e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x312e7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x312E7Cu;
    SET_GPR_U32(ctx, 31, 0x312E84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x312E7Cu, 0x312E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312E84u;
label_312e84:
    // 0x312e84: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x312e84u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x312e88u;
}
