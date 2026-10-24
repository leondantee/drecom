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

// Function: entry_00292d94
// Address: 0x292d94 - 0x292dcc
void entry_00292d94_0x292d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292d94_0x292d94");
#endif

    ctx->pc = 0x292d94u;

    // 0x292d94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292d98: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x292d98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x292d9c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x292d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x292da0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x292da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x292da4: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x292DA4u;
    {
        const bool branch_taken_0x292da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x292da4) {
            ctx->pc = 0x292E40u;
            return;
        }
    }
    ctx->pc = 0x292DACu;
    // 0x292dac: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292db0: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292DB0u;
    {
        const bool branch_taken_0x292db0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x292db0) {
            ctx->pc = 0x292DCCu;
            return;
        }
    }
    ctx->pc = 0x292DB8u;
    // 0x292db8: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x292dbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x292dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x292dc0: 0xae025dc4  sw          $v0, 0x5DC4($s0)
    ctx->pc = 0x292dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 2));
    // 0x292dc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x292DC4u;
    {
        const bool branch_taken_0x292dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292dc4) {
            ctx->pc = 0x292DD4u;
            return;
        }
    }
    ctx->pc = 0x292DCCu;
}
