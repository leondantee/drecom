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

// Function: entry_00273b00
// Address: 0x273b00 - 0x273b08
void entry_00273b00_0x273b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273b00_0x273b00");
#endif

    ctx->pc = 0x273b00u;

    // 0x273b00: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x273b00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x273b04: 0x0  nop
    ctx->pc = 0x273b04u;
    // NOP
    ctx->pc = 0x273b08u;
}
