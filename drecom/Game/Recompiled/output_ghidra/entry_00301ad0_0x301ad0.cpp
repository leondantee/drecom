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

// Function: entry_00301ad0
// Address: 0x301ad0 - 0x301b60
void entry_00301ad0_0x301ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301ad0_0x301ad0");
#endif

    switch (ctx->pc) {
        case 0x301ae0u: goto label_301ae0;
        case 0x301aecu: goto label_301aec;
        case 0x301afcu: goto label_301afc;
        case 0x301b08u: goto label_301b08;
        default: break;
    }

    ctx->pc = 0x301ad0u;

    // 0x301ad0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301ad4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x301ad4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301ad8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x301AD8u;
    SET_GPR_U32(ctx, 31, 0x301AE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x301AD8u, 0x301AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AE0u;
label_301ae0:
    // 0x301ae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301ae4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x301AE4u;
    SET_GPR_U32(ctx, 31, 0x301AECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x301AE4u, 0x301AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AECu;
label_301aec:
    // 0x301aec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301af0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x301af0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x301af4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x301AF4u;
    SET_GPR_U32(ctx, 31, 0x301AFCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x301AF4u, 0x301AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301AFCu;
label_301afc:
    // 0x301afc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x301afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b00: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x301B00u;
    SET_GPR_U32(ctx, 31, 0x301B08u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x301B00u, 0x301B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301B08u;
label_301b08:
    // 0x301b08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x301b0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x301b10: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x301B10u;
    {
        const bool branch_taken_0x301b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b10) {
            ctx->pc = 0x301BA0u;
            return;
        }
    }
    ctx->pc = 0x301B18u;
    // 0x301b18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b1c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x301b1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x301b20: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x301B20u;
    {
        const bool branch_taken_0x301b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b20) {
            ctx->pc = 0x301B60u;
            return;
        }
    }
    ctx->pc = 0x301B28u;
    // 0x301b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301b2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301b34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301b38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301b40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301b48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301b50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x301b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x301b54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x301b58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x301B58u;
    {
        const bool branch_taken_0x301b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x301b58) {
            ctx->pc = 0x301BA0u;
            return;
        }
    }
    ctx->pc = 0x301B60u;
}
