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

// Function: entry_0018ebb0
// Address: 0x18ebb0 - 0x18ebdc
void entry_0018ebb0_0x18ebb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ebb0_0x18ebb0");
#endif

    ctx->pc = 0x18ebb0u;

    // 0x18ebb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebb4: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x18ebb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
    // 0x18ebb8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x18ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18ebbc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18EBBCu;
    {
        const bool branch_taken_0x18ebbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ebbc) {
            ctx->pc = 0x18EBDCu;
            return;
        }
    }
    ctx->pc = 0x18EBC4u;
    // 0x18ebc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebc8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x18ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x18ebcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ebd0: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x18ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x18ebd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18EBD4u;
    {
        const bool branch_taken_0x18ebd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ebd4) {
            ctx->pc = 0x18EBF4u;
            return;
        }
    }
    ctx->pc = 0x18EBDCu;
}
