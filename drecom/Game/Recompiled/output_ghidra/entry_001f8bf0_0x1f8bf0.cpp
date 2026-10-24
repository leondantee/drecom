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

// Function: entry_001f8bf0
// Address: 0x1f8bf0 - 0x1f8c10
void entry_001f8bf0_0x1f8bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8bf0_0x1f8bf0");
#endif

    ctx->pc = 0x1f8bf0u;

    // 0x1f8bf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8bf4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f8bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f8bf8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f8bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f8bfc: 0x2403dfe7  addiu       $v1, $zero, -0x2019
    ctx->pc = 0x1f8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f8c00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f8c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8c04: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f8c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8c0c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f8c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1f8c10u;
}
