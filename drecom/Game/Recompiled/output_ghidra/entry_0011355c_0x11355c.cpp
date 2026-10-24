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

// Function: entry_0011355c
// Address: 0x11355c - 0x113578
void entry_0011355c_0x11355c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011355c_0x11355c");
#endif

    ctx->pc = 0x11355cu;

    // 0x11355c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11355Cu;
    {
        const bool branch_taken_0x11355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11355Cu;
        // 0x113560: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11355c) {
            ctx->pc = 0x113578u;
            return;
        }
    }
    ctx->pc = 0x113564u;
    // 0x113564: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x113564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x113568: 0xfc760010  sd          $s6, 0x10($v1)
    ctx->pc = 0x113568u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 22));
    // 0x11356c: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x11356cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x113570: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x113570u;
    {
        const bool branch_taken_0x113570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113570u;
        // 0x113574: 0xfc720008  sd          $s2, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113570) {
            ctx->pc = 0x1135B4u;
            return;
        }
    }
    ctx->pc = 0x113578u;
}
