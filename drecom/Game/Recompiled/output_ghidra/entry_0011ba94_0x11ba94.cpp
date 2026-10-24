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

// Function: entry_0011ba94
// Address: 0x11ba94 - 0x11bab0
void entry_0011ba94_0x11ba94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba94_0x11ba94");
#endif

    ctx->pc = 0x11ba94u;

    // 0x11ba94: 0xafa20214  sw          $v0, 0x214($sp)
    ctx->pc = 0x11ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 2));
    // 0x11ba98: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x11ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x11ba9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA9Cu;
    {
        const bool branch_taken_0x11ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA9Cu;
        // 0x11baa0: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba9c) {
            ctx->pc = 0x11BAB0u;
            return;
        }
    }
    ctx->pc = 0x11BAA4u;
    // 0x11baa4: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11baa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11baa8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11BAA8u;
    {
        const bool branch_taken_0x11baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAA8u;
        // 0x11baac: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baa8) {
            ctx->pc = 0x11BAC4u;
            return;
        }
    }
    ctx->pc = 0x11BAB0u;
}
