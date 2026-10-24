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

// Function: entry_001f2f18
// Address: 0x1f2f18 - 0x1f2f30
void entry_001f2f18_0x1f2f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2f18_0x1f2f18");
#endif

    ctx->pc = 0x1f2f18u;

    // 0x1f2f18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1f2f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f2f1c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f2f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2f20: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f2f24: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x1f2f28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2f2c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x1f2f30u;
}
