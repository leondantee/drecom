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

// Function: entry_00321520
// Address: 0x321520 - 0x321528
void entry_00321520_0x321520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321520_0x321520");
#endif

    ctx->pc = 0x321520u;

    // 0x321520: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x321520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321524: 0x0  nop
    ctx->pc = 0x321524u;
    // NOP
    ctx->pc = 0x321528u;
}
