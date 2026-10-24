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

// Function: entry_0013c674
// Address: 0x13c674 - 0x13c6c8
void entry_0013c674_0x13c674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c674_0x13c674");
#endif

    switch (ctx->pc) {
        case 0x13c698u: goto label_13c698;
        default: break;
    }

    ctx->pc = 0x13c674u;

label_13c674:
    // 0x13c674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13c674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c678: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c67c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x13c67cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x13c680: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x13c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13c684: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x13c684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c688: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x13c688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x13c68c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x13c68cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c690: 0xc04f410  jal         func_13D040
    ctx->pc = 0x13C690u;
    SET_GPR_U32(ctx, 31, 0x13C698u);
    ctx->pc = 0x13D040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D040u, 0x13C690u, 0x13C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C698u;
label_13c698:
    // 0x13c698: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13c69c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c6a0: 0x24430120  addiu       $v1, $v0, 0x120
    ctx->pc = 0x13c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x13c6a4: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x13c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x13c6a8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x13c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x13c6ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13c6b0: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x13c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x13c6b4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x13C6B4u;
    {
        const bool branch_taken_0x13c6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c6b4) {
            ctx->pc = 0x13C674u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c674;
        }
    }
    ctx->pc = 0x13C6BCu;
    // 0x13c6bc: 0xa3a000df  sb          $zero, 0xDF($sp)
    ctx->pc = 0x13c6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c6c0: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x13C6C0u;
    {
        const bool branch_taken_0x13c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c6c0) {
            ctx->pc = 0x13CF90u;
            return;
        }
    }
    ctx->pc = 0x13C6C8u;
}
