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

// Function: entry_001240f4
// Address: 0x1240f4 - 0x12410c
void entry_001240f4_0x1240f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001240f4_0x1240f4");
#endif

    switch (ctx->pc) {
        case 0x124104u: goto label_124104;
        default: break;
    }

    ctx->pc = 0x1240f4u;

    // 0x1240f4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1240f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1240f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1240f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1240fc: 0xc048148  jal         func_120520
    ctx->pc = 0x1240FCu;
    SET_GPR_U32(ctx, 31, 0x124104u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x1240FCu, 0x124104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124104u;
label_124104:
    // 0x124104: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x124104u;
    {
        const bool branch_taken_0x124104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124104) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x12410Cu;
}
