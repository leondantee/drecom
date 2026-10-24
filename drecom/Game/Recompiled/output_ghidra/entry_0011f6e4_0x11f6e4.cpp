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

// Function: entry_0011f6e4
// Address: 0x11f6e4 - 0x11f6f0
void entry_0011f6e4_0x11f6e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f6e4_0x11f6e4");
#endif

    ctx->pc = 0x11f6e4u;

    // 0x11f6e4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x11f6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6e8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x11f6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f6ec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11f6ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11f6f0u;
}
