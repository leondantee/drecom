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

// Function: entry_001edc5c
// Address: 0x1edc5c - 0x1edd1c
void entry_001edc5c_0x1edc5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001edc5c_0x1edc5c");
#endif

    switch (ctx->pc) {
        case 0x1edc64u: goto label_1edc64;
        case 0x1edcacu: goto label_1edcac;
        case 0x1edcd0u: goto label_1edcd0;
        default: break;
    }

    ctx->pc = 0x1edc5cu;

    // 0x1edc5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDC5Cu;
    SET_GPR_U32(ctx, 31, 0x1EDC64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDC5Cu, 0x1EDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC64u;
label_1edc64:
    // 0x1edc64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1edc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edc68: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1edc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1edc6c: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1EDC6Cu;
    {
        const bool branch_taken_0x1edc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edc6c) {
            ctx->pc = 0x1EDD2Cu;
            return;
        }
    }
    ctx->pc = 0x1EDC74u;
    // 0x1edc74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc7c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1edc7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edc80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1edc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edc84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc88: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1edc88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1edc8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc90: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1edc90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edc98: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1edc98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edc9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edca0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1edca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1edca4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDCA4u;
    SET_GPR_U32(ctx, 31, 0x1EDCACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDCA4u, 0x1EDCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCACu;
label_1edcac:
    // 0x1edcac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1edcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edcb0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1edcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1edcb4: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1edcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1edcb8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1edcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1edcbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1edcbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1edcc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1edcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edcc4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1edcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1edcc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EDCC8u;
    SET_GPR_U32(ctx, 31, 0x1EDCD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EDCC8u, 0x1EDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCD0u;
label_1edcd0:
    // 0x1edcd0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1edcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1edcd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1edcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1edcd8: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EDCD8u;
    {
        const bool branch_taken_0x1edcd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edcd8) {
            ctx->pc = 0x1EDD2Cu;
            return;
        }
    }
    ctx->pc = 0x1EDCE0u;
    // 0x1edce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1edce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edce8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1edce8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edcec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1edcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edcf0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edcf4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1edcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edcf8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1edcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1edcfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd00: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1edd00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1edd04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1edd08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1edd0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1edd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edd10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1edd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1edd14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDD14u;
    {
        const bool branch_taken_0x1edd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd14) {
            ctx->pc = 0x1EDD2Cu;
            return;
        }
    }
    ctx->pc = 0x1EDD1Cu;
}
