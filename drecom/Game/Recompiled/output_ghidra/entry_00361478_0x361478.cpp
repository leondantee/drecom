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

// Function: entry_00361478
// Address: 0x361478 - 0x361498
void entry_00361478_0x361478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00361478_0x361478");
#endif

    switch (ctx->pc) {
        case 0x361490u: goto label_361490;
        default: break;
    }

    ctx->pc = 0x361478u;

    // 0x361478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x361478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36147c: 0x904211ec  lbu         $v0, 0x11EC($v0)
    ctx->pc = 0x36147cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4588)));
    // 0x361480: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x361480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x361484: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x361484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x361488: 0xc096348  jal         func_258D20
    ctx->pc = 0x361488u;
    SET_GPR_U32(ctx, 31, 0x361490u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x361488u, 0x361490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361490u;
label_361490:
    // 0x361490: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x361490u;
    {
        const bool branch_taken_0x361490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361490) {
            ctx->pc = 0x361534u;
            return;
        }
    }
    ctx->pc = 0x361498u;
}
