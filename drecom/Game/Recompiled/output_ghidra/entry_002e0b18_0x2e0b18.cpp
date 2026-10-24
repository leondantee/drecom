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

// Function: entry_002e0b18
// Address: 0x2e0b18 - 0x2e0b90
void entry_002e0b18_0x2e0b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0b18_0x2e0b18");
#endif

    switch (ctx->pc) {
        case 0x2e0b28u: goto label_2e0b28;
        case 0x2e0b34u: goto label_2e0b34;
        case 0x2e0b44u: goto label_2e0b44;
        case 0x2e0b50u: goto label_2e0b50;
        default: break;
    }

    ctx->pc = 0x2e0b18u;

    // 0x2e0b18: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0b20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E0B20u;
    SET_GPR_U32(ctx, 31, 0x2E0B28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E0B20u, 0x2E0B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B28u;
label_2e0b28:
    // 0x2e0b28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b2c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2E0B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E0B34u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2E0B2Cu, 0x2E0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B34u;
label_2e0b34:
    // 0x2e0b34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0b38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0b3c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E0B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E0B44u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E0B3Cu, 0x2E0B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B44u;
label_2e0b44:
    // 0x2e0b44: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b48: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E0B48u;
    SET_GPR_U32(ctx, 31, 0x2E0B50u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E0B48u, 0x2E0B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0B50u;
label_2e0b50:
    // 0x2e0b50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b54: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e0b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e0b58: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E0B58u;
    {
        const bool branch_taken_0x2e0b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0b58) {
            ctx->pc = 0x2E0B90u;
            return;
        }
    }
    ctx->pc = 0x2E0B60u;
    // 0x2e0b60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e0b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0b64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b68: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e0b68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0b6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e0b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0b70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b74: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e0b74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0b78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e0b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0b80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b84: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e0b84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0b88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0b8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2e0b90u;
}
