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

// Function: entry_00109368
// Address: 0x109368 - 0x109374
void entry_00109368_0x109368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109368_0x109368");
#endif

    ctx->pc = 0x109368u;

    // 0x109368: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109368u;
    {
        const bool branch_taken_0x109368 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x109368) {
            ctx->pc = 0x10936Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109368u;
            // 0x10936c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10938Cu;
            return;
        }
    }
    ctx->pc = 0x109370u;
    // 0x109370: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x109370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    ctx->pc = 0x109374u;
}
