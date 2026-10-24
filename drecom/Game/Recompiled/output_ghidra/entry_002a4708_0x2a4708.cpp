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

// Function: entry_002a4708
// Address: 0x2a4708 - 0x2a4770
void entry_002a4708_0x2a4708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a4708_0x2a4708");
#endif

    switch (ctx->pc) {
        case 0x2a4710u: goto label_2a4710;
        default: break;
    }

    ctx->pc = 0x2a4708u;

    // 0x2a4708: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A4708u;
    SET_GPR_U32(ctx, 31, 0x2A4710u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A4708u, 0x2A4710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4710u;
label_2a4710:
    // 0x2a4710: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a4710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4714: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2a4714u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a4718: 0x30c70003  andi        $a3, $a2, 0x3
    ctx->pc = 0x2a4718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x2a471c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4720: 0x14e30013  bne         $a3, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A4720u;
    {
        const bool branch_taken_0x2a4720 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a4720) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A4728u;
    // 0x2a4728: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a472c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a4730: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2a4730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a4734: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x2a4734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2a4738: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A4738u;
    {
        const bool branch_taken_0x2a4738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4738) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A4740u;
    // 0x2a4740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a4740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4744: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4748: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a474c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a474cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a4750: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4754: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x2a4754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a4758: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a475c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2a475cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4760: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4764: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2a4764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4768: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a476c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a476cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a4770u;
}
