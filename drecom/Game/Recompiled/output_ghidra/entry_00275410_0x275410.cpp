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

// Function: entry_00275410
// Address: 0x275410 - 0x275418
void entry_00275410_0x275410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275410_0x275410");
#endif

    ctx->pc = 0x275410u;

    // 0x275410: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x275410u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x275414: 0x0  nop
    ctx->pc = 0x275414u;
    // NOP
    ctx->pc = 0x275418u;
}
