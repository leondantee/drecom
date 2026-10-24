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

// Function: entry_0020c7d0
// Address: 0x20c7d0 - 0x20c810
void entry_0020c7d0_0x20c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c7d0_0x20c7d0");
#endif

    switch (ctx->pc) {
        case 0x20c7f0u: goto label_20c7f0;
        default: break;
    }

    ctx->pc = 0x20c7d0u;

    // 0x20c7d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c7d4: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x20c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x20c7d8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x20c7d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c7dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c7e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c7e4: 0x2445a0e0  addiu       $a1, $v0, -0x5F20
    ctx->pc = 0x20c7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942944));
    // 0x20c7e8: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x20C7E8u;
    SET_GPR_U32(ctx, 31, 0x20C7F0u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x20C7E8u, 0x20C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7F0u;
label_20c7f0:
    // 0x20c7f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c7f4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C7F4u;
    {
        const bool branch_taken_0x20c7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c7f4) {
            ctx->pc = 0x20C810u;
            return;
        }
    }
    ctx->pc = 0x20C7FCu;
    // 0x20c7fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c800: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C800u;
    {
        const bool branch_taken_0x20c800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c800) {
            ctx->pc = 0x20C810u;
            return;
        }
    }
    ctx->pc = 0x20C808u;
    // 0x20c808: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20C808u;
    {
        const bool branch_taken_0x20c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c808) {
            ctx->pc = 0x20C824u;
            return;
        }
    }
    ctx->pc = 0x20C810u;
}
