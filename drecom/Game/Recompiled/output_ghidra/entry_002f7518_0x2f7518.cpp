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

// Function: entry_002f7518
// Address: 0x2f7518 - 0x2f753c
void entry_002f7518_0x2f7518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7518_0x2f7518");
#endif

    ctx->pc = 0x2f7518u;

    // 0x2f7518: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x2f7518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x2f751c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f751cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7520: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f7520u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f7524: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2f7524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f7528: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2f7528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f752c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7530: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f7530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f7534: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2F7534u;
    {
        const bool branch_taken_0x2f7534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7534) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F753Cu;
}
