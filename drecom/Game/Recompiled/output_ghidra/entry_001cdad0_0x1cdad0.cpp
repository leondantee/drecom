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

// Function: entry_001cdad0
// Address: 0x1cdad0 - 0x1cdb38
void entry_001cdad0_0x1cdad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdad0_0x1cdad0");
#endif

    ctx->pc = 0x1cdad0u;

    // 0x1cdad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdad4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdad8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1cdad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cdadc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cdadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdae0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1cdae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdae4: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1cdae4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cdae8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdaec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cdaecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdaf0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdaf4: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1cdaf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdaf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdafc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cdafcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cdb00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb08: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1cdb08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cdb0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cdb10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cdb18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cdb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb1c: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1cdb1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cdb20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb24: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cdb24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cdb28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cdb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cdb2c: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cdb2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cdb30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CDB30u;
    {
        const bool branch_taken_0x1cdb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdb30) {
            ctx->pc = 0x1CDB68u;
            return;
        }
    }
    ctx->pc = 0x1CDB38u;
}
