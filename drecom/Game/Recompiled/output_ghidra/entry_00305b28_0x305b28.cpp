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

// Function: entry_00305b28
// Address: 0x305b28 - 0x305ba0
void entry_00305b28_0x305b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00305b28_0x305b28");
#endif

    switch (ctx->pc) {
        case 0x305b38u: goto label_305b38;
        case 0x305b44u: goto label_305b44;
        case 0x305b54u: goto label_305b54;
        case 0x305b60u: goto label_305b60;
        default: break;
    }

    ctx->pc = 0x305b28u;

    // 0x305b28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305b30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x305B30u;
    SET_GPR_U32(ctx, 31, 0x305B38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x305B30u, 0x305B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B38u;
label_305b38:
    // 0x305b38: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x305B3Cu;
    SET_GPR_U32(ctx, 31, 0x305B44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x305B3Cu, 0x305B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B44u;
label_305b44:
    // 0x305b44: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x305b48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x305b4c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x305B4Cu;
    SET_GPR_U32(ctx, 31, 0x305B54u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x305B4Cu, 0x305B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B54u;
label_305b54:
    // 0x305b54: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x305b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b58: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x305B58u;
    SET_GPR_U32(ctx, 31, 0x305B60u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x305B58u, 0x305B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B60u;
label_305b60:
    // 0x305b60: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b64: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x305b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x305b68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305B68u;
    {
        const bool branch_taken_0x305b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b68) {
            ctx->pc = 0x305BA0u;
            return;
        }
    }
    ctx->pc = 0x305B70u;
    // 0x305b70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305b74: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x305b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x305b7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x305b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305b80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x305b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x305b88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x305b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x305b90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x305b94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x305b98: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x305b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x305b9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x305b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x305ba0u;
}
