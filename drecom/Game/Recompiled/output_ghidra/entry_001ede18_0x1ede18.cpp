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

// Function: entry_001ede18
// Address: 0x1ede18 - 0x1ede9c
void entry_001ede18_0x1ede18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ede18_0x1ede18");
#endif

    switch (ctx->pc) {
        case 0x1ede70u: goto label_1ede70;
        default: break;
    }

    ctx->pc = 0x1ede18u;

    // 0x1ede18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ede18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ede1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ede20: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1ede20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1ede24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ede24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ede28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ede28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ede2c: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1ede2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x1ede30: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EDE30u;
    {
        const bool branch_taken_0x1ede30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ede30) {
            ctx->pc = 0x1EDE9Cu;
            return;
        }
    }
    ctx->pc = 0x1EDE38u;
    // 0x1ede38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ede3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede40: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ede40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ede44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ede44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ede48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede4c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1ede4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ede50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede54: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1ede54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ede58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede5c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ede5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ede60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ede60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ede64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ede68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDE68u;
    SET_GPR_U32(ctx, 31, 0x1EDE70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDE68u, 0x1EDE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE70u;
label_1ede70:
    // 0x1ede70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ede70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ede74: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ede74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ede78: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1ede78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1ede7c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ede7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ede80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ede80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ede84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ede84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede88: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ede88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ede8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ede8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ede90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ede90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ede94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ede94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ede98: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x1ede98u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1ede9cu;
}
