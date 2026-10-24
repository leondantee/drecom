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

// Function: entry_003207a8
// Address: 0x3207a8 - 0x3207c0
void entry_003207a8_0x3207a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003207a8_0x3207a8");
#endif

    ctx->pc = 0x3207a8u;

    // 0x3207a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3207a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3207ac: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x3207acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3207b0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3207b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3207b4: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x3207b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3207b8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3207B8u;
    {
        const bool branch_taken_0x3207b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3207b8) {
            ctx->pc = 0x32076Cu;
            return;
        }
    }
    ctx->pc = 0x3207C0u;
}
