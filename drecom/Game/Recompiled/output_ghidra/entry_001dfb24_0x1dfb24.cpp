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

// Function: entry_001dfb24
// Address: 0x1dfb24 - 0x1dfb30
void entry_001dfb24_0x1dfb24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfb24_0x1dfb24");
#endif

    ctx->pc = 0x1dfb24u;

    // 0x1dfb24: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x1dfb24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dfb28: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1dfb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1dfb2c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1dfb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x1dfb30u;
}
