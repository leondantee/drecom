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

// Function: entry_003278d0
// Address: 0x3278d0 - 0x3278e8
void entry_003278d0_0x3278d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003278d0_0x3278d0");
#endif

    ctx->pc = 0x3278d0u;

    // 0x3278d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3278d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3278d4: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3278d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3278d8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3278d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3278dc: 0xb0082b  sltu        $at, $a1, $s0
    ctx->pc = 0x3278dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3278e0: 0x1020ffed  beqz        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3278E0u;
    {
        const bool branch_taken_0x3278e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3278e0) {
            ctx->pc = 0x327898u;
            return;
        }
    }
    ctx->pc = 0x3278E8u;
}
