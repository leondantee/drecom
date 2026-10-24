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

// Function: entry_00332f00
// Address: 0x332f00 - 0x332f20
void entry_00332f00_0x332f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332f00_0x332f00");
#endif

    switch (ctx->pc) {
        case 0x332f14u: goto label_332f14;
        default: break;
    }

    ctx->pc = 0x332f00u;

    // 0x332f00: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x332f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x332f04: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x332f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x332f08: 0x2464663e  addiu       $a0, $v1, 0x663E
    ctx->pc = 0x332f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 26174));
    // 0x332f0c: 0xc0ce1cc  jal         func_338730
    ctx->pc = 0x332F0Cu;
    SET_GPR_U32(ctx, 31, 0x332F14u);
    ctx->pc = 0x338730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338730u, 0x332F0Cu, 0x332F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332F14u;
label_332f14:
    // 0x332f14: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x332f14u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x332f18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x332F18u;
    {
        const bool branch_taken_0x332f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332f18) {
            ctx->pc = 0x332F24u;
            return;
        }
    }
    ctx->pc = 0x332F20u;
}
