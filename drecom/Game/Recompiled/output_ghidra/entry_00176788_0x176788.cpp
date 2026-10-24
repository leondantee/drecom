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

// Function: entry_00176788
// Address: 0x176788 - 0x176790
void entry_00176788_0x176788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176788_0x176788");
#endif

    ctx->pc = 0x176788u;

    // 0x176788: 0xa7b200ca  sh          $s2, 0xCA($sp)
    ctx->pc = 0x176788u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 18));
    // 0x17678c: 0x0  nop
    ctx->pc = 0x17678cu;
    // NOP
    ctx->pc = 0x176790u;
}
