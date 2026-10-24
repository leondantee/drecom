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

// Function: entry_00264c90
// Address: 0x264c90 - 0x264cc8
void entry_00264c90_0x264c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264c90_0x264c90");
#endif

    ctx->pc = 0x264c90u;

    // 0x264c90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c94: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264c98: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264c9c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264ca0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ca4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ca8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264CA8u;
    {
        const bool branch_taken_0x264ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264ca8) {
            ctx->pc = 0x264CC8u;
            return;
        }
    }
    ctx->pc = 0x264CB0u;
    // 0x264cb0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264cb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264cb8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264cbc: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x264cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x264cc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264CC0u;
    {
        const bool branch_taken_0x264cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264cc0) {
            ctx->pc = 0x264CD0u;
            return;
        }
    }
    ctx->pc = 0x264CC8u;
}
