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

// Function: entry_00373464
// Address: 0x373464 - 0x3734c8
void entry_00373464_0x373464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373464_0x373464");
#endif

    switch (ctx->pc) {
        case 0x3734c0u: goto label_3734c0;
        default: break;
    }

    ctx->pc = 0x373464u;

    // 0x373464: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x373464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373468: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37346c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x37346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x373470: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x373470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x373474: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x373474u;
    {
        const bool branch_taken_0x373474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373474) {
            ctx->pc = 0x3734C8u;
            return;
        }
    }
    ctx->pc = 0x37347Cu;
    // 0x37347c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373480: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x373480u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x373484: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x373484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x373488: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x37348c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373490: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x373490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x373494: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x373494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x373498: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x373498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x37349c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3734a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3734a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3734a4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3734a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3734a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3734a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3734ac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3734acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3734b0: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x3734b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x3734b4: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x3734b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x3734b8: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x3734B8u;
    SET_GPR_U32(ctx, 31, 0x3734C0u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x3734B8u, 0x3734C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734C0u;
label_3734c0:
    // 0x3734c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3734C0u;
    {
        const bool branch_taken_0x3734c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3734c0) {
            ctx->pc = 0x3734E0u;
            return;
        }
    }
    ctx->pc = 0x3734C8u;
}
