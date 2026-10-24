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

// Function: entry_0011f71c
// Address: 0x11f71c - 0x11f72c
void entry_0011f71c_0x11f71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f71c_0x11f71c");
#endif

    ctx->pc = 0x11f71cu;

    // 0x11f71c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11f720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f724: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x11f724u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x11f728: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11f728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x11f72cu;
}
