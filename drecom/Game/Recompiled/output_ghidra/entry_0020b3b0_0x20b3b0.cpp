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

// Function: entry_0020b3b0
// Address: 0x20b3b0 - 0x20b414
void entry_0020b3b0_0x20b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020b3b0_0x20b3b0");
#endif

    ctx->pc = 0x20b3b0u;

    // 0x20b3b0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b3b4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b3b8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x20b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x20b3bc: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20b3c0: 0xac6200f0  sw          $v0, 0xF0($v1)
    ctx->pc = 0x20b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 2));
    // 0x20b3c4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b3c8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b3cc: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x20b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x20b3d0: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20b3d4: 0xac6200f4  sw          $v0, 0xF4($v1)
    ctx->pc = 0x20b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
    // 0x20b3d8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b3dc: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b3e0: 0x8c6200f8  lw          $v0, 0xF8($v1)
    ctx->pc = 0x20b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x20b3e4: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x20b3e8: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x20b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x20b3ec: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b3f0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b3f4: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x20b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x20b3f8: 0x2c410100  sltiu       $at, $v0, 0x100
    ctx->pc = 0x20b3f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x20b3fc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B3FCu;
    {
        const bool branch_taken_0x20b3fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3fc) {
            ctx->pc = 0x20B414u;
            return;
        }
    }
    ctx->pc = 0x20B404u;
    // 0x20b404: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x20b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20b408: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b40c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x20b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x20b410: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x20b410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
    ctx->pc = 0x20b414u;
}
