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

// Function: entry_00264c50
// Address: 0x264c50 - 0x264c88
void entry_00264c50_0x264c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264c50_0x264c50");
#endif

    ctx->pc = 0x264c50u;

    // 0x264c50: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c54: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264c58: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264c5c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264c64: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264c68: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264C68u;
    {
        const bool branch_taken_0x264c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264c68) {
            ctx->pc = 0x264C88u;
            return;
        }
    }
    ctx->pc = 0x264C70u;
    // 0x264c70: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c74: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264c78: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264c7c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x264c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x264c80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C80u;
    {
        const bool branch_taken_0x264c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c80) {
            ctx->pc = 0x264C90u;
            return;
        }
    }
    ctx->pc = 0x264C88u;
}
