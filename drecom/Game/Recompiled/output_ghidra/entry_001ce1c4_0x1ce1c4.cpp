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

// Function: entry_001ce1c4
// Address: 0x1ce1c4 - 0x1ce22c
void entry_001ce1c4_0x1ce1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce1c4_0x1ce1c4");
#endif

    ctx->pc = 0x1ce1c4u;

    // 0x1ce1c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ce1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce1d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ce1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce1d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ce1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce1dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ce1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1e0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1ce1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce1e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce1ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ce1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ce1f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ce1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce1fc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ce1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ce200: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce204: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ce204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce208: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ce208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ce20c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce210: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1ce210u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ce214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce218: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1ce218u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ce21c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce220: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1ce220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce224: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CE224u;
    {
        const bool branch_taken_0x1ce224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce224) {
            ctx->pc = 0x1CE25Cu;
            return;
        }
    }
    ctx->pc = 0x1CE22Cu;
}
