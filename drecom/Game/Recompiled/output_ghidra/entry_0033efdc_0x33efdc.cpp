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

// Function: entry_0033efdc
// Address: 0x33efdc - 0x33f040
void entry_0033efdc_0x33efdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033efdc_0x33efdc");
#endif

    ctx->pc = 0x33efdcu;

    // 0x33efdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33efe0: 0x8c63121c  lw          $v1, 0x121C($v1)
    ctx->pc = 0x33efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
    // 0x33efe4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33EFE4u;
    {
        const bool branch_taken_0x33efe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33efe4) {
            ctx->pc = 0x33F040u;
            return;
        }
    }
    ctx->pc = 0x33EFECu;
    // 0x33efec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33efecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33eff0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33eff4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33eff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33eff8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33effc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x33effcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f000: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f004: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x33f004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f008: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f00c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x33f00cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x33f010: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f014: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33f014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x33f018: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x33f018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f01c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x33f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33f020: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x33f020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x33f024: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x33f024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33f028: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x33f028u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x33f02c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33f02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33f030: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x33f030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33f034: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x33f034u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x33f038: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x33F038u;
    {
        const bool branch_taken_0x33f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f038) {
            ctx->pc = 0x33F078u;
            return;
        }
    }
    ctx->pc = 0x33F040u;
}
