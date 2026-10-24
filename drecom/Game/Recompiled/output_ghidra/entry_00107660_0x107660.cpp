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

// Function: entry_00107660
// Address: 0x107660 - 0x107684
void entry_00107660_0x107660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107660_0x107660");
#endif

    switch (ctx->pc) {
        case 0x107670u: goto label_107670;
        case 0x107680u: goto label_107680;
        default: break;
    }

    ctx->pc = 0x107660u;

    // 0x107660: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107660u;
    {
        const bool branch_taken_0x107660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107660u;
        // 0x107664: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107660) {
            ctx->pc = 0x107684u;
            return;
        }
    }
    ctx->pc = 0x107668u;
    // 0x107668: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107668u;
    SET_GPR_U32(ctx, 31, 0x107670u);
    ctx->pc = 0x10766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107668u;
    // 0x10766c: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107668u, 0x107670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107670u;
label_107670:
    // 0x107670: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107670u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107674: 0xae023d8c  sw          $v0, 0x3D8C($s0)
    ctx->pc = 0x107674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15756), GPR_U32(ctx, 2));
    // 0x107678: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107678u;
    SET_GPR_U32(ctx, 31, 0x107680u);
    ctx->pc = 0x10767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107678u;
    // 0x10767c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107678u, 0x107680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107680u;
label_107680:
    // 0x107680: 0xae223d90  sw          $v0, 0x3D90($s1)
    ctx->pc = 0x107680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15760), GPR_U32(ctx, 2));
    ctx->pc = 0x107684u;
}
