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

// Function: entry_0016ee40
// Address: 0x16ee40 - 0x16ee48
void entry_0016ee40_0x16ee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ee40_0x16ee40");
#endif

    ctx->pc = 0x16ee40u;

    // 0x16ee40: 0xae0001ec  sw          $zero, 0x1EC($s0)
    ctx->pc = 0x16ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 0));
    // 0x16ee44: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x16ee44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->pc = 0x16ee48u;
}
