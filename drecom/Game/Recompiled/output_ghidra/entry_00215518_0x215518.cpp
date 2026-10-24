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

// Function: entry_00215518
// Address: 0x215518 - 0x215520
void entry_00215518_0x215518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215518_0x215518");
#endif

    ctx->pc = 0x215518u;

    // 0x215518: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x215518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x21551c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21551cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x215520u;
}
