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

// Function: entry_00264b84
// Address: 0x264b84 - 0x264bc8
void entry_00264b84_0x264b84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264b84_0x264b84");
#endif

    ctx->pc = 0x264b84u;

    // 0x264b84: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264b88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264b8c: 0x2c3a821  addu        $s5, $s6, $v1
    ctx->pc = 0x264b8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264b90: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264b94: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264b98: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264b9c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264ba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264ba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264ba8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264BA8u;
    {
        const bool branch_taken_0x264ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264ba8) {
            ctx->pc = 0x264BC8u;
            return;
        }
    }
    ctx->pc = 0x264BB0u;
    // 0x264bb0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264bb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264bb8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264bbc: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x264bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x264bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264BC0u;
    {
        const bool branch_taken_0x264bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264bc0) {
            ctx->pc = 0x264BD0u;
            return;
        }
    }
    ctx->pc = 0x264BC8u;
}
