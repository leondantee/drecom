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

// Function: entry_0018a490
// Address: 0x18a490 - 0x18a4a8
void entry_0018a490_0x18a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a490_0x18a490");
#endif

    ctx->pc = 0x18a490u;

    // 0x18a490: 0x2663fdd0  addiu       $v1, $s3, -0x230
    ctx->pc = 0x18a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966736));
    // 0x18a494: 0xae63021c  sw          $v1, 0x21C($s3)
    ctx->pc = 0x18a494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 540), GPR_U32(ctx, 3));
    // 0x18a498: 0x26630230  addiu       $v1, $s3, 0x230
    ctx->pc = 0x18a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x18a49c: 0xae630220  sw          $v1, 0x220($s3)
    ctx->pc = 0x18a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 544), GPR_U32(ctx, 3));
    // 0x18a4a0: 0x26730230  addiu       $s3, $s3, 0x230
    ctx->pc = 0x18a4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 560));
    // 0x18a4a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x18a4a8u;
}
