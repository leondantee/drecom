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

// Function: $L30
// Address: 0x118c18 - 0x118c1c
void ps2__L30_0x118c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L30_0x118c18");
#endif

    ctx->pc = 0x118c18u;

    // 0x118c18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x118c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x118c1cu;
}
