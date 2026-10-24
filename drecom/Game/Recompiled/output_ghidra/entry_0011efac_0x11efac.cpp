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

// Function: entry_0011efac
// Address: 0x11efac - 0x11efb0
void entry_0011efac_0x11efac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011efac_0x11efac");
#endif

    ctx->pc = 0x11efacu;

    // 0x11efac: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x11efacu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    ctx->pc = 0x11efb0u;
}
