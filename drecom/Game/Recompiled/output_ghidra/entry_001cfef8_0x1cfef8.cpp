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

// Function: entry_001cfef8
// Address: 0x1cfef8 - 0x1cff60
void entry_001cfef8_0x1cfef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfef8_0x1cfef8");
#endif

    ctx->pc = 0x1cfef8u;

    // 0x1cfef8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfefc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1cfefcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff00: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x1cff00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cff04: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cff08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff0c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1cff0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cff10: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cff10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff14: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1cff14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cff18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cff1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cff20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1cff24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1cff28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cff2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff30: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1cff30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cff34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cff38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cff3c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cff40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff44: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1cff44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cff48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff4c: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x1cff4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cff50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cff54: 0xa060156c  sb          $zero, 0x156C($v1)
    ctx->pc = 0x1cff54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cff58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CFF58u;
    {
        const bool branch_taken_0x1cff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff58) {
            ctx->pc = 0x1CFF90u;
            return;
        }
    }
    ctx->pc = 0x1CFF60u;
}
