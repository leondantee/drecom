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

// Function: entry_002a9208
// Address: 0x2a9208 - 0x2a923c
void entry_002a9208_0x2a9208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a9208_0x2a9208");
#endif

    ctx->pc = 0x2a9208u;

    // 0x2a9208: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a920c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2a920cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2a9210: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2a9210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a9214: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a9214u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a9218: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a9218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a921c: 0x8442138c  lh          $v0, 0x138C($v0)
    ctx->pc = 0x2a921cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5004)));
    // 0x2a9220: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a9220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a9224: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a9224u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a9228: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2a9228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a922c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2a922cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a9230: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9230u;
    {
        const bool branch_taken_0x2a9230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9230) {
            ctx->pc = 0x2A923Cu;
            return;
        }
    }
    ctx->pc = 0x2A9238u;
    // 0x2a9238: 0x24110258  addiu       $s1, $zero, 0x258
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    ctx->pc = 0x2a923cu;
}
