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

// Function: entry_001eeefc
// Address: 0x1eeefc - 0x1eef80
void entry_001eeefc_0x1eeefc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eeefc_0x1eeefc");
#endif

    switch (ctx->pc) {
        case 0x1eef54u: goto label_1eef54;
        default: break;
    }

    ctx->pc = 0x1eeefcu;

    // 0x1eeefc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eeefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eef04: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1eef04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1eef08: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1eef08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1eef0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1eef0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1eef10: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x1eef10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x1eef14: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EEF14u;
    {
        const bool branch_taken_0x1eef14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef14) {
            ctx->pc = 0x1EEF80u;
            return;
        }
    }
    ctx->pc = 0x1EEF1Cu;
    // 0x1eef1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eef20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eef24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eef28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eef2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eef30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eef34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef38: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1eef38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eef3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef40: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eef40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eef44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eef48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eef4c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF54u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EEF4Cu, 0x1EEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF54u;
label_1eef54:
    // 0x1eef54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eef58: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1eef58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1eef5c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1eef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1eef60: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1eef60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1eef64: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1eef64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1eef68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef6c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1eef6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eef70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eef74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eef7c: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x1eef7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1eef80u;
}
