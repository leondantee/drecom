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

// Function: entry_00243c50
// Address: 0x243c50 - 0x243ce0
void entry_00243c50_0x243c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243c50_0x243c50");
#endif

    switch (ctx->pc) {
        case 0x243c58u: goto label_243c58;
        case 0x243c7cu: goto label_243c7c;
        case 0x243cc4u: goto label_243cc4;
        default: break;
    }

    ctx->pc = 0x243c50u;

    // 0x243c50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243C50u;
    SET_GPR_U32(ctx, 31, 0x243C58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243C50u, 0x243C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C58u;
label_243c58:
    // 0x243c58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x243c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243c5c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x243c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x243c60: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x243c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x243c64: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x243c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243c68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x243c68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x243c6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c70: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x243c70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x243c74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243C74u;
    SET_GPR_U32(ctx, 31, 0x243C7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243C74u, 0x243C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C7Cu;
label_243c7c:
    // 0x243c7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243c80: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x243c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x243c84: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x243C84u;
    {
        const bool branch_taken_0x243c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x243c84) {
            ctx->pc = 0x243CE0u;
            return;
        }
    }
    ctx->pc = 0x243C8Cu;
    // 0x243c8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243c90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243c94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243c98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x243c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x243c9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ca0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243ca4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ca8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243cac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243cb0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243cb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243cb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243cbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243CBCu;
    SET_GPR_U32(ctx, 31, 0x243CC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243CBCu, 0x243CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243CC4u;
label_243cc4:
    // 0x243cc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243cc8: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x243cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x243ccc: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x243cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x243cd0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x243cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243cd4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x243cd4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x243cd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243cdc: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x243cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x243ce0u;
}
