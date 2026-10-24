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

// Function: entry_00264c10
// Address: 0x264c10 - 0x264c48
void entry_00264c10_0x264c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264c10_0x264c10");
#endif

    ctx->pc = 0x264c10u;

    // 0x264c10: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c14: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264c18: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264c1c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264c24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264c28: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264C28u;
    {
        const bool branch_taken_0x264c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264c28) {
            ctx->pc = 0x264C48u;
            return;
        }
    }
    ctx->pc = 0x264C30u;
    // 0x264c30: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264c34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264c38: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264c3c: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x264c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x264c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C40u;
    {
        const bool branch_taken_0x264c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c40) {
            ctx->pc = 0x264C50u;
            return;
        }
    }
    ctx->pc = 0x264C48u;
}
