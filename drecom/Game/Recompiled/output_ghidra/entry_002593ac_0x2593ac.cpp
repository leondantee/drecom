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

// Function: entry_002593ac
// Address: 0x2593ac - 0x2593b0
void entry_002593ac_0x2593ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002593ac_0x2593ac");
#endif

    ctx->pc = 0x2593acu;

    // 0x2593ac: 0xfec00010  sd          $zero, 0x10($s6)
    ctx->pc = 0x2593acu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 0));
    ctx->pc = 0x2593b0u;
}
