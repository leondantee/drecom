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

// Function: caseD_7
// Address: 0x25ba10 - 0x25ba74
void caseD_7_0x25ba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x25ba10");
#endif

    switch (ctx->pc) {
        case 0x25ba6cu: goto label_25ba6c;
        default: break;
    }

    ctx->pc = 0x25ba10u;

    // 0x25ba10: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25ba10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25ba14: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25ba18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25ba1c: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x25ba20: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25BA20u;
    {
        const bool branch_taken_0x25ba20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ba20) {
            ctx->pc = 0x25BA74u;
            return;
        }
    }
    ctx->pc = 0x25BA28u;
    // 0x25ba28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ba2c: 0xa7a200ca  sh          $v0, 0xCA($sp)
    ctx->pc = 0x25ba2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ba30: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x25ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25ba34: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25ba38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ba3c: 0x8c5504b0  lw          $s5, 0x4B0($v0)
    ctx->pc = 0x25ba3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25ba40: 0xafb500cc  sw          $s5, 0xCC($sp)
    ctx->pc = 0x25ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 21));
    // 0x25ba44: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x25ba44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25ba48: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25ba4c: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x25ba4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25ba50: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25ba54: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x25ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25ba58: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25ba58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25ba5c: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25ba5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25ba60: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25ba60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25ba64: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25BA64u;
    SET_GPR_U32(ctx, 31, 0x25BA6Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BA64u, 0x25BA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BA6Cu;
label_25ba6c:
    // 0x25ba6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25BA6Cu;
    {
        const bool branch_taken_0x25ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ba6c) {
            ctx->pc = 0x25BA90u;
            return;
        }
    }
    ctx->pc = 0x25BA74u;
}
