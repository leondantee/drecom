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

// Function: entry_00140da0
// Address: 0x140da0 - 0x140dd0
void entry_00140da0_0x140da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140da0_0x140da0");
#endif

    ctx->pc = 0x140da0u;

    // 0x140da0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x140da0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x140da4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x140da8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x140da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x140dac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140DACu;
    {
        const bool branch_taken_0x140dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140dac) {
            ctx->pc = 0x140DD0u;
            return;
        }
    }
    ctx->pc = 0x140DB4u;
    // 0x140db4: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x140db4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x140db8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x140db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x140dbc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x140dbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x140dc0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140DC0u;
    {
        const bool branch_taken_0x140dc0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x140dc0) {
            ctx->pc = 0x140DD0u;
            return;
        }
    }
    ctx->pc = 0x140DC8u;
    // 0x140dc8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x140dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x140dcc: 0x0  nop
    ctx->pc = 0x140dccu;
    // NOP
    ctx->pc = 0x140dd0u;
}
