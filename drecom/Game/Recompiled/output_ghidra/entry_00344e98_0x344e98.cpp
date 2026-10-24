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

// Function: entry_00344e98
// Address: 0x344e98 - 0x344f48
void entry_00344e98_0x344e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344e98_0x344e98");
#endif

    switch (ctx->pc) {
        case 0x344f04u: goto label_344f04;
        default: break;
    }

    ctx->pc = 0x344e98u;

    // 0x344e98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e9c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344ea0: 0x846300c2  lh          $v1, 0xC2($v1)
    ctx->pc = 0x344ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
    // 0x344ea4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x344ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x344ea8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x344ea8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x344eac: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x344eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x344eb0: 0x14200025  bnez        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x344EB0u;
    {
        const bool branch_taken_0x344eb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x344eb0) {
            ctx->pc = 0x344F48u;
            return;
        }
    }
    ctx->pc = 0x344EB8u;
    // 0x344eb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ebc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344ec0: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x344ec0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x344ec4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x344EC4u;
    {
        const bool branch_taken_0x344ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344ec4) {
            ctx->pc = 0x344F48u;
            return;
        }
    }
    ctx->pc = 0x344ECCu;
    // 0x344ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344ed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ed4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x344ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x344ed8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x344ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x344edc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ee0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x344ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x344ee4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ee8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x344ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344eec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ef0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x344ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344ef4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ef8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x344ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x344efc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x344EFCu;
    SET_GPR_U32(ctx, 31, 0x344F04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x344EFCu, 0x344F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F04u;
label_344f04:
    // 0x344f04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344f08: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x344f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x344f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f10: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x344F10u;
    {
        const bool branch_taken_0x344f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x344f10) {
            ctx->pc = 0x344F48u;
            return;
        }
    }
    ctx->pc = 0x344F18u;
    // 0x344f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344f1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x344f20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x344f24: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x344f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x344f28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x344f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x344f30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x344f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344f38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344f40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344f44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x344f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x344f48u;
}
