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

// Function: entry_00264bd0
// Address: 0x264bd0 - 0x264c08
void entry_00264bd0_0x264bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264bd0_0x264bd0");
#endif

    ctx->pc = 0x264bd0u;

    // 0x264bd0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264bd4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x264bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x264bd8: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x264bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
    // 0x264bdc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264be0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264be4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264be8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264BE8u;
    {
        const bool branch_taken_0x264be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x264be8) {
            ctx->pc = 0x264C08u;
            return;
        }
    }
    ctx->pc = 0x264BF0u;
    // 0x264bf0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264bf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264bf8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x264bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264bfc: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x264bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x264c00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C00u;
    {
        const bool branch_taken_0x264c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c00) {
            ctx->pc = 0x264C10u;
            return;
        }
    }
    ctx->pc = 0x264C08u;
}
