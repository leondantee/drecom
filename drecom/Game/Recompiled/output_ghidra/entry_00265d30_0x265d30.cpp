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

// Function: entry_00265d30
// Address: 0x265d30 - 0x265d5c
void entry_00265d30_0x265d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265d30_0x265d30");
#endif

    ctx->pc = 0x265d30u;

    // 0x265d30: 0xafbe00c8  sw          $fp, 0xC8($sp)
    ctx->pc = 0x265d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 30));
    // 0x265d34: 0xae1e009c  sw          $fp, 0x9C($s0)
    ctx->pc = 0x265d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 30));
    // 0x265d38: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x265d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x265d3c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x265d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x265d40: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x265d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x265d44: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x265d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x265d48: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x265d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x265d4c: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x265d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x265d50: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265d54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x265D54u;
    {
        const bool branch_taken_0x265d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265d54) {
            ctx->pc = 0x265D98u;
            return;
        }
    }
    ctx->pc = 0x265D5Cu;
}
