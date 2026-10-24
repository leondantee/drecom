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

// Function: entry_002d4aec
// Address: 0x2d4aec - 0x2d4b70
void entry_002d4aec_0x2d4aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4aec_0x2d4aec");
#endif

    switch (ctx->pc) {
        case 0x2d4b0cu: goto label_2d4b0c;
        case 0x2d4b18u: goto label_2d4b18;
        case 0x2d4b28u: goto label_2d4b28;
        case 0x2d4b34u: goto label_2d4b34;
        default: break;
    }

    ctx->pc = 0x2d4aecu;

    // 0x2d4aec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4af0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2d4af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d4af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4af8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2d4af8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d4afc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4b00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4b04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D4B04u;
    SET_GPR_U32(ctx, 31, 0x2D4B0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D4B04u, 0x2D4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B0Cu;
label_2d4b0c:
    // 0x2d4b0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b10: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D4B10u;
    SET_GPR_U32(ctx, 31, 0x2D4B18u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D4B10u, 0x2D4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B18u;
label_2d4b18:
    // 0x2d4b18: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d4b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d4b20: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D4B20u;
    SET_GPR_U32(ctx, 31, 0x2D4B28u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D4B20u, 0x2D4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B28u;
label_2d4b28:
    // 0x2d4b28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b2c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D4B2Cu;
    SET_GPR_U32(ctx, 31, 0x2D4B34u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D4B2Cu, 0x2D4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4B34u;
label_2d4b34:
    // 0x2d4b34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b38: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d4b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d4b3c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D4B3Cu;
    {
        const bool branch_taken_0x2d4b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4b3c) {
            ctx->pc = 0x2D4B70u;
            return;
        }
    }
    ctx->pc = 0x2D4B44u;
    // 0x2d4b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d4b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4b48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b4c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d4b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4b50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b54: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d4b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4b58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d4b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4b60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4b68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4b6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d4b70u;
}
