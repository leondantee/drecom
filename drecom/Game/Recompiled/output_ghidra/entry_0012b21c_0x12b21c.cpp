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

// Function: entry_0012b21c
// Address: 0x12b21c - 0x12b258
void entry_0012b21c_0x12b21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b21c_0x12b21c");
#endif

    ctx->pc = 0x12b21cu;

    // 0x12b21c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b220: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b224: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b228: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12b22c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b230: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b234: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b238: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b23c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b240: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b244: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b248: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12b24c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12b24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12b250: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12B250u;
    {
        const bool branch_taken_0x12b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b250) {
            ctx->pc = 0x12B258u;
            return;
        }
    }
    ctx->pc = 0x12B258u;
}
