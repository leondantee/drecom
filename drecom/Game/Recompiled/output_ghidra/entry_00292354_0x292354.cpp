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

// Function: entry_00292354
// Address: 0x292354 - 0x292390
void entry_00292354_0x292354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292354_0x292354");
#endif

    switch (ctx->pc) {
        case 0x292360u: goto label_292360;
        case 0x292388u: goto label_292388;
        default: break;
    }

    ctx->pc = 0x292354u;

    // 0x292354: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x292354u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292358: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x292358u;
    SET_GPR_U32(ctx, 31, 0x292360u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x292360u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x292360u) { return; }
    ctx->pc = 0x292360u;
label_292360:
    // 0x292360: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x292360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292364: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x292364u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x292368: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x292368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29236c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29236cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x292370: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x292370u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x292374: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x292374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x292378: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x292378u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29237c: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x29237cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x292380: 0xc059190  jal         func_164640
    ctx->pc = 0x292380u;
    SET_GPR_U32(ctx, 31, 0x292388u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x292380u, 0x292388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292388u;
label_292388:
    // 0x292388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x292388u;
    {
        const bool branch_taken_0x292388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292388) {
            ctx->pc = 0x2923A8u;
            return;
        }
    }
    ctx->pc = 0x292390u;
}
