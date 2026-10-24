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

// Function: entry_0020c260
// Address: 0x20c260 - 0x20c2a0
void entry_0020c260_0x20c260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c260_0x20c260");
#endif

    switch (ctx->pc) {
        case 0x20c280u: goto label_20c280;
        default: break;
    }

    ctx->pc = 0x20c260u;

    // 0x20c260: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c264: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x20c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x20c268: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x20c268u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c26c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c270: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c274: 0x2445a100  addiu       $a1, $v0, -0x5F00
    ctx->pc = 0x20c274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942976));
    // 0x20c278: 0xc06cd40  jal         func_1B3500
    ctx->pc = 0x20C278u;
    SET_GPR_U32(ctx, 31, 0x20C280u);
    ctx->pc = 0x1B3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3500u, 0x20C278u, 0x20C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C280u;
label_20c280:
    // 0x20c280: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c284: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C284u;
    {
        const bool branch_taken_0x20c284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c284) {
            ctx->pc = 0x20C2A0u;
            return;
        }
    }
    ctx->pc = 0x20C28Cu;
    // 0x20c28c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c290: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C290u;
    {
        const bool branch_taken_0x20c290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20c290) {
            ctx->pc = 0x20C2A0u;
            return;
        }
    }
    ctx->pc = 0x20C298u;
    // 0x20c298: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20C298u;
    {
        const bool branch_taken_0x20c298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c298) {
            ctx->pc = 0x20C2D4u;
            return;
        }
    }
    ctx->pc = 0x20C2A0u;
}
