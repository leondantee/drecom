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

// Function: entry_0032c04c
// Address: 0x32c04c - 0x32c058
void entry_0032c04c_0x32c04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c04c_0x32c04c");
#endif

    ctx->pc = 0x32c04cu;

    // 0x32c04c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x32c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x32c050: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32c050u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32c054: 0x0  nop
    ctx->pc = 0x32c054u;
    // NOP
    ctx->pc = 0x32c058u;
}
