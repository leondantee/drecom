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

// Function: entry_0018ebdc
// Address: 0x18ebdc - 0x18ebf4
void entry_0018ebdc_0x18ebdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebdc_0x18ebdc");
#endif

    ctx->pc = 0x18ebdcu;

    // 0x18ebdc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x18ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18ebe0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebe4: 0xac43021c  sw          $v1, 0x21C($v0)
    ctx->pc = 0x18ebe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 3));
    // 0x18ebe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x18ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebec: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x18ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x18ebf0: 0xac430220  sw          $v1, 0x220($v0)
    ctx->pc = 0x18ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
    ctx->pc = 0x18ebf4u;
}
