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

// Function: entry_0012577c
// Address: 0x12577c - 0x1257c4
void entry_0012577c_0x12577c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012577c_0x12577c");
#endif

    ctx->pc = 0x12577cu;

    // 0x12577c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x12577cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x125780: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x125780u;
    {
        const bool branch_taken_0x125780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125780) {
            ctx->pc = 0x1257C4u;
            return;
        }
    }
    ctx->pc = 0x125788u;
    // 0x125788: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12578c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125790: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125790u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125794: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x125794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x125798: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12579c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12579cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1257a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1257a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1257a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1257a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1257a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1257a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1257ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1257acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1257b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1257b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1257b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1257b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1257b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1257b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1257bc: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x1257BCu;
    {
        const bool branch_taken_0x1257bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1257bc) {
            ctx->pc = 0x125D9Cu;
            return;
        }
    }
    ctx->pc = 0x1257C4u;
}
