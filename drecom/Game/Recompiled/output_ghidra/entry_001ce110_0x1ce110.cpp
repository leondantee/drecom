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

// Function: entry_001ce110
// Address: 0x1ce110 - 0x1ce158
void entry_001ce110_0x1ce110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce110_0x1ce110");
#endif

    ctx->pc = 0x1ce110u;

    // 0x1ce110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce114: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce118: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce118u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce11c: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1ce11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ce120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce124: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ce124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce128: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce12c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce130: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce134: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce138: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce13c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce140: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ce140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1ce144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce148: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce14c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ce14cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce150: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x1CE150u;
    {
        const bool branch_taken_0x1ce150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce150) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE158u;
}
