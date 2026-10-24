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

// Function: entry_0036312c
// Address: 0x36312c - 0x363144
void entry_0036312c_0x36312c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036312c_0x36312c");
#endif

    switch (ctx->pc) {
        case 0x36313cu: goto label_36313c;
        default: break;
    }

    ctx->pc = 0x36312cu;

    // 0x36312c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x36312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x363130: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x363130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x363134: 0xc0da134  jal         func_3684D0
    ctx->pc = 0x363134u;
    SET_GPR_U32(ctx, 31, 0x36313Cu);
    ctx->pc = 0x3684D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3684D0u, 0x363134u, 0x36313Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36313Cu;
label_36313c:
    // 0x36313c: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x36313Cu;
    {
        const bool branch_taken_0x36313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36313c) {
            ctx->pc = 0x363518u;
            return;
        }
    }
    ctx->pc = 0x363144u;
}
