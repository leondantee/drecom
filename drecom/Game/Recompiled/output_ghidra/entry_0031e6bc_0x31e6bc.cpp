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

// Function: entry_0031e6bc
// Address: 0x31e6bc - 0x31e6c0
void entry_0031e6bc_0x31e6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e6bc_0x31e6bc");
#endif

    ctx->pc = 0x31e6bcu;

    // 0x31e6bc: 0xa420af6a  sh          $zero, -0x5096($at)
    ctx->pc = 0x31e6bcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294946666), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x31e6c0u;
}
