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

// Function: entry_00126cac
// Address: 0x126cac - 0x126ce4
void entry_00126cac_0x126cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126cac_0x126cac");
#endif

    ctx->pc = 0x126cacu;

    // 0x126cac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x126cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126cb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126cb4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x126cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126cb8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x126cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x126cbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126cc0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x126cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126cc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126cc8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x126cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126ccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126cd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126cd4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126cd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x126cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x126cdc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x126CDCu;
    {
        const bool branch_taken_0x126cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126cdc) {
            ctx->pc = 0x126D9Cu;
            return;
        }
    }
    ctx->pc = 0x126CE4u;
}
