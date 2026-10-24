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

// Function: entry_002f9d70
// Address: 0x2f9d70 - 0x2f9df8
void entry_002f9d70_0x2f9d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f9d70_0x2f9d70");
#endif

    switch (ctx->pc) {
        case 0x2f9de4u: goto label_2f9de4;
        case 0x2f9df0u: goto label_2f9df0;
        default: break;
    }

    ctx->pc = 0x2f9d70u;

    // 0x2f9d70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2f9d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f9d78: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F9D78u;
    {
        const bool branch_taken_0x2f9d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9d78) {
            ctx->pc = 0x2F9DF8u;
            return;
        }
    }
    ctx->pc = 0x2F9D80u;
    // 0x2f9d80: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f9d84: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2f9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f9d88: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2f9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2f9d8c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2f9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f9d90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f9d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f9d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9d98: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2f9d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2f9d9c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f9d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9da0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2f9da0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f9da4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2f9da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f9da8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f9da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f9dac: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2f9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2f9db0: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x2f9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    // 0x2f9db4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f9db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f9db8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f9db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f9dbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f9dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f9dc0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f9dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f9dc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f9dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f9dc8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f9dc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f9dcc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2f9dccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2f9dd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f9dd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f9dd4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2f9dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2f9dd8: 0x24668ff0  addiu       $a2, $v1, -0x7010
    ctx->pc = 0x2f9dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938608));
    // 0x2f9ddc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F9DDCu;
    SET_GPR_U32(ctx, 31, 0x2F9DE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F9DDCu, 0x2F9DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DE4u;
label_2f9de4:
    // 0x2f9de4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f9de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f9de8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F9DE8u;
    SET_GPR_U32(ctx, 31, 0x2F9DF0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F9DE8u, 0x2F9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9DF0u;
label_2f9df0:
    // 0x2f9df0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2F9DF0u;
    {
        const bool branch_taken_0x2f9df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9df0) {
            ctx->pc = 0x2F9F34u;
            return;
        }
    }
    ctx->pc = 0x2F9DF8u;
}
