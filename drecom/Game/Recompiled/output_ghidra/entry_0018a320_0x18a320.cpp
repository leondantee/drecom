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

// Function: entry_0018a320
// Address: 0x18a320 - 0x18a330
void entry_0018a320_0x18a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a320_0x18a320");
#endif

    ctx->pc = 0x18a320u;

    // 0x18a320: 0xae60020c  sw          $zero, 0x20C($s3)
    ctx->pc = 0x18a320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 0));
    // 0x18a324: 0x26730230  addiu       $s3, $s3, 0x230
    ctx->pc = 0x18a324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x18a328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a32c: 0x0  nop
    ctx->pc = 0x18a32cu;
    // NOP
    ctx->pc = 0x18a330u;
}
