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

// Function: entry_00333770
// Address: 0x333770 - 0x333790
void entry_00333770_0x333770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333770_0x333770");
#endif

    switch (ctx->pc) {
        case 0x333784u: goto label_333784;
        default: break;
    }

    ctx->pc = 0x333770u;

    // 0x333770: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x333770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x333774: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x333774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x333778: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x333778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x33377c: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x33377Cu;
    SET_GPR_U32(ctx, 31, 0x333784u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x33377Cu, 0x333784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333784u;
label_333784:
    // 0x333784: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x333784u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x333788: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333788u;
    {
        const bool branch_taken_0x333788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333788) {
            ctx->pc = 0x333794u;
            return;
        }
    }
    ctx->pc = 0x333790u;
}
