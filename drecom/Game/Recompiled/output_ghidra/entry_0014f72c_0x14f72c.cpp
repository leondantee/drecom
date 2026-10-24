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

// Function: entry_0014f72c
// Address: 0x14f72c - 0x14f740
void entry_0014f72c_0x14f72c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f72c_0x14f72c");
#endif

    switch (ctx->pc) {
        case 0x14f738u: goto label_14f738;
        default: break;
    }

    ctx->pc = 0x14f72cu;

    // 0x14f72c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x14f72cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14f730: 0xc055484  jal         func_155210
    ctx->pc = 0x14F730u;
    SET_GPR_U32(ctx, 31, 0x14F738u);
    ctx->pc = 0x155210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155210u, 0x14F730u, 0x14F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F738u;
label_14f738:
    // 0x14f738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F738u;
    {
        const bool branch_taken_0x14f738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f738) {
            ctx->pc = 0x14F74Cu;
            return;
        }
    }
    ctx->pc = 0x14F740u;
}
