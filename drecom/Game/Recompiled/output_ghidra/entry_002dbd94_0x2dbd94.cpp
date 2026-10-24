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

// Function: entry_002dbd94
// Address: 0x2dbd94 - 0x2dbdcc
void entry_002dbd94_0x2dbd94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dbd94_0x2dbd94");
#endif

    ctx->pc = 0x2dbd94u;

    // 0x2dbd94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2dbd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbd98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbd9c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2dbd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dbda0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2dbda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dbda4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbda8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2dbda8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dbdac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbdb0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2dbdb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbdb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbdb8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2dbdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dbdbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dbdc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2dbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2dbdc4: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2DBDC4u;
    {
        const bool branch_taken_0x2dbdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbdc4) {
            ctx->pc = 0x2DC0BCu;
            return;
        }
    }
    ctx->pc = 0x2DBDCCu;
}
