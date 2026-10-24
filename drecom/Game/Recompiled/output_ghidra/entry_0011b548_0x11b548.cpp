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

// Function: entry_0011b548
// Address: 0x11b548 - 0x11b54c
void entry_0011b548_0x11b548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b548_0x11b548");
#endif

    ctx->pc = 0x11b548u;

    // 0x11b548: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x11b548u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x11b54cu;
}
