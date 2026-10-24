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

// Function: entry_001fb3e8
// Address: 0x1fb3e8 - 0x1fb400
void entry_001fb3e8_0x1fb3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb3e8_0x1fb3e8");
#endif

    ctx->pc = 0x1fb3e8u;

    // 0x1fb3e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb3ec: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fb3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb3f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fb3f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb3f4: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1fb3f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fb3f8: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FB3F8u;
    {
        const bool branch_taken_0x1fb3f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb3f8) {
            ctx->pc = 0x1FB3ACu;
            return;
        }
    }
    ctx->pc = 0x1FB400u;
}
