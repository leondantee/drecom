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

// Function: entry_00258158
// Address: 0x258158 - 0x258160
void entry_00258158_0x258158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258158_0x258158");
#endif

    ctx->pc = 0x258158u;

    // 0x258158: 0xfea00010  sd          $zero, 0x10($s5)
    ctx->pc = 0x258158u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 0));
    // 0x25815c: 0x0  nop
    ctx->pc = 0x25815cu;
    // NOP
    ctx->pc = 0x258160u;
}
