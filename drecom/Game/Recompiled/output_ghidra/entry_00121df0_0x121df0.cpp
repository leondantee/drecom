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

// Function: entry_00121df0
// Address: 0x121df0 - 0x121e54
void entry_00121df0_0x121df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121df0_0x121df0");
#endif

    ctx->pc = 0x121df0u;

    // 0x121df0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121df4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x121df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x121df8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x121df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x121dfc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x121dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x121e00: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x121E00u;
    {
        const bool branch_taken_0x121e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e00) {
            ctx->pc = 0x121E54u;
            return;
        }
    }
    ctx->pc = 0x121E08u;
    // 0x121e08: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e0c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x121e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x121e10: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x121e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x121e14: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x121e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x121e18: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x121e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x121e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121e20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e24: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x121e24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x121e28: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x121e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x121e2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e30: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x121e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x121e34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e38: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121e3c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e40: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x121e40u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121e44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121e48: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x121e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x121e4c: 0x100003b8  b           . + 4 + (0x3B8 << 2)
    ctx->pc = 0x121E4Cu;
    {
        const bool branch_taken_0x121e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e4c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121E54u;
}
