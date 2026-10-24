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

// Function: entry_002df98c
// Address: 0x2df98c - 0x2df9c8
void entry_002df98c_0x2df98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df98c_0x2df98c");
#endif

    ctx->pc = 0x2df98cu;

    // 0x2df98c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df990: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df994: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DF994u;
    {
        const bool branch_taken_0x2df994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df994) {
            ctx->pc = 0x2DF9C8u;
            return;
        }
    }
    ctx->pc = 0x2DF99Cu;
    // 0x2df99c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df9a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df9a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9ac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2df9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df9b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df9b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df9c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2df9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2df9c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2df9c8u;
}
