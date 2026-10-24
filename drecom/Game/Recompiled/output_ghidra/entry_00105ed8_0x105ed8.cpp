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

// Function: entry_00105ed8
// Address: 0x105ed8 - 0x105f00
void entry_00105ed8_0x105ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105ed8_0x105ed8");
#endif

    switch (ctx->pc) {
        case 0x105ee0u: goto label_105ee0;
        default: break;
    }

    ctx->pc = 0x105ed8u;

    // 0x105ed8: 0xc041c0a  jal         func_107028
    ctx->pc = 0x105ED8u;
    SET_GPR_U32(ctx, 31, 0x105EE0u);
    ctx->pc = 0x105EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105ED8u;
    // 0x105edc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x105ED8u, 0x105EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105EE0u;
label_105ee0:
    // 0x105ee0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x105ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ee4: 0x8e8244b0  lw          $v0, 0x44B0($s4)
    ctx->pc = 0x105ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17584)));
    // 0x105ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105EE8u;
    {
        const bool branch_taken_0x105ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105EE8u;
        // 0x105eec: 0x2664c680  addiu       $a0, $s3, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ee8) {
            ctx->pc = 0x105F08u;
            return;
        }
    }
    ctx->pc = 0x105EF0u;
    // 0x105ef0: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x105EF0u;
    {
        const bool branch_taken_0x105ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x105ef0) {
            ctx->pc = 0x105F08u;
            return;
        }
    }
    ctx->pc = 0x105EF8u;
    // 0x105ef8: 0xc041c58  jal         func_107160
    ctx->pc = 0x105EF8u;
    SET_GPR_U32(ctx, 31, 0x105F00u);
    ctx->pc = 0x105EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105EF8u;
    // 0x105efc: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x105EF8u, 0x105F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105F00u;
}
