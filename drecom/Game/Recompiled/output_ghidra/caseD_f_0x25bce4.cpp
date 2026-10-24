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

// Function: caseD_f
// Address: 0x25bce4 - 0x25bd48
void caseD_f_0x25bce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x25bce4");
#endif

    switch (ctx->pc) {
        case 0x25bd40u: goto label_25bd40;
        default: break;
    }

    ctx->pc = 0x25bce4u;

    // 0x25bce4: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bce8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bcec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25bcf0: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x25bcf4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25BCF4u;
    {
        const bool branch_taken_0x25bcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bcf4) {
            ctx->pc = 0x25BD48u;
            return;
        }
    }
    ctx->pc = 0x25BCFCu;
    // 0x25bcfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25bcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bd00: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x25bd00u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
    // 0x25bd04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bd08: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bd0c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x25bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25bd10: 0x8c4404b0  lw          $a0, 0x4B0($v0)
    ctx->pc = 0x25bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25bd14: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x25bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x25bd18: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x25bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25bd1c: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x25bd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x25bd20: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x25bd24: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bd28: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x25bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25bd2c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25bd30: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25bd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25bd34: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25bd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25bd38: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25BD38u;
    SET_GPR_U32(ctx, 31, 0x25BD40u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BD38u, 0x25BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BD40u;
label_25bd40:
    // 0x25bd40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25BD40u;
    {
        const bool branch_taken_0x25bd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bd40) {
            ctx->pc = 0x25BD60u;
            return;
        }
    }
    ctx->pc = 0x25BD48u;
}
