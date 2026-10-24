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

// Function: entry_00117e24
// Address: 0x117e24 - 0x117e34
void entry_00117e24_0x117e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117e24_0x117e24");
#endif

    ctx->pc = 0x117e24u;

    // 0x117e24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x117e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e28: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x117e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x117e2c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x117E2Cu;
    {
        const bool branch_taken_0x117e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E2Cu;
        // 0x117e30: 0x24120400  addiu       $s2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e2c) {
            ctx->pc = 0x117E7Cu;
            return;
        }
    }
    ctx->pc = 0x117E34u;
}
