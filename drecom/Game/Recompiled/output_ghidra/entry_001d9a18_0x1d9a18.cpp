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

// Function: entry_001d9a18
// Address: 0x1d9a18 - 0x1d9a3c
void entry_001d9a18_0x1d9a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d9a18_0x1d9a18");
#endif

    ctx->pc = 0x1d9a18u;

    // 0x1d9a18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d9a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d9a1c: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x1d9a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1d9a20: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1d9a24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d9a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d9a28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9A28u;
    {
        const bool branch_taken_0x1d9a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9a28) {
            ctx->pc = 0x1D9A3Cu;
            return;
        }
    }
    ctx->pc = 0x1D9A30u;
    // 0x1d9a30: 0x92030d84  lbu         $v1, 0xD84($s0)
    ctx->pc = 0x1d9a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3460)));
    // 0x1d9a34: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1d9a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1d9a38: 0xa2030d84  sb          $v1, 0xD84($s0)
    ctx->pc = 0x1d9a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3460), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1d9a3cu;
}
