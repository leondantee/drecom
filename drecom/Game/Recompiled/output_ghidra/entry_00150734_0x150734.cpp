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

// Function: entry_00150734
// Address: 0x150734 - 0x150764
void entry_00150734_0x150734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150734_0x150734");
#endif

    ctx->pc = 0x150734u;

    // 0x150734: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150738: 0x848215f0  lh          $v0, 0x15F0($a0)
    ctx->pc = 0x150738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5616)));
    // 0x15073c: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x15073cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x150740: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x150740u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x150744: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x150744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x150748: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x150748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x15074c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x15074cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x150750: 0x6a43c  dsll32      $s4, $a2, 16
    ctx->pc = 0x150750u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 16));
    // 0x150754: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x150754u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x150758: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x150758u;
    {
        const bool branch_taken_0x150758 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x150758) {
            ctx->pc = 0x150764u;
            return;
        }
    }
    ctx->pc = 0x150760u;
    // 0x150760: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x150760u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x150764u;
}
