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

// Function: entry_001ffb78
// Address: 0x1ffb78 - 0x1ffba0
void entry_001ffb78_0x1ffb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffb78_0x1ffb78");
#endif

    ctx->pc = 0x1ffb78u;

    // 0x1ffb78: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb7c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1ffb7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffb80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ffb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffb84: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1ffb84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ffb88: 0x1020ffeb  beqz        $at, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1FFB88u;
    {
        const bool branch_taken_0x1ffb88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb88) {
            ctx->pc = 0x1FFB38u;
            return;
        }
    }
    ctx->pc = 0x1FFB90u;
    // 0x1ffb90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ffb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffb94: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ffb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffb98: 0xa0c50abc  sb          $a1, 0xABC($a2)
    ctx->pc = 0x1ffb98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2748), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ffb9c: 0x0  nop
    ctx->pc = 0x1ffb9cu;
    // NOP
    ctx->pc = 0x1ffba0u;
}
