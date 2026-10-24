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

// Function: entry_002a162c
// Address: 0x2a162c - 0x2a16a4
void entry_002a162c_0x2a162c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a162c_0x2a162c");
#endif

    switch (ctx->pc) {
        case 0x2a1634u: goto label_2a1634;
        default: break;
    }

    ctx->pc = 0x2a162cu;

    // 0x2a162c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A162Cu;
    SET_GPR_U32(ctx, 31, 0x2A1634u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A162Cu, 0x2A1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1634u;
label_2a1634:
    // 0x2a1634: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a1634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1638: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2a1638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a163c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1640: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A1640u;
    {
        const bool branch_taken_0x2a1640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a1640) {
            ctx->pc = 0x2A16A4u;
            return;
        }
    }
    ctx->pc = 0x2A1648u;
    // 0x2a1648: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a164c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a1650: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2a1650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a1654: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x2a1654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2a1658: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A1658u;
    {
        const bool branch_taken_0x2a1658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1658) {
            ctx->pc = 0x2A16A4u;
            return;
        }
    }
    ctx->pc = 0x2A1660u;
    // 0x2a1660: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1664: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x2a1664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2a1668: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2a1668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2a166c: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x2a166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2a1670: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2a1670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x2a1674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1678: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a167c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a167cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1680: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a1680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1684: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1688: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2a1688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a168c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1690: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a1690u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1694: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x2a1694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1698: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2a1698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a169c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a16a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a16a4u;
}
