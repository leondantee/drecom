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

// Function: entry_001cda40
// Address: 0x1cda40 - 0x1cda54
void entry_001cda40_0x1cda40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cda40_0x1cda40");
#endif

    switch (ctx->pc) {
        case 0x1cda48u: goto label_1cda48;
        default: break;
    }

    ctx->pc = 0x1cda40u;

    // 0x1cda40: 0xc058478  jal         func_1611E0
    ctx->pc = 0x1CDA40u;
    SET_GPR_U32(ctx, 31, 0x1CDA48u);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x1CDA40u, 0x1CDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA48u;
label_1cda48:
    // 0x1cda48: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cda48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cda4c: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1CDA4Cu;
    {
        const bool branch_taken_0x1cda4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cda4c) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CDA54u;
}
