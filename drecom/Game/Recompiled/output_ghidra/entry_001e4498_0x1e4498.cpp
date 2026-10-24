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

// Function: entry_001e4498
// Address: 0x1e4498 - 0x1e44cc
void entry_001e4498_0x1e4498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4498_0x1e4498");
#endif

    ctx->pc = 0x1e4498u;

    // 0x1e4498: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e4498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e449c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1e449cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x1e44a0: 0x16e0ff00  bnez        $s7, . + 4 + (-0x100 << 2)
    ctx->pc = 0x1E44A0u;
    {
        const bool branch_taken_0x1e44a0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e44a0) {
            ctx->pc = 0x1E40A4u;
            return;
        }
    }
    ctx->pc = 0x1E44A8u;
    // 0x1e44a8: 0x8fa301e8  lw          $v1, 0x1E8($sp)
    ctx->pc = 0x1e44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e44ac: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e44acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e44b0: 0x16c30006  bne         $s6, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E44B0u;
    {
        const bool branch_taken_0x1e44b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e44b0) {
            ctx->pc = 0x1E44CCu;
            return;
        }
    }
    ctx->pc = 0x1E44B8u;
    // 0x1e44b8: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x1e44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e44bc: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e44bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e44c0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e44c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e44c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e44c8: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e44c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e44ccu;
}
