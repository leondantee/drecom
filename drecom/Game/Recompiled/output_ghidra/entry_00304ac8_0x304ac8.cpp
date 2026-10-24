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

// Function: entry_00304ac8
// Address: 0x304ac8 - 0x304b40
void entry_00304ac8_0x304ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304ac8_0x304ac8");
#endif

    switch (ctx->pc) {
        case 0x304ad8u: goto label_304ad8;
        case 0x304ae4u: goto label_304ae4;
        case 0x304af4u: goto label_304af4;
        case 0x304b00u: goto label_304b00;
        default: break;
    }

    ctx->pc = 0x304ac8u;

    // 0x304ac8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304acc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304ad0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x304AD0u;
    SET_GPR_U32(ctx, 31, 0x304AD8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x304AD0u, 0x304AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AD8u;
label_304ad8:
    // 0x304ad8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304adc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x304ADCu;
    SET_GPR_U32(ctx, 31, 0x304AE4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x304ADCu, 0x304AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AE4u;
label_304ae4:
    // 0x304ae4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304ae8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304ae8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304aec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x304AECu;
    SET_GPR_U32(ctx, 31, 0x304AF4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x304AECu, 0x304AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304AF4u;
label_304af4:
    // 0x304af4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x304af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304af8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x304AF8u;
    SET_GPR_U32(ctx, 31, 0x304B00u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x304AF8u, 0x304B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304B00u;
label_304b00:
    // 0x304b00: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x304b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x304b08: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x304B08u;
    {
        const bool branch_taken_0x304b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x304b08) {
            ctx->pc = 0x304B40u;
            return;
        }
    }
    ctx->pc = 0x304B10u;
    // 0x304b10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304b14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x304b18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x304b1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x304b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304b20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x304b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x304b28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x304b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x304b30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x304b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x304b38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x304b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304b3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x304b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x304b40u;
}
