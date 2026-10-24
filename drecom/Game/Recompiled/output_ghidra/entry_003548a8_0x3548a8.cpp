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

// Function: entry_003548a8
// Address: 0x3548a8 - 0x3548d4
void entry_003548a8_0x3548a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003548a8_0x3548a8");
#endif

    ctx->pc = 0x3548a8u;

    // 0x3548a8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3548a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3548ac: 0x84850014  lh          $a1, 0x14($a0)
    ctx->pc = 0x3548acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3548b0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3548b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3548b4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x3548b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x3548b8: 0x14a001d5  bnez        $a1, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x3548B8u;
    {
        const bool branch_taken_0x3548b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3548b8) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x3548C0u;
    // 0x3548c0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3548c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3548c4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3548c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3548c8: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x3548c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3548cc: 0x100001d0  b           . + 4 + (0x1D0 << 2)
    ctx->pc = 0x3548CCu;
    {
        const bool branch_taken_0x3548cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3548cc) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x3548D4u;
}
