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

// Function: entry_00175fe4
// Address: 0x175fe4 - 0x175fec
void entry_00175fe4_0x175fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175fe4_0x175fe4");
#endif

    ctx->pc = 0x175fe4u;

    // 0x175fe4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x175fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x175fe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x175fe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    ctx->pc = 0x175fecu;
}
