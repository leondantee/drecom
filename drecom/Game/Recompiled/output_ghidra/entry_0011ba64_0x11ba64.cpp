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

// Function: entry_0011ba64
// Address: 0x11ba64 - 0x11ba74
void entry_0011ba64_0x11ba64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba64_0x11ba64");
#endif

    ctx->pc = 0x11ba64u;

    // 0x11ba64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BA64u;
    {
        const bool branch_taken_0x11ba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA64u;
        // 0x11ba68: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba64) {
            ctx->pc = 0x11BA74u;
            return;
        }
    }
    ctx->pc = 0x11BA6Cu;
    // 0x11ba6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BA6Cu;
    {
        const bool branch_taken_0x11ba6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA6Cu;
        // 0x11ba70: 0x9690fff8  lhu         $s0, -0x8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba6c) {
            ctx->pc = 0x11BA78u;
            return;
        }
    }
    ctx->pc = 0x11BA74u;
}
