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

// Function: entry_001767bc
// Address: 0x1767bc - 0x1767c0
void entry_001767bc_0x1767bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001767bc_0x1767bc");
#endif

    ctx->pc = 0x1767bcu;

    // 0x1767bc: 0xa7b300cc  sh          $s3, 0xCC($sp)
    ctx->pc = 0x1767bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 19));
    ctx->pc = 0x1767c0u;
}
