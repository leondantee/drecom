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

// Function: entry_0010af1c
// Address: 0x10af1c - 0x10af4c
void entry_0010af1c_0x10af1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010af1c_0x10af1c");
#endif

    switch (ctx->pc) {
        case 0x10af24u: goto label_10af24;
        case 0x10af34u: goto label_10af34;
        case 0x10af3cu: goto label_10af3c;
        case 0x10af44u: goto label_10af44;
        default: break;
    }

    ctx->pc = 0x10af1cu;

    // 0x10af1c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10AF1Cu;
    SET_GPR_U32(ctx, 31, 0x10AF24u);
    ctx->pc = 0x10AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF1Cu;
    // 0x10af20: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10AF1Cu, 0x10AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF24u;
label_10af24:
    // 0x10af24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10AF24u;
    {
        const bool branch_taken_0x10af24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AF24u;
        // 0x10af28: 0xae0244a4  sw          $v0, 0x44A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 17572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10af24) {
            ctx->pc = 0x10AF4Cu;
            return;
        }
    }
    ctx->pc = 0x10AF2Cu;
    // 0x10af2c: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10AF2Cu;
    SET_GPR_U32(ctx, 31, 0x10AF34u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10AF2Cu, 0x10AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF34u;
label_10af34:
    // 0x10af34: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x10AF34u;
    SET_GPR_U32(ctx, 31, 0x10AF3Cu);
    ctx->pc = 0x10AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AF34u;
    // 0x10af38: 0x3c045800  lui         $a0, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x10AF34u, 0x10AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF3Cu;
label_10af3c:
    // 0x10af3c: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10AF3Cu;
    SET_GPR_U32(ctx, 31, 0x10AF44u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10AF3Cu, 0x10AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AF44u;
label_10af44:
    // 0x10af44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10AF44u;
    {
        const bool branch_taken_0x10af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10af44) {
            ctx->pc = 0x10AF5Cu;
            return;
        }
    }
    ctx->pc = 0x10AF4Cu;
}
