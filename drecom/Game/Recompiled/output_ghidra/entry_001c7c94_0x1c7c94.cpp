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

// Function: entry_001c7c94
// Address: 0x1c7c94 - 0x1c7cfc
void entry_001c7c94_0x1c7c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7c94_0x1c7c94");
#endif

    ctx->pc = 0x1c7c94u;

    // 0x1c7c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7c98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7c9c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1c7c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7ca0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c7ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7ca4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ca8: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x1c7ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7cac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7cb0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1c7cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7cb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7cb8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7cbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7cc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1c7cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1c7cc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c7cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7cc8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ccc: 0xa0a60002  sb          $a2, 0x2($a1)
    ctx->pc = 0x1c7cccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c7cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7cd4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c7cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7cd8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7cdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ce0: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c7ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c7ce4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ce8: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1c7ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c7cec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7cf0: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1c7cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7cf4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C7CF4u;
    {
        const bool branch_taken_0x1c7cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7cf4) {
            ctx->pc = 0x1C7D2Cu;
            return;
        }
    }
    ctx->pc = 0x1C7CFCu;
}
