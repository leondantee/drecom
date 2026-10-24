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

// Function: entry_002e568c
// Address: 0x2e568c - 0x2e56dc
void entry_002e568c_0x2e568c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e568c_0x2e568c");
#endif

    switch (ctx->pc) {
        case 0x2e5694u: goto label_2e5694;
        default: break;
    }

    ctx->pc = 0x2e568cu;

    // 0x2e568c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E568Cu;
    SET_GPR_U32(ctx, 31, 0x2E5694u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E568Cu, 0x2E5694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5694u;
label_2e5694:
    // 0x2e5694: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e5694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e5698: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2e5698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2e569c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E569Cu;
    {
        const bool branch_taken_0x2e569c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e569c) {
            ctx->pc = 0x2E56DCu;
            return;
        }
    }
    ctx->pc = 0x2E56A4u;
    // 0x2e56a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e56a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e56acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e56b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e56b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e56b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e56b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e56bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e56c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e56c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e56c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e56cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e56d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e56d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E56D4u;
    {
        const bool branch_taken_0x2e56d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e56d4) {
            ctx->pc = 0x2E56DCu;
            return;
        }
    }
    ctx->pc = 0x2E56DCu;
}
