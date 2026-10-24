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

// Function: entry_001a8f70
// Address: 0x1a8f70 - 0x1a8fcc
void entry_001a8f70_0x1a8f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8f70_0x1a8f70");
#endif

    switch (ctx->pc) {
        case 0x1a8fc0u: goto label_1a8fc0;
        default: break;
    }

    ctx->pc = 0x1a8f70u;

    // 0x1a8f70: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1a8f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a8f74: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A8F74u;
    {
        const bool branch_taken_0x1a8f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8f74) {
            ctx->pc = 0x1A8F1Cu;
            return;
        }
    }
    ctx->pc = 0x1A8F7Cu;
    // 0x1a8f7c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1a8f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a8f80: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x1a8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a8f84: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x1a8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a8f88: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x1a8f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a8f8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1a8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a8f90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a8f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8f94: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a8f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a8f98: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1a8f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a8f9c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1a8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1a8fa0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a8fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a8fa4: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x1a8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1a8fa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a8fac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a8facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a8fb0: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a8fb4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1a8fb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1a8fb8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A8FB8u;
    SET_GPR_U32(ctx, 31, 0x1A8FC0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A8FB8u, 0x1A8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8FC0u;
label_1a8fc0:
    // 0x1a8fc0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1a8fc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a8fc4: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x1A8FC4u;
    {
        const bool branch_taken_0x1a8fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8fc4) {
            ctx->pc = 0x1A92F0u;
            return;
        }
    }
    ctx->pc = 0x1A8FCCu;
}
