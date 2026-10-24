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

// Function: entry_0029f750
// Address: 0x29f750 - 0x29f7e0
void entry_0029f750_0x29f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f750_0x29f750");
#endif

    switch (ctx->pc) {
        case 0x29f7a0u: goto label_29f7a0;
        default: break;
    }

    ctx->pc = 0x29f750u;

    // 0x29f750: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x29f750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f754: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29f754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29f758: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29f75c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29f75cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29f760: 0x14800051  bnez        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x29F760u;
    {
        const bool branch_taken_0x29f760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f760) {
            ctx->pc = 0x29F8A8u;
            return;
        }
    }
    ctx->pc = 0x29F768u;
    // 0x29f768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f76c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f770: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29f770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f774: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f77c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29f77cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29f780: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f784: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29f784u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f788: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f78c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29f78cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f794: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29f794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29f798: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29F798u;
    SET_GPR_U32(ctx, 31, 0x29F7A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29F798u, 0x29F7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F7A0u;
label_29f7a0:
    // 0x29f7a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29f7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29f7a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29f7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29f7a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F7A8u;
    {
        const bool branch_taken_0x29f7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f7a8) {
            ctx->pc = 0x29F7E0u;
            return;
        }
    }
    ctx->pc = 0x29F7B0u;
    // 0x29f7b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f7b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f7bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29f7c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f7c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f7d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f7d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29f7e0u;
}
