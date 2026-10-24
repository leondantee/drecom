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

// Function: entry_00162568
// Address: 0x162568 - 0x1625a4
void entry_00162568_0x162568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162568_0x162568");
#endif

    ctx->pc = 0x162568u;

    // 0x162568: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x162568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16256c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x16256cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x162570: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x162570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x162574: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x162574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x162578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16257c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x16257cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x162580: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x162580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x162584: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x162584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x162588: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x162588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16258c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x16258cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x162590: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x162590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x162594: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x162594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x162598: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x162598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16259c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16259Cu;
    {
        const bool branch_taken_0x16259c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16259c) {
            ctx->pc = 0x1625A8u;
            return;
        }
    }
    ctx->pc = 0x1625A4u;
}
