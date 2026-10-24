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

// Function: entry_001e97e0
// Address: 0x1e97e0 - 0x1e9808
void entry_001e97e0_0x1e97e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e97e0_0x1e97e0");
#endif

    ctx->pc = 0x1e97e0u;

    // 0x1e97e0: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e97e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e97e4: 0x84c310a6  lh          $v1, 0x10A6($a2)
    ctx->pc = 0x1e97e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4262)));
    // 0x1e97e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e97e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e97ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1e97ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1e97f0: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E97F0u;
    {
        const bool branch_taken_0x1e97f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e97f0) {
            ctx->pc = 0x1E9808u;
            return;
        }
    }
    ctx->pc = 0x1E97F8u;
    // 0x1e97f8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1e97f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e97fc: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9800: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x1e9800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9804: 0xa644005e  sh          $a0, 0x5E($s2)
    ctx->pc = 0x1e9804u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 94), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1e9808u;
}
