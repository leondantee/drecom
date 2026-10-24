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

// Function: entry_0032a3b0
// Address: 0x32a3b0 - 0x32a3d0
void entry_0032a3b0_0x32a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a3b0_0x32a3b0");
#endif

    ctx->pc = 0x32a3b0u;

    // 0x32a3b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a3b4: 0x8c261a3c  lw          $a2, 0x1A3C($at)
    ctx->pc = 0x32a3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x32a3b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x32a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x32a3bc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x32a3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x32a3c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A3C0u;
    {
        const bool branch_taken_0x32a3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a3c0) {
            ctx->pc = 0x32A3D0u;
            return;
        }
    }
    ctx->pc = 0x32A3C8u;
    // 0x32a3c8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x32a3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a3cc: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x32a3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x32a3d0u;
}
