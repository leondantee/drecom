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

// Function: caseD_4
// Address: 0x126da4 - 0x126ddc
void caseD_4_0x126da4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x126da4");
#endif

    ctx->pc = 0x126da4u;

    // 0x126da4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126da8: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x126da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126dac: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x126dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x126db0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x126db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x126db4: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x126db4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126db8: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x126db8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x126dbc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126dc0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x126dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x126dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x126dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126dc8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x126dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x126dcc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x126dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x126dd0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x126dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x126dd4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x126DD4u;
    {
        const bool branch_taken_0x126dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126dd4) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126DDCu;
}
