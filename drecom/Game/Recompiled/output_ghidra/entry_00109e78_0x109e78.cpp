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

// Function: entry_00109e78
// Address: 0x109e78 - 0x109e80
void entry_00109e78_0x109e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109e78_0x109e78");
#endif

    ctx->pc = 0x109e78u;

    // 0x109e78: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x109e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x109e7c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x109e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    ctx->pc = 0x109e80u;
}
