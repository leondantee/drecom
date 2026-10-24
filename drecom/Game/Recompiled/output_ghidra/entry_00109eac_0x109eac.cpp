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

// Function: entry_00109eac
// Address: 0x109eac - 0x109ec8
void entry_00109eac_0x109eac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109eac_0x109eac");
#endif

    switch (ctx->pc) {
        case 0x109ec0u: goto label_109ec0;
        default: break;
    }

    ctx->pc = 0x109eacu;

    // 0x109eac: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x109EACu;
    {
        const bool branch_taken_0x109eac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EACu;
        // 0x109eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109eac) {
            ctx->pc = 0x109EF0u;
            return;
        }
    }
    ctx->pc = 0x109EB4u;
    // 0x109eb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109eb8: 0xc042430  jal         func_1090C0
    ctx->pc = 0x109EB8u;
    SET_GPR_U32(ctx, 31, 0x109EC0u);
    ctx->pc = 0x109EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109EB8u;
    // 0x109ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1090C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1090C0u, 0x109EB8u, 0x109EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109EC0u;
label_109ec0:
    // 0x109ec0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x109EC0u;
    {
        const bool branch_taken_0x109ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EC0u;
        // 0x109ec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ec0) {
            ctx->pc = 0x109EF0u;
            return;
        }
    }
    ctx->pc = 0x109EC8u;
}
