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

// Function: entry_0011594c
// Address: 0x11594c - 0x115958
void entry_0011594c_0x11594c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011594c_0x11594c");
#endif

    ctx->pc = 0x11594cu;

    // 0x11594c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x115950: 0xdc43d948  ld          $v1, -0x26B8($v0)
    ctx->pc = 0x115950u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3AD948u));
    // 0x115954: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x115954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->pc = 0x115958u;
}
