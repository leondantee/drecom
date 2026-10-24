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

// Function: entry_00216bf8
// Address: 0x216bf8 - 0x216c14
void entry_00216bf8_0x216bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216bf8_0x216bf8");
#endif

    ctx->pc = 0x216bf8u;

    // 0x216bf8: 0x3203000f  andi        $v1, $s0, 0xF
    ctx->pc = 0x216bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x216bfc: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x216bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x216c00: 0xaec2bc40  sw          $v0, -0x43C0($s6)
    ctx->pc = 0x216c00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294949952), GPR_U32(ctx, 2));
    // 0x216c04: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216C04u;
    {
        const bool branch_taken_0x216c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C04u;
        // 0x216c08: 0xaeb00004  sw          $s0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c04) {
            ctx->pc = 0x216C14u;
            return;
        }
    }
    ctx->pc = 0x216C0Cu;
    // 0x216c0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x216C0Cu;
    {
        const bool branch_taken_0x216c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C0Cu;
        // 0x216c10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c0c) {
            ctx->pc = 0x216C24u;
            return;
        }
    }
    ctx->pc = 0x216C14u;
}
