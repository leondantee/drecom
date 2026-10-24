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

// Function: entry_002146cc
// Address: 0x2146cc - 0x2146d0
void entry_002146cc_0x2146cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002146cc_0x2146cc");
#endif

    ctx->pc = 0x2146ccu;

    // 0x2146cc: 0x9e71fff8  lwu         $s1, -0x8($s3)
    ctx->pc = 0x2146ccu;
    SET_GPR_ZE32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    ctx->pc = 0x2146d0u;
}
