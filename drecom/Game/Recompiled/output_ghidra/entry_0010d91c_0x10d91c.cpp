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

// Function: entry_0010d91c
// Address: 0x10d91c - 0x10d930
void entry_0010d91c_0x10d91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d91c_0x10d91c");
#endif

    ctx->pc = 0x10d91cu;

    // 0x10d91c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x10d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10d920: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D920u;
    {
        const bool branch_taken_0x10d920 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D920u;
        // 0x10d924: 0x26b03d00  addiu       $s0, $s5, 0x3D00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 15616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d920) {
            ctx->pc = 0x10D930u;
            return;
        }
    }
    ctx->pc = 0x10D928u;
    // 0x10d928: 0x26a23d00  addiu       $v0, $s5, 0x3D00
    ctx->pc = 0x10d928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 15616));
    // 0x10d92c: 0xa040011f  sb          $zero, 0x11F($v0)
    ctx->pc = 0x10d92cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 287), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x10d930u;
}
