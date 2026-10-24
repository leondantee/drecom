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

// Function: entry_00129c9c
// Address: 0x129c9c - 0x129cfc
void entry_00129c9c_0x129c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129c9c_0x129c9c");
#endif

    switch (ctx->pc) {
        case 0x129cb0u: goto label_129cb0;
        default: break;
    }

    ctx->pc = 0x129c9cu;

    // 0x129c9c: 0x16200017  bnez        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x129C9Cu;
    {
        const bool branch_taken_0x129c9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x129c9c) {
            ctx->pc = 0x129CFCu;
            return;
        }
    }
    ctx->pc = 0x129CA4u;
    // 0x129ca4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x129ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ca8: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x129CA8u;
    SET_GPR_U32(ctx, 31, 0x129CB0u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x129CA8u, 0x129CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129CB0u;
label_129cb0:
    // 0x129cb0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x129CB0u;
    {
        const bool branch_taken_0x129cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129cb0) {
            ctx->pc = 0x129CFCu;
            return;
        }
    }
    ctx->pc = 0x129CB8u;
    // 0x129cb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129cbc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129cc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129cc4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x129cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x129cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ccc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129cd4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129cd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129cdc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129ce0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129ce4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x129ce8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x129ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129cec: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x129cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x129cf0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x129cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x129cf4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x129cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x129cf8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x129cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x129cfcu;
}
