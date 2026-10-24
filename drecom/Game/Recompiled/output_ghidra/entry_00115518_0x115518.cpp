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

// Function: entry_00115518
// Address: 0x115518 - 0x115524
void entry_00115518_0x115518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115518_0x115518");
#endif

    ctx->pc = 0x115518u;

    // 0x115518: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x115518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11551c: 0xdc43d920  ld          $v1, -0x26E0($v0)
    ctx->pc = 0x11551cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3AD920u));
    // 0x115520: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x115520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->pc = 0x115524u;
}
