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

// Function: entry_0031addc
// Address: 0x31addc - 0x31ae48
void entry_0031addc_0x31addc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031addc_0x31addc");
#endif

    ctx->pc = 0x31addcu;

    // 0x31addc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31addcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ade0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x31ade0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x31ade4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x31ade4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31ade8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x31ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x31adec: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x31ADECu;
    {
        const bool branch_taken_0x31adec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31adec) {
            ctx->pc = 0x31AE48u;
            return;
        }
    }
    ctx->pc = 0x31ADF4u;
    // 0x31adf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31adf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31adfc: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x31adfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x31ae00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae04: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x31ae04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae0c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x31ae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae10: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31ae10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ae14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae18: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31ae18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ae1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ae20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x31ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ae28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31ae2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31ae34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ae38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ae3c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31ae40: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x31AE40u;
    {
        const bool branch_taken_0x31ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ae40) {
            ctx->pc = 0x31AE48u;
            return;
        }
    }
    ctx->pc = 0x31AE48u;
}
