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

// Function: entry_00333690
// Address: 0x333690 - 0x3336b0
void entry_00333690_0x333690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333690_0x333690");
#endif

    switch (ctx->pc) {
        case 0x3336a4u: goto label_3336a4;
        default: break;
    }

    ctx->pc = 0x333690u;

    // 0x333690: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x333690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x333694: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x333694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x333698: 0x2444663e  addiu       $a0, $v0, 0x663E
    ctx->pc = 0x333698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26174));
    // 0x33369c: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x33369Cu;
    SET_GPR_U32(ctx, 31, 0x3336A4u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x33369Cu, 0x3336A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3336A4u;
label_3336a4:
    // 0x3336a4: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x3336a4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3336a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3336A8u;
    {
        const bool branch_taken_0x3336a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3336a8) {
            ctx->pc = 0x3336B4u;
            return;
        }
    }
    ctx->pc = 0x3336B0u;
}
