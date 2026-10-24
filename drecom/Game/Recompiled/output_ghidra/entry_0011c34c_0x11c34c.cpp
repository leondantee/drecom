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

// Function: entry_0011c34c
// Address: 0x11c34c - 0x11c368
void entry_0011c34c_0x11c34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c34c_0x11c34c");
#endif

    ctx->pc = 0x11c34cu;

    // 0x11c34c: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x11c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c350: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x11c350u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x11c354: 0x1a00002d  blez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x11C354u;
    {
        const bool branch_taken_0x11c354 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C354u;
        // 0x11c358: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c354) {
            ctx->pc = 0x11C40Cu;
            return;
        }
    }
    ctx->pc = 0x11C35Cu;
    // 0x11c35c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11C35Cu;
    {
        const bool branch_taken_0x11c35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C35Cu;
        // 0x11c360: 0x3c16003b  lui         $s6, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c35c) {
            ctx->pc = 0x11C3C8u;
            return;
        }
    }
    ctx->pc = 0x11C364u;
    // 0x11c364: 0x0  nop
    ctx->pc = 0x11c364u;
    // NOP
    ctx->pc = 0x11c368u;
}
