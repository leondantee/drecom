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

// Function: entry_001045f0
// Address: 0x1045f0 - 0x104614
void entry_001045f0_0x1045f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001045f0_0x1045f0");
#endif

    switch (ctx->pc) {
        case 0x10460cu: goto label_10460c;
        default: break;
    }

    ctx->pc = 0x1045f0u;

    // 0x1045f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1045f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045f4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x1045f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x1045f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1045f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045fc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1045fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x104600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x104600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104604: 0xc0411be  jal         func_1046F8
    ctx->pc = 0x104604u;
    SET_GPR_U32(ctx, 31, 0x10460Cu);
    ctx->pc = 0x104608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104604u;
    // 0x104608: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1046F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1046F8u, 0x104604u, 0x10460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10460Cu;
label_10460c:
    // 0x10460c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10460Cu;
    {
        const bool branch_taken_0x10460c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10460Cu;
        // 0x104610: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10460c) {
            ctx->pc = 0x1046CCu;
            return;
        }
    }
    ctx->pc = 0x104614u;
}
