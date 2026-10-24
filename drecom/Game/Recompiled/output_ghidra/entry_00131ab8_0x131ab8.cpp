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

// Function: entry_00131ab8
// Address: 0x131ab8 - 0x131b3c
void entry_00131ab8_0x131ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ab8_0x131ab8");
#endif

    switch (ctx->pc) {
        case 0x131ac8u: goto label_131ac8;
        case 0x131ad4u: goto label_131ad4;
        case 0x131ae4u: goto label_131ae4;
        case 0x131af0u: goto label_131af0;
        default: break;
    }

    ctx->pc = 0x131ab8u;

    // 0x131ab8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131abc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131abcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131ac0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131AC0u;
    SET_GPR_U32(ctx, 31, 0x131AC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131AC0u, 0x131AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AC8u;
label_131ac8:
    // 0x131ac8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131acc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x131ACCu;
    SET_GPR_U32(ctx, 31, 0x131AD4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x131ACCu, 0x131AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AD4u;
label_131ad4:
    // 0x131ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131ad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131ad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131adc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x131ADCu;
    SET_GPR_U32(ctx, 31, 0x131AE4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x131ADCu, 0x131AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AE4u;
label_131ae4:
    // 0x131ae4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131ae8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x131AE8u;
    SET_GPR_U32(ctx, 31, 0x131AF0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x131AE8u, 0x131AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AF0u;
label_131af0:
    // 0x131af0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131af4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x131af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131af8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x131AF8u;
    {
        const bool branch_taken_0x131af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131af8) {
            ctx->pc = 0x131B3Cu;
            return;
        }
    }
    ctx->pc = 0x131B00u;
    // 0x131b00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131b04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x131b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131b0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131b10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x131b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131b18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x131b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x131b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x131b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x131b30: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x131b30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131B34u;
    {
        const bool branch_taken_0x131b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131b34) {
            ctx->pc = 0x131B3Cu;
            return;
        }
    }
    ctx->pc = 0x131B3Cu;
}
