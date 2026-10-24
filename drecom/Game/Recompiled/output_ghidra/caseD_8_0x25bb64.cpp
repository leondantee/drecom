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

// Function: caseD_8
// Address: 0x25bb64 - 0x25bbc8
void caseD_8_0x25bb64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x25bb64");
#endif

    switch (ctx->pc) {
        case 0x25bbc0u: goto label_25bbc0;
        default: break;
    }

    ctx->pc = 0x25bb64u;

    // 0x25bb64: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bb68: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bb6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25bb70: 0x8c4304b0  lw          $v1, 0x4B0($v0)
    ctx->pc = 0x25bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25bb74: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25BB74u;
    {
        const bool branch_taken_0x25bb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bb74) {
            ctx->pc = 0x25BBC8u;
            return;
        }
    }
    ctx->pc = 0x25BB7Cu;
    // 0x25bb7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bb80: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25bb80u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x25bb84: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x25bb84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bb88: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bb8c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x25bb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x25bb90: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25bb94: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x25bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x25bb98: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25bb9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25bba0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25bba4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bba8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25bbac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25bbb0: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25bbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25bbb4: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25bbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25bbb8: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25BBB8u;
    SET_GPR_U32(ctx, 31, 0x25BBC0u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BBB8u, 0x25BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BBC0u;
label_25bbc0:
    // 0x25bbc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25BBC0u;
    {
        const bool branch_taken_0x25bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bbc0) {
            ctx->pc = 0x25BBE0u;
            return;
        }
    }
    ctx->pc = 0x25BBC8u;
}
