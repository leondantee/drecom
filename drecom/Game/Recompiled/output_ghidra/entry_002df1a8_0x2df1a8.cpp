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

// Function: entry_002df1a8
// Address: 0x2df1a8 - 0x2df1f0
void entry_002df1a8_0x2df1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df1a8_0x2df1a8");
#endif

    ctx->pc = 0x2df1a8u;

    // 0x2df1a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df1ac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df1acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df1b0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DF1B0u;
    {
        const bool branch_taken_0x2df1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1b0) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DF1B8u;
    // 0x2df1b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df1bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df1c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df1c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2df1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2df1c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df1cc: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x2df1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2df1d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2df1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df1d4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2df1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df1d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df1dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df1e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2df1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2df1e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2df1e8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DF1E8u;
    {
        const bool branch_taken_0x2df1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1e8) {
            ctx->pc = 0x2DF1F0u;
            return;
        }
    }
    ctx->pc = 0x2DF1F0u;
}
