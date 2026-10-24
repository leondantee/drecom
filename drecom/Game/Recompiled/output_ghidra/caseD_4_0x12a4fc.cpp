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
// Address: 0x12a4fc - 0x12a534
void caseD_4_0x12a4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x12a4fc");
#endif

    ctx->pc = 0x12a4fcu;

    // 0x12a4fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a500: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a504: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a508: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x12a508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12a50c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a510: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a518: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a51c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a520: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a524: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a528: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a528u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a52c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12A52Cu;
    {
        const bool branch_taken_0x12a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a52c) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A534u;
}
