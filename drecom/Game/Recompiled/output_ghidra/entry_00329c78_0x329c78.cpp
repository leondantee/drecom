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

// Function: entry_00329c78
// Address: 0x329c78 - 0x329c94
void entry_00329c78_0x329c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329c78_0x329c78");
#endif

    ctx->pc = 0x329c78u;

    // 0x329c78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329c7c: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x329c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329c80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x329c84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329c88: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x329C88u;
    {
        const bool branch_taken_0x329c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329c88) {
            ctx->pc = 0x329C94u;
            return;
        }
    }
    ctx->pc = 0x329C90u;
    // 0x329c90: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x329c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x329c94u;
}
