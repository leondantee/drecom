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

// Function: entry_001c82c4
// Address: 0x1c82c4 - 0x1c832c
void entry_001c82c4_0x1c82c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c82c4_0x1c82c4");
#endif

    ctx->pc = 0x1c82c4u;

    // 0x1c82c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c82c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82cc: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x1c82ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c82d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c82d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c82d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82d8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1c82d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c82dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c82dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82e0: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1c82e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c82e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c82e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c82ec: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c82ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82f0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1c82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1c82f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c82f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c82fc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c82fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c8300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8304: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c8304u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8308: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1c8308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c830c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8310: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1c8310u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c8314: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c8314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8318: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1c8318u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c831c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8320: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1c8320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c8324: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C8324u;
    {
        const bool branch_taken_0x1c8324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8324) {
            ctx->pc = 0x1C835Cu;
            return;
        }
    }
    ctx->pc = 0x1C832Cu;
}
