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

// Function: entry_0011eef8
// Address: 0x11eef8 - 0x11ef10
void entry_0011eef8_0x11eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011eef8_0x11eef8");
#endif

    ctx->pc = 0x11eef8u;

    // 0x11eef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EEF8u;
    {
        const bool branch_taken_0x11eef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEF8u;
        // 0x11eefc: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eef8) {
            ctx->pc = 0x11EF10u;
            return;
        }
    }
    ctx->pc = 0x11EF00u;
    // 0x11ef00: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x11ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x11ef04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef08: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11EF08u;
    {
        const bool branch_taken_0x11ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF08u;
        // 0x11ef0c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef08) {
            ctx->pc = 0x11EFB8u;
            return;
        }
    }
    ctx->pc = 0x11EF10u;
}
