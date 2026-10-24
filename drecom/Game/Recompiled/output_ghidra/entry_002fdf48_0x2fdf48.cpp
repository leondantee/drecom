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

// Function: entry_002fdf48
// Address: 0x2fdf48 - 0x2fdf58
void entry_002fdf48_0x2fdf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fdf48_0x2fdf48");
#endif

    ctx->pc = 0x2fdf48u;

    // 0x2fdf48: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2fdf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2fdf4c: 0x2477a610  addiu       $s7, $v1, -0x59F0
    ctx->pc = 0x2fdf4cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2fdf50: 0x8ef00000  lw          $s0, 0x0($s7)
    ctx->pc = 0x2fdf50u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2fdf54: 0x0  nop
    ctx->pc = 0x2fdf54u;
    // NOP
    ctx->pc = 0x2fdf58u;
}
