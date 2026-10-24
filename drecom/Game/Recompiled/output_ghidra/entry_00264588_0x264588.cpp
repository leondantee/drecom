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

// Function: entry_00264588
// Address: 0x264588 - 0x264590
void entry_00264588_0x264588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264588_0x264588");
#endif

    ctx->pc = 0x264588u;

    // 0x264588: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26458c: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x26458cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    ctx->pc = 0x264590u;
}
