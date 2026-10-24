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

// Function: entry_0011ec78
// Address: 0x11ec78 - 0x11ec8c
void entry_0011ec78_0x11ec78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ec78_0x11ec78");
#endif

    ctx->pc = 0x11ec78u;

    // 0x11ec78: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x11ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x11ec7c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11ec7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11ec80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x11ec80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11ec84: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x11EC84u;
    {
        const bool branch_taken_0x11ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC84u;
        // 0x11ec88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec84) {
            ctx->pc = 0x11EE34u;
            return;
        }
    }
    ctx->pc = 0x11EC8Cu;
}
