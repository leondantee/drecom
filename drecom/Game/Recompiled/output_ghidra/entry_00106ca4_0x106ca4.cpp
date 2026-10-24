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

// Function: entry_00106ca4
// Address: 0x106ca4 - 0x106cbc
void entry_00106ca4_0x106ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ca4_0x106ca4");
#endif

    switch (ctx->pc) {
        case 0x106cb4u: goto label_106cb4;
        default: break;
    }

    ctx->pc = 0x106ca4u;

    // 0x106ca4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x106CA4u;
    {
        const bool branch_taken_0x106ca4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x106CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106CA4u;
        // 0x106ca8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ca4) {
            ctx->pc = 0x106CBCu;
            return;
        }
    }
    ctx->pc = 0x106CACu;
    // 0x106cac: 0xc041728  jal         func_105CA0
    ctx->pc = 0x106CACu;
    SET_GPR_U32(ctx, 31, 0x106CB4u);
    ctx->pc = 0x105CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CA0u, 0x106CACu, 0x106CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106CB4u;
label_106cb4:
    // 0x106cb4: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x106cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x106cb8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x106cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->pc = 0x106cbcu;
}
