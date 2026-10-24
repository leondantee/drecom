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

// Function: entry_0018c16c
// Address: 0x18c16c - 0x18c178
void entry_0018c16c_0x18c16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c16c_0x18c16c");
#endif

    ctx->pc = 0x18c16cu;

    // 0x18c16c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c16cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c170: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x18c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x18c174: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18c178u;
}
