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

// Function: entry_002075c0
// Address: 0x2075c0 - 0x2075f8
void entry_002075c0_0x2075c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002075c0_0x2075c0");
#endif

    ctx->pc = 0x2075c0u;

    // 0x2075c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2075c4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075c8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2075c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2075cc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2075ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2075d0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075d4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2075d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2075d8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075dc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2075dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2075e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2075e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075e4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x2075e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2075e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2075e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2075ec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2075ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2075f0: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x2075F0u;
    {
        const bool branch_taken_0x2075f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2075f0) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x2075F8u;
}
