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

// Function: entry_001a1388
// Address: 0x1a1388 - 0x1a13a0
void entry_001a1388_0x1a1388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1388_0x1a1388");
#endif

    ctx->pc = 0x1a1388u;

    // 0x1a1388: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1a1388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a138c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a138cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1390: 0x2e210020  sltiu       $at, $s1, 0x20
    ctx->pc = 0x1a1390u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a1394: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A1394u;
    {
        const bool branch_taken_0x1a1394 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1394) {
            ctx->pc = 0x1A1428u;
            return;
        }
    }
    ctx->pc = 0x1A139Cu;
    // 0x1a139c: 0x0  nop
    ctx->pc = 0x1a139cu;
    // NOP
    ctx->pc = 0x1a13a0u;
}
