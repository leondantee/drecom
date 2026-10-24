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

// Function: entry_001624d0
// Address: 0x1624d0 - 0x162508
void entry_001624d0_0x1624d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001624d0_0x1624d0");
#endif

    ctx->pc = 0x1624d0u;

    // 0x1624d0: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x1624d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x1624d4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x1624d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x1624d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1624D8u;
    {
        const bool branch_taken_0x1624d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1624d8) {
            ctx->pc = 0x162508u;
            return;
        }
    }
    ctx->pc = 0x1624E0u;
    // 0x1624e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1624e4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1624e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1624e8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1624e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1624ec: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1624ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1624f0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1624f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624f4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1624f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1624f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1624f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1624fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1624fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162500: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x162500u;
    {
        const bool branch_taken_0x162500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162500) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x162508u;
}
