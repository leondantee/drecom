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

// Function: entry_0013f818
// Address: 0x13f818 - 0x13f868
void entry_0013f818_0x13f818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f818_0x13f818");
#endif

    switch (ctx->pc) {
        case 0x13f830u: goto label_13f830;
        case 0x13f864u: goto label_13f864;
        default: break;
    }

    ctx->pc = 0x13f818u;

    // 0x13f818: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f81c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13f81cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13f820: 0x27a31610  addiu       $v1, $sp, 0x1610
    ctx->pc = 0x13f820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f824: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x13f824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x13f828: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13F828u;
    SET_GPR_U32(ctx, 31, 0x13F830u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13F828u, 0x13F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F830u;
label_13f830:
    // 0x13f830: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13f830u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f834: 0x32050082  andi        $a1, $s0, 0x82
    ctx->pc = 0x13f834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)130);
    // 0x13f838: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x13F838u;
    {
        const bool branch_taken_0x13f838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f838) {
            ctx->pc = 0x13F868u;
            return;
        }
    }
    ctx->pc = 0x13F840u;
    // 0x13f840: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x13f844: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x13f844u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f848: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f84c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f84cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f850: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13f850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13f854: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13f854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f858: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f858u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f85c: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13F85Cu;
    SET_GPR_U32(ctx, 31, 0x13F864u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13F85Cu, 0x13F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F864u;
label_13f864:
    // 0x13f864: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x13f864u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x13f868u;
}
