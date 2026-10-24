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

// Function: entry_00114c5c
// Address: 0x114c5c - 0x114c70
void entry_00114c5c_0x114c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114c5c_0x114c5c");
#endif

    switch (ctx->pc) {
        case 0x114c68u: goto label_114c68;
        default: break;
    }

    ctx->pc = 0x114c5cu;

    // 0x114c5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x114c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114c60: 0xc044d7a  jal         func_1135E8
    ctx->pc = 0x114C60u;
    SET_GPR_U32(ctx, 31, 0x114C68u);
    ctx->pc = 0x114C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C60u;
    // 0x114c64: 0xdfa50008  ld          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1135E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1135E8u, 0x114C60u, 0x114C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C68u;
label_114c68:
    // 0x114c68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x114C68u;
    {
        const bool branch_taken_0x114c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C68u;
        // 0x114c6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c68) {
            ctx->pc = 0x114CB4u;
            return;
        }
    }
    ctx->pc = 0x114C70u;
}
