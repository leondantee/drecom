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

// Function: entry_00171460
// Address: 0x171460 - 0x171464
void entry_00171460_0x171460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171460_0x171460");
#endif

    ctx->pc = 0x171460u;

    // 0x171460: 0xafb40164  sw          $s4, 0x164($sp)
    ctx->pc = 0x171460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 20));
    ctx->pc = 0x171464u;
}
