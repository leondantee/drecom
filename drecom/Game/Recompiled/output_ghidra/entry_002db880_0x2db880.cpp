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

// Function: entry_002db880
// Address: 0x2db880 - 0x2db8d0
void entry_002db880_0x2db880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db880_0x2db880");
#endif

    switch (ctx->pc) {
        case 0x2db888u: goto label_2db888;
        default: break;
    }

    ctx->pc = 0x2db880u;

    // 0x2db880: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB880u;
    SET_GPR_U32(ctx, 31, 0x2DB888u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB880u, 0x2DB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB888u;
label_2db888:
    // 0x2db888: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db88c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2db88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2db890: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB890u;
    {
        const bool branch_taken_0x2db890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db890) {
            ctx->pc = 0x2DB8D0u;
            return;
        }
    }
    ctx->pc = 0x2DB898u;
    // 0x2db898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db89c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db8a4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2db8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db8a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db8b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db8b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db8c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db8c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db8c8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DB8C8u;
    {
        const bool branch_taken_0x2db8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db8c8) {
            ctx->pc = 0x2DB8D0u;
            return;
        }
    }
    ctx->pc = 0x2DB8D0u;
}
