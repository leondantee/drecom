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

// Function: entry_00215ce4
// Address: 0x215ce4 - 0x215d0c
void entry_00215ce4_0x215ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215ce4_0x215ce4");
#endif

    switch (ctx->pc) {
        case 0x215cf4u: goto label_215cf4;
        case 0x215d04u: goto label_215d04;
        default: break;
    }

    ctx->pc = 0x215ce4u;

    // 0x215ce4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x215ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x215ce8: 0xafb30004  sw          $s3, 0x4($sp)
    ctx->pc = 0x215ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
    // 0x215cec: 0xc084a88  jal         func_212A20
    ctx->pc = 0x215CECu;
    SET_GPR_U32(ctx, 31, 0x215CF4u);
    ctx->pc = 0x215CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CECu;
    // 0x215cf0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x215CF4u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215CF4u) { return; }
    ctx->pc = 0x215CF4u;
label_215cf4:
    // 0x215cf4: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215CF4u;
    {
        const bool branch_taken_0x215cf4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x215CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CF4u;
        // 0x215cf8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215cf4) {
            ctx->pc = 0x215D0Cu;
            return;
        }
    }
    ctx->pc = 0x215CFCu;
    // 0x215cfc: 0xc085576  jal         func_2155D8
    ctx->pc = 0x215CFCu;
    SET_GPR_U32(ctx, 31, 0x215D04u);
    ctx->pc = 0x215D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215CFCu;
    // 0x215d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x215CFCu, 0x215D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D04u;
label_215d04:
    // 0x215d04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x215D04u;
    {
        const bool branch_taken_0x215d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215D04u;
        // 0x215d08: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d04) {
            ctx->pc = 0x215D64u;
            return;
        }
    }
    ctx->pc = 0x215D0Cu;
}
