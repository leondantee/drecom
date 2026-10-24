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

// Function: caseD_10
// Address: 0x25babc - 0x25bb20
void caseD_10_0x25babc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x25babc");
#endif

    switch (ctx->pc) {
        case 0x25bb18u: goto label_25bb18;
        default: break;
    }

    ctx->pc = 0x25babcu;

    // 0x25babc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25babcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bac0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25bac8: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x25bacc: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25BACCu;
    {
        const bool branch_taken_0x25bacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bacc) {
            ctx->pc = 0x25BB20u;
            return;
        }
    }
    ctx->pc = 0x25BAD4u;
    // 0x25bad4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bad8: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25bad8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x25badc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bae0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25bae8: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25baec: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x25baecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x25baf0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25baf4: 0x518821  addu        $s1, $v0, $s1
    ctx->pc = 0x25baf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25baf8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x25baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25bafc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bb00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25bb04: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25bb08: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25bb0c: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25bb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25bb10: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25BB10u;
    SET_GPR_U32(ctx, 31, 0x25BB18u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BB10u, 0x25BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BB18u;
label_25bb18:
    // 0x25bb18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25BB18u;
    {
        const bool branch_taken_0x25bb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb18) {
            ctx->pc = 0x25BB38u;
            return;
        }
    }
    ctx->pc = 0x25BB20u;
}
