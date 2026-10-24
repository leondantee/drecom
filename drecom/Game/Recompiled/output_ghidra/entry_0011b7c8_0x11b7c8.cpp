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

// Function: entry_0011b7c8
// Address: 0x11b7c8 - 0x11b7d0
void entry_0011b7c8_0x11b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b7c8_0x11b7c8");
#endif

    ctx->pc = 0x11b7c8u;

    // 0x11b7c8: 0xde83fff8  ld          $v1, -0x8($s4)
    ctx->pc = 0x11b7c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b7cc: 0xffa30200  sd          $v1, 0x200($sp)
    ctx->pc = 0x11b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 3));
    ctx->pc = 0x11b7d0u;
}
