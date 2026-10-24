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

// Function: entry_0026c744
// Address: 0x26c744 - 0x26c750
void entry_0026c744_0x26c744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c744_0x26c744");
#endif

    ctx->pc = 0x26c744u;

    // 0x26c744: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c748: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c74c: 0xacc51b60  sw          $a1, 0x1B60($a2)
    ctx->pc = 0x26c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 7008), GPR_U32(ctx, 5));
    ctx->pc = 0x26c750u;
}
