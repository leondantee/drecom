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

// Function: entry_00178c20
// Address: 0x178c20 - 0x178c34
void entry_00178c20_0x178c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178c20_0x178c20");
#endif

    ctx->pc = 0x178c20u;

    // 0x178c20: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x178c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x178c24: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x178c28: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x178c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x178c2c: 0x41882  srl         $v1, $a0, 2
    ctx->pc = 0x178c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x178c30: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x178c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->pc = 0x178c34u;
}
