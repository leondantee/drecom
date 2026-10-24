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

// Function: entry_001e3f40
// Address: 0x1e3f40 - 0x1e3f78
void entry_001e3f40_0x1e3f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3f40_0x1e3f40");
#endif

    ctx->pc = 0x1e3f40u;

    // 0x1e3f40: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1e3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1e3f44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3f48: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x1e3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
    // 0x1e3f4c: 0x1460fe7a  bnez        $v1, . + 4 + (-0x186 << 2)
    ctx->pc = 0x1E3F4Cu;
    {
        const bool branch_taken_0x1e3f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f4c) {
            ctx->pc = 0x1E3938u;
            return;
        }
    }
    ctx->pc = 0x1E3F54u;
    // 0x1e3f54: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e3f58: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e3f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e3f5c: 0x17c30006  bne         $fp, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3F5Cu;
    {
        const bool branch_taken_0x1e3f5c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3f5c) {
            ctx->pc = 0x1E3F78u;
            return;
        }
    }
    ctx->pc = 0x1E3F64u;
    // 0x1e3f64: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x1e3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e3f68: 0x8c960024  lw          $s6, 0x24($a0)
    ctx->pc = 0x1e3f68u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e3f6c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e3f70: 0x2c31824  and         $v1, $s6, $v1
    ctx->pc = 0x1e3f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x1e3f74: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1e3f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e3f78u;
}
