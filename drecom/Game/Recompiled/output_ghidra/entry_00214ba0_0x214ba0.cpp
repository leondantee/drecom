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

// Function: entry_00214ba0
// Address: 0x214ba0 - 0x214ba8
void entry_00214ba0_0x214ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214ba0_0x214ba0");
#endif

    ctx->pc = 0x214ba0u;

    // 0x214ba0: 0x8e11aad4  lw          $s1, -0x552C($s0)
    ctx->pc = 0x214ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945492)));
    // 0x214ba4: 0xffa50078  sd          $a1, 0x78($sp)
    ctx->pc = 0x214ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
    ctx->pc = 0x214ba8u;
}
