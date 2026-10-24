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

// Function: entry_0010c820
// Address: 0x10c820 - 0x10c82c
void entry_0010c820_0x10c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c820_0x10c820");
#endif

    ctx->pc = 0x10c820u;

    // 0x10c820: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10c820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10C824u;
    {
        const bool branch_taken_0x10c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C824u;
        // 0x10c828: 0x90620041  lbu         $v0, 0x41($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c824) {
            ctx->pc = 0x10C850u;
            return;
        }
    }
    ctx->pc = 0x10C82Cu;
}
