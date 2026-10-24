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

// Function: caseD_75
// Address: 0x11ba4c - 0x11ba64
void caseD_75_0x11ba4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_75_0x11ba4c");
#endif

    ctx->pc = 0x11ba4cu;

    // 0x11ba4c: 0x33c20010  andi        $v0, $fp, 0x10
    ctx->pc = 0x11ba4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)16);
    // 0x11ba50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BA50u;
    {
        const bool branch_taken_0x11ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA50u;
        // 0x11ba54: 0x33c20040  andi        $v0, $fp, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba50) {
            ctx->pc = 0x11BA64u;
            return;
        }
    }
    ctx->pc = 0x11BA58u;
    // 0x11ba58: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11ba58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11ba5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11BA5Cu;
    {
        const bool branch_taken_0x11ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA5Cu;
        // 0x11ba60: 0xde90fff8  ld          $s0, -0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba5c) {
            ctx->pc = 0x11BA78u;
            return;
        }
    }
    ctx->pc = 0x11BA64u;
}
