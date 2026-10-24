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

// Function: entry_001cc6ec
// Address: 0x1cc6ec - 0x1cc70c
void entry_001cc6ec_0x1cc6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc6ec_0x1cc6ec");
#endif

    ctx->pc = 0x1cc6ecu;

    // 0x1cc6ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1cc6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc6f0: 0x90a609e7  lbu         $a2, 0x9E7($a1)
    ctx->pc = 0x1cc6f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x1cc6f4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC6F4u;
    {
        const bool branch_taken_0x1cc6f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6f4) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC6FCu;
    // 0x1cc6fc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1cc6fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc700: 0xace01b60  sw          $zero, 0x1B60($a3)
    ctx->pc = 0x1cc700u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7008), GPR_U32(ctx, 0));
    // 0x1cc704: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC704u;
    {
        const bool branch_taken_0x1cc704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc704) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC70Cu;
}
