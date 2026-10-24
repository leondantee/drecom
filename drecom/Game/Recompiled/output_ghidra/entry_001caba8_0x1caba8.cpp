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

// Function: entry_001caba8
// Address: 0x1caba8 - 0x1cac0c
void entry_001caba8_0x1caba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caba8_0x1caba8");
#endif

    switch (ctx->pc) {
        case 0x1cabbcu: goto label_1cabbc;
        default: break;
    }

    ctx->pc = 0x1caba8u;

    // 0x1caba8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabac: 0x8c421b70  lw          $v0, 0x1B70($v0)
    ctx->pc = 0x1cabacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x1cabb0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1cabb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cabb4: 0xc09c398  jal         func_270E60
    ctx->pc = 0x1CABB4u;
    SET_GPR_U32(ctx, 31, 0x1CABBCu);
    ctx->pc = 0x270E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E60u, 0x1CABB4u, 0x1CABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABBCu;
label_1cabbc:
    // 0x1cabbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabc0: 0xac621b70  sw          $v0, 0x1B70($v1)
    ctx->pc = 0x1cabc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7024), GPR_U32(ctx, 2));
    // 0x1cabc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabc8: 0x8c631b70  lw          $v1, 0x1B70($v1)
    ctx->pc = 0x1cabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7024)));
    // 0x1cabcc: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CABCCu;
    {
        const bool branch_taken_0x1cabcc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cabcc) {
            ctx->pc = 0x1CAC0Cu;
            return;
        }
    }
    ctx->pc = 0x1CABD4u;
    // 0x1cabd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cabd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cabdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cabe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabe4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1cabe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cabe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cabecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cabf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cabf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cabf8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cabfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac00: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cac00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1cac04: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CAC04u;
    {
        const bool branch_taken_0x1cac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac04) {
            ctx->pc = 0x1CACA8u;
            return;
        }
    }
    ctx->pc = 0x1CAC0Cu;
}
