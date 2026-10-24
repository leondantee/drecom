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

// Function: entry_00128204
// Address: 0x128204 - 0x128240
void entry_00128204_0x128204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128204_0x128204");
#endif

    ctx->pc = 0x128204u;

    // 0x128204: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x128208: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12820c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12820cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128210: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x128210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x128214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128218: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x128218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12821c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128220: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128224: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128228: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x128228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12822c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x128230: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128234: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x128234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x128238: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x128238u;
    {
        const bool branch_taken_0x128238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128238) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x128240u;
}
