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

// Function: entry_00219560
// Address: 0x219560 - 0x219570
void entry_00219560_0x219560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219560_0x219560");
#endif

    ctx->pc = 0x219560u;

    // 0x219560: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x219560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x219564: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x219564u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x219568: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x219568u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21956c: 0x0  nop
    ctx->pc = 0x21956cu;
    // NOP
    ctx->pc = 0x219570u;
}
