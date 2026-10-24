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

// Function: entry_0016162c
// Address: 0x16162c - 0x161648
void entry_0016162c_0x16162c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016162c_0x16162c");
#endif

    ctx->pc = 0x16162cu;

    // 0x16162c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16162cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161630: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x161630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x161634: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x161638: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x161638u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16163c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x16163cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x161640: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x161640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x161644: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x161644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x161648u;
}
