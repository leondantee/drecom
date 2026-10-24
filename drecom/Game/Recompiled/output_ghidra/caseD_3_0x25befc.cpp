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

// Function: caseD_3
// Address: 0x25befc - 0x25bf68
void caseD_3_0x25befc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x25befc");
#endif

    switch (ctx->pc) {
        case 0x25bf5cu: goto label_25bf5c;
        default: break;
    }

    ctx->pc = 0x25befcu;

    // 0x25befc: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25befcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bf00: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bf04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25bf08: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x25bf0c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x25BF0Cu;
    {
        const bool branch_taken_0x25bf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf0c) {
            ctx->pc = 0x25BF68u;
            return;
        }
    }
    ctx->pc = 0x25BF14u;
    // 0x25bf14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25bf18: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x25bf18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
    // 0x25bf1c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x25bf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x25bf20: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bf24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25bf28: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x25bf2c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x25bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x25bf30: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x25bf30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x25bf34: 0xb11821  addu        $v1, $a1, $s1
    ctx->pc = 0x25bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x25bf38: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25bf3c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25bf40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25bf44: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x25bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25bf48: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25bf4c: 0x247207e8  addiu       $s2, $v1, 0x7E8
    ctx->pc = 0x25bf4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2024));
    // 0x25bf50: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x25bf50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25bf54: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25BF54u;
    SET_GPR_U32(ctx, 31, 0x25BF5Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25BF54u, 0x25BF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BF5Cu;
label_25bf5c:
    // 0x25bf5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25bf5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25bf60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25BF60u;
    {
        const bool branch_taken_0x25bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25bf60) {
            ctx->pc = 0x25BF80u;
            return;
        }
    }
    ctx->pc = 0x25BF68u;
}
