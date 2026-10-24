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

// Function: entry_0014adfc
// Address: 0x14adfc - 0x14ae10
void entry_0014adfc_0x14adfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014adfc_0x14adfc");
#endif

    switch (ctx->pc) {
        case 0x14ae08u: goto label_14ae08;
        default: break;
    }

    ctx->pc = 0x14adfcu;

    // 0x14adfc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14adfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14ae00: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14AE00u;
    SET_GPR_U32(ctx, 31, 0x14AE08u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14AE00u, 0x14AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AE08u;
label_14ae08:
    // 0x14ae08: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x14AE08u;
    {
        const bool branch_taken_0x14ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ae08) {
            ctx->pc = 0x14AF40u;
            return;
        }
    }
    ctx->pc = 0x14AE10u;
}
