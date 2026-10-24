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

// Function: entry_0025c1d0
// Address: 0x25c1d0 - 0x25c238
void entry_0025c1d0_0x25c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c1d0_0x25c1d0");
#endif

    switch (ctx->pc) {
        case 0x25c230u: goto label_25c230;
        default: break;
    }

    ctx->pc = 0x25c1d0u;

    // 0x25c1d0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c1d4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c1dc: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25c1e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25C1E0u;
    {
        const bool branch_taken_0x25c1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c1e0) {
            ctx->pc = 0x25C238u;
            return;
        }
    }
    ctx->pc = 0x25C1E8u;
    // 0x25c1e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c1ec: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c1f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x25c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25c1f4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c1f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c1fc: 0x8c4404b0  lw          $a0, 0x4B0($v0)
    ctx->pc = 0x25c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25c200: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x25c200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
    // 0x25c204: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x25c204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25c208: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x25c208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x25c20c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x25c210: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c214: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c218: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25c218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25c21c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25c21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25c220: 0x244207e8  addiu       $v0, $v0, 0x7E8
    ctx->pc = 0x25c220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25c224: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25c224u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25c228: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25C228u;
    SET_GPR_U32(ctx, 31, 0x25C230u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C228u, 0x25C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C230u;
label_25c230:
    // 0x25c230: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25C230u;
    {
        const bool branch_taken_0x25c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c230) {
            ctx->pc = 0x25C250u;
            return;
        }
    }
    ctx->pc = 0x25C238u;
}
