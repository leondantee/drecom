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

// Function: entry_001613e8
// Address: 0x1613e8 - 0x16140c
void entry_001613e8_0x1613e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001613e8_0x1613e8");
#endif

    ctx->pc = 0x1613e8u;

    // 0x1613e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1613ec: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1613ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1613f0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1613f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1613f4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1613f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1613f8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1613f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1613fc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1613fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161400: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x161404: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x161404u;
    {
        const bool branch_taken_0x161404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161404) {
            ctx->pc = 0x16148Cu;
            return;
        }
    }
    ctx->pc = 0x16140Cu;
}
