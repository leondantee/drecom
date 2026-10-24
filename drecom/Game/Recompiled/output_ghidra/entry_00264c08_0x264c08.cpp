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

// Function: entry_00264c08
// Address: 0x264c08 - 0x264c10
void entry_00264c08_0x264c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264c08_0x264c08");
#endif

    ctx->pc = 0x264c08u;

    // 0x264c08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x264c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x264c0c: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x264c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    ctx->pc = 0x264c10u;
}
