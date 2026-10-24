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

// Function: entry_001d99f4
// Address: 0x1d99f4 - 0x1d9a18
void entry_001d99f4_0x1d99f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d99f4_0x1d99f4");
#endif

    ctx->pc = 0x1d99f4u;

    // 0x1d99f4: 0xa2000d84  sb          $zero, 0xD84($s0)
    ctx->pc = 0x1d99f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3460), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d99f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d99f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d99fc: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x1d99fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9a00: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1d9a04: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9a08: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9A08u;
    {
        const bool branch_taken_0x1d9a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a08) {
            ctx->pc = 0x1D9A18u;
            return;
        }
    }
    ctx->pc = 0x1D9A10u;
    // 0x1d9a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9a14: 0xa2030d84  sb          $v1, 0xD84($s0)
    ctx->pc = 0x1d9a14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3460), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d9a18u;
}
