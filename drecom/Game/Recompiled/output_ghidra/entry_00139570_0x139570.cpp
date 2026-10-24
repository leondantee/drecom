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

// Function: entry_00139570
// Address: 0x139570 - 0x139584
void entry_00139570_0x139570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139570_0x139570");
#endif

    switch (ctx->pc) {
        case 0x13957cu: goto label_13957c;
        default: break;
    }

    ctx->pc = 0x139570u;

    // 0x139570: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x139570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139574: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x139574u;
    SET_GPR_U32(ctx, 31, 0x13957Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x139574u, 0x13957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13957Cu;
label_13957c:
    // 0x13957c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13957Cu;
    {
        const bool branch_taken_0x13957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13957c) {
            ctx->pc = 0x1395F8u;
            return;
        }
    }
    ctx->pc = 0x139584u;
}
