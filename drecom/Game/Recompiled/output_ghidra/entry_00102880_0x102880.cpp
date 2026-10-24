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

// Function: entry_00102880
// Address: 0x102880 - 0x102890
void entry_00102880_0x102880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102880_0x102880");
#endif

    ctx->pc = 0x102880u;

    // 0x102880: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x102880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x102884: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x102884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x102888: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x102888u;
    {
        const bool branch_taken_0x102888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102888u;
        // 0x10288c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102888) {
            ctx->pc = 0x102838u;
            return;
        }
    }
    ctx->pc = 0x102890u;
}
