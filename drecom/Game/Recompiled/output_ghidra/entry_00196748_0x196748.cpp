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

// Function: entry_00196748
// Address: 0x196748 - 0x196760
void entry_00196748_0x196748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196748_0x196748");
#endif

    ctx->pc = 0x196748u;

    // 0x196748: 0x96630034  lhu         $v1, 0x34($s3)
    ctx->pc = 0x196748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x19674c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19674cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x196750: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x196750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196754: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x196754u;
    {
        const bool branch_taken_0x196754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196754) {
            ctx->pc = 0x1966DCu;
            return;
        }
    }
    ctx->pc = 0x19675Cu;
    // 0x19675c: 0x0  nop
    ctx->pc = 0x19675cu;
    // NOP
    ctx->pc = 0x196760u;
}
