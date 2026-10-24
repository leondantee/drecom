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

// Function: entry_00214180
// Address: 0x214180 - 0x214190
void entry_00214180_0x214180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214180_0x214180");
#endif

    switch (ctx->pc) {
        case 0x214188u: goto label_214188;
        default: break;
    }

    ctx->pc = 0x214180u;

    // 0x214180: 0xc084f22  jal         func_213C88
    ctx->pc = 0x214180u;
    SET_GPR_U32(ctx, 31, 0x214188u);
    ctx->pc = 0x214184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214180u;
    // 0x214184: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C88u, 0x214180u, 0x214188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214188u;
label_214188:
    // 0x214188: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x214188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x21418c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x214190u;
}
