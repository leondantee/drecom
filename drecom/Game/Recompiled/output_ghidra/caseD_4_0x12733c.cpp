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
// Address: 0x12733c - 0x127374
void caseD_4_0x12733c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x12733c");
#endif

    ctx->pc = 0x12733cu;

    // 0x12733c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127340: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127344: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127348: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x127348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12734c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12734cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127350: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127354: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127358: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12735c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12735cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127360: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127364: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127368: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12736c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12736Cu;
    {
        const bool branch_taken_0x12736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12736c) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x127374u;
}
