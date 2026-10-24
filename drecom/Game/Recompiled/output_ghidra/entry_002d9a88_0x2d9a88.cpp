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

// Function: entry_002d9a88
// Address: 0x2d9a88 - 0x2d9b50
void entry_002d9a88_0x2d9a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9a88_0x2d9a88");
#endif

    switch (ctx->pc) {
        case 0x2d9aa4u: goto label_2d9aa4;
        case 0x2d9ac4u: goto label_2d9ac4;
        case 0x2d9ad8u: goto label_2d9ad8;
        case 0x2d9af0u: goto label_2d9af0;
        case 0x2d9b0cu: goto label_2d9b0c;
        case 0x2d9b28u: goto label_2d9b28;
        case 0x2d9b44u: goto label_2d9b44;
        default: break;
    }

    ctx->pc = 0x2d9a88u;

    // 0x2d9a88: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2d9a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2d9a8c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x2D9A8Cu;
    {
        const bool branch_taken_0x2d9a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a8c) {
            ctx->pc = 0x2D99D0u;
            return;
        }
    }
    ctx->pc = 0x2D9A94u;
    // 0x2d9a94: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9a98: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2d9a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2d9a9c: 0xc096290  jal         func_258A40
    ctx->pc = 0x2D9A9Cu;
    SET_GPR_U32(ctx, 31, 0x2D9AA4u);
    ctx->pc = 0x258A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258A40u, 0x2D9A9Cu, 0x2D9AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AA4u;
label_2d9aa4:
    // 0x2d9aa4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9aa8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2d9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d9aac: 0x24530d80  addiu       $s3, $v0, 0xD80
    ctx->pc = 0x2d9aacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
    // 0x2d9ab0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9ab0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9ab4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d9ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9ab8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2d9ab8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9abc: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2D9ABCu;
    SET_GPR_U32(ctx, 31, 0x2D9AC4u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2D9ABCu, 0x2D9AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AC4u;
label_2d9ac4:
    // 0x2d9ac4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9ac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9ac8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d9ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9acc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d9accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9ad0: 0xc0961d0  jal         func_258740
    ctx->pc = 0x2D9AD0u;
    SET_GPR_U32(ctx, 31, 0x2D9AD8u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x2D9AD0u, 0x2D9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AD8u;
label_2d9ad8:
    // 0x2d9ad8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9adc: 0x8c530058  lw          $s3, 0x58($v0)
    ctx->pc = 0x2d9adcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d9ae0: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9ae0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9ae4: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2d9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d9ae8: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2D9AE8u;
    SET_GPR_U32(ctx, 31, 0x2D9AF0u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2D9AE8u, 0x2D9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9AF0u;
label_2d9af0:
    // 0x2d9af0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2d9af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9af4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d9af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d9af8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2d9af8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9afc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9b00: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2d9b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d9b04: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2D9B04u;
    SET_GPR_U32(ctx, 31, 0x2D9B0Cu);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2D9B04u, 0x2D9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B0Cu;
label_2d9b0c:
    // 0x2d9b0c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2d9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9b10: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2d9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2d9b14: 0x24530990  addiu       $s3, $v0, 0x990
    ctx->pc = 0x2d9b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2448));
    // 0x2d9b18: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2d9b18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2d9b1c: 0x24053001  addiu       $a1, $zero, 0x3001
    ctx->pc = 0x2d9b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12289));
    // 0x2d9b20: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x2D9B20u;
    SET_GPR_U32(ctx, 31, 0x2D9B28u);
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x2D9B20u, 0x2D9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B28u;
label_2d9b28:
    // 0x2d9b28: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2d9b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9b2c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2d9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2d9b30: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x2d9b30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9b34: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2d9b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9b38: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x2d9b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2d9b3c: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x2D9B3Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B44u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x2D9B3Cu, 0x2D9B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B44u;
label_2d9b44:
    // 0x2d9b44: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2d9b44u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d9b48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9B48u;
    {
        const bool branch_taken_0x2d9b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9b48) {
            ctx->pc = 0x2D9B98u;
            return;
        }
    }
    ctx->pc = 0x2D9B50u;
}
