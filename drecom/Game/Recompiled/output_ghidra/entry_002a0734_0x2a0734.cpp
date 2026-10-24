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

// Function: entry_002a0734
// Address: 0x2a0734 - 0x2a0798
void entry_002a0734_0x2a0734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0734_0x2a0734");
#endif

    switch (ctx->pc) {
        case 0x2a073cu: goto label_2a073c;
        default: break;
    }

    ctx->pc = 0x2a0734u;

    // 0x2a0734: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A0734u;
    SET_GPR_U32(ctx, 31, 0x2A073Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A0734u, 0x2A073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A073Cu;
label_2a073c:
    // 0x2a073c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0740: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2a0740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2a0744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0748: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A0748u;
    {
        const bool branch_taken_0x2a0748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0748) {
            ctx->pc = 0x2A0798u;
            return;
        }
    }
    ctx->pc = 0x2A0750u;
    // 0x2a0750: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0754: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a0754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a0758: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2a0758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a075c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x2a075cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2a0760: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A0760u;
    {
        const bool branch_taken_0x2a0760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0760) {
            ctx->pc = 0x2A0798u;
            return;
        }
    }
    ctx->pc = 0x2A0768u;
    // 0x2a0768: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a076c: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a076cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0770: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x2a0770u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a0774: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2a0774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a0778: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x2a0778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a077c: 0xa1280001  sb          $t0, 0x1($t1)
    ctx->pc = 0x2a077cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a0780: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x2a0780u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0784: 0xa1400002  sb          $zero, 0x2($t2)
    ctx->pc = 0x2a0784u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0788: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a078c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a078cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a0790: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0794: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a0794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a0798u;
}
