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

// Function: entry_00333288
// Address: 0x333288 - 0x3332ac
void entry_00333288_0x333288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333288_0x333288");
#endif

    switch (ctx->pc) {
        case 0x3332a0u: goto label_3332a0;
        default: break;
    }

    ctx->pc = 0x333288u;

    // 0x333288: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x333288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x33328c: 0x223f021  addu        $fp, $s1, $v1
    ctx->pc = 0x33328cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x333290: 0x27d0663e  addiu       $s0, $fp, 0x663E
    ctx->pc = 0x333290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 26174));
    // 0x333294: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x333294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x333298: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x333298u;
    SET_GPR_U32(ctx, 31, 0x3332A0u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x333298u, 0x3332A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332A0u;
label_3332a0:
    // 0x3332a0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x3332a0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3332a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3332A4u;
    {
        const bool branch_taken_0x3332a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3332a4) {
            ctx->pc = 0x3332B0u;
            return;
        }
    }
    ctx->pc = 0x3332ACu;
}
