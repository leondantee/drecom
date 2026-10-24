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

// Function: caseD_3
// Address: 0x354420 - 0x35444c
void caseD_3_0x354420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x354420");
#endif

    ctx->pc = 0x354420u;

    // 0x354420: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x354420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354424: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x354424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x354428: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x354428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35442c: 0xa4a40014  sh          $a0, 0x14($a1)
    ctx->pc = 0x35442cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x354430: 0x146002f7  bnez        $v1, . + 4 + (0x2F7 << 2)
    ctx->pc = 0x354430u;
    {
        const bool branch_taken_0x354430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x354430) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x354438u;
    // 0x354438: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x354438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35443c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x35443cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x354440: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x354440u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x354444: 0x100002f2  b           . + 4 + (0x2F2 << 2)
    ctx->pc = 0x354444u;
    {
        const bool branch_taken_0x354444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354444) {
            ctx->pc = 0x355010u;
            return;
        }
    }
    ctx->pc = 0x35444Cu;
}
