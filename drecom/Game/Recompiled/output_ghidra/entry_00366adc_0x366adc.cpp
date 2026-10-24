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

// Function: entry_00366adc
// Address: 0x366adc - 0x366b40
void entry_00366adc_0x366adc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366adc_0x366adc");
#endif

    switch (ctx->pc) {
        case 0x366aecu: goto label_366aec;
        case 0x366af8u: goto label_366af8;
        default: break;
    }

    ctx->pc = 0x366adcu;

    // 0x366adc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366ae0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366ae0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366ae4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366AE4u;
    SET_GPR_U32(ctx, 31, 0x366AECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366AE4u, 0x366AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AECu;
label_366aec:
    // 0x366aec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366af0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366AF0u;
    SET_GPR_U32(ctx, 31, 0x366AF8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366AF0u, 0x366AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366AF8u;
label_366af8:
    // 0x366af8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366afc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x366afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x366b00: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x366B00u;
    {
        const bool branch_taken_0x366b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366b00) {
            ctx->pc = 0x366B40u;
            return;
        }
    }
    ctx->pc = 0x366B08u;
    // 0x366b08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366b0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366b10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366b14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366b18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x366b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x366b20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x366b28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x366b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x366b30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x366b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x366b38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x366b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366b3c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x366b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x366b40u;
}
