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

// Function: entry_0011bfc8
// Address: 0x11bfc8 - 0x11bff0
void entry_0011bfc8_0x11bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bfc8_0x11bfc8");
#endif

    ctx->pc = 0x11bfc8u;

    // 0x11bfc8: 0x33c20100  andi        $v0, $fp, 0x100
    ctx->pc = 0x11bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)256);
    // 0x11bfcc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BFCCu;
    {
        const bool branch_taken_0x11bfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bfcc) {
            ctx->pc = 0x11BFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BFCCu;
            // 0x11bfd0: 0x2ae20066  slti        $v0, $s7, 0x66 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)102) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BFF0u;
            return;
        }
    }
    ctx->pc = 0x11BFD4u;
    // 0x11bfd4: 0xae350004  sw          $s5, 0x4($s1)
    ctx->pc = 0x11bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 21));
    // 0x11bfd8: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x11bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x11bfdc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x11bfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11bfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11bfe4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11bfe8: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x11BFE8u;
    {
        const bool branch_taken_0x11bfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFE8u;
        // 0x11bfec: 0x551021  addu        $v0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfe8) {
            ctx->pc = 0x11C6F8u;
            return;
        }
    }
    ctx->pc = 0x11BFF0u;
}
