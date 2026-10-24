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

// Function: entry_00306adc
// Address: 0x306adc - 0x306b64
void entry_00306adc_0x306adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306adc_0x306adc");
#endif

    switch (ctx->pc) {
        case 0x306aecu: goto label_306aec;
        case 0x306af8u: goto label_306af8;
        case 0x306b08u: goto label_306b08;
        case 0x306b14u: goto label_306b14;
        default: break;
    }

    ctx->pc = 0x306adcu;

    // 0x306adc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306ae0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x306ae0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x306ae4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x306AE4u;
    SET_GPR_U32(ctx, 31, 0x306AECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x306AE4u, 0x306AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AECu;
label_306aec:
    // 0x306aec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306af0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x306AF0u;
    SET_GPR_U32(ctx, 31, 0x306AF8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x306AF0u, 0x306AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AF8u;
label_306af8:
    // 0x306af8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306afc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x306afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x306b00: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x306B00u;
    SET_GPR_U32(ctx, 31, 0x306B08u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x306B00u, 0x306B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B08u;
label_306b08:
    // 0x306b08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b0c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x306B0Cu;
    SET_GPR_U32(ctx, 31, 0x306B14u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x306B0Cu, 0x306B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B14u;
label_306b14:
    // 0x306b14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x306b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b18: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x306b18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x306b1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x306b20: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x306b20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x306b24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x306b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x306b2c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x306B2Cu;
    {
        const bool branch_taken_0x306b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b2c) {
            ctx->pc = 0x306B64u;
            return;
        }
    }
    ctx->pc = 0x306B34u;
    // 0x306b34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306b38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x306b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x306b40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306b44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x306b48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x306b4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x306b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x306b54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x306b58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x306b5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306b60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x306b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x306b64u;
}
