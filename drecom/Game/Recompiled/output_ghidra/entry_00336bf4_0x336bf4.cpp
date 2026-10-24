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

// Function: entry_00336bf4
// Address: 0x336bf4 - 0x336c40
void entry_00336bf4_0x336bf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336bf4_0x336bf4");
#endif

    switch (ctx->pc) {
        case 0x336c20u: goto label_336c20;
        default: break;
    }

    ctx->pc = 0x336bf4u;

    // 0x336bf4: 0x26120120  addiu       $s2, $s0, 0x120
    ctx->pc = 0x336bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x336bf8: 0x15b840  sll         $s7, $s5, 1
    ctx->pc = 0x336bf8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x336bfc: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x336bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x336c00: 0x345400a4  ori         $s4, $v0, 0xA4
    ctx->pc = 0x336c00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)164);
    // 0x336c04: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x336c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336c08: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x336c08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x336c0c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x336c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x336c10: 0x34454000  ori         $a1, $v0, 0x4000
    ctx->pc = 0x336c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x336c14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x336c14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336c18: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x336C18u;
    SET_GPR_U32(ctx, 31, 0x336C20u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x336C18u, 0x336C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C20u;
label_336c20:
    // 0x336c20: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x336c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x336c24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x336c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x336c28: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x336c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x336c2c: 0x8e025dd4  lw          $v0, 0x5DD4($s0)
    ctx->pc = 0x336c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24020)));
    // 0x336c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336c34: 0xae025dd4  sw          $v0, 0x5DD4($s0)
    ctx->pc = 0x336c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24020), GPR_U32(ctx, 2));
    // 0x336c38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x336C38u;
    {
        const bool branch_taken_0x336c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336c38) {
            ctx->pc = 0x336C94u;
            return;
        }
    }
    ctx->pc = 0x336C40u;
}
