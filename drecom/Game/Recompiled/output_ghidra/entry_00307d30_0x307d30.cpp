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

// Function: entry_00307d30
// Address: 0x307d30 - 0x307d5c
void entry_00307d30_0x307d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307d30_0x307d30");
#endif

    ctx->pc = 0x307d30u;

    // 0x307d30: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d34: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x307d34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x307d38: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x307d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x307d3c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x307d3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x307d40: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307D40u;
    {
        const bool branch_taken_0x307d40 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x307d40) {
            ctx->pc = 0x307D5Cu;
            return;
        }
    }
    ctx->pc = 0x307D48u;
    // 0x307d48: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x307d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307d4c: 0x8ca31338  lw          $v1, 0x1338($a1)
    ctx->pc = 0x307d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x307d50: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x307d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x307d54: 0x146000d4  bnez        $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x307D54u;
    {
        const bool branch_taken_0x307d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d54) {
            ctx->pc = 0x3080A8u;
            return;
        }
    }
    ctx->pc = 0x307D5Cu;
}
