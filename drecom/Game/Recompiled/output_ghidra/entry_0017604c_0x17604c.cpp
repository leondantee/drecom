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

// Function: entry_0017604c
// Address: 0x17604c - 0x176054
void entry_0017604c_0x17604c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017604c_0x17604c");
#endif

    ctx->pc = 0x17604cu;

    // 0x17604c: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x17604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x176050: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x176050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    ctx->pc = 0x176054u;
}
