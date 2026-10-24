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

// Function: entry_0011cc3c
// Address: 0x11cc3c - 0x11cc44
void entry_0011cc3c_0x11cc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc3c_0x11cc3c");
#endif

    ctx->pc = 0x11cc3cu;

    // 0x11cc3c: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x11cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x11cc40: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x11cc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x11cc44u;
}
