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

// Function: entry_001ccd5c
// Address: 0x1ccd5c - 0x1ccdc4
void entry_001ccd5c_0x1ccd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccd5c_0x1ccd5c");
#endif

    ctx->pc = 0x1ccd5cu;

    // 0x1ccd5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ccd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccd60: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd64: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ccd64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccd68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ccd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccd6c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd70: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ccd70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ccd74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ccd78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccd7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ccd80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccd84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ccd88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ccd8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ccd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccd90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd94: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ccd94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ccd98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccd9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ccd9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccda0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ccda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ccda4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccda8: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1ccda8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ccdac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdb0: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1ccdb0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ccdb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccdb8: 0xa080156c  sb          $zero, 0x156C($a0)
    ctx->pc = 0x1ccdb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ccdbc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CCDBCu;
    {
        const bool branch_taken_0x1ccdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccdbc) {
            ctx->pc = 0x1CCDF4u;
            return;
        }
    }
    ctx->pc = 0x1CCDC4u;
}
