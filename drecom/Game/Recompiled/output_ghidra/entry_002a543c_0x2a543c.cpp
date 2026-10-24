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

// Function: entry_002a543c
// Address: 0x2a543c - 0x2a54a4
void entry_002a543c_0x2a543c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a543c_0x2a543c");
#endif

    switch (ctx->pc) {
        case 0x2a545cu: goto label_2a545c;
        default: break;
    }

    ctx->pc = 0x2a543cu;

    // 0x2a543c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a543cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5440: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x2a5440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x2a5444: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x2a5444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2a5448: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x2a5448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2a544c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A544Cu;
    {
        const bool branch_taken_0x2a544c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a544c) {
            ctx->pc = 0x2A54A4u;
            return;
        }
    }
    ctx->pc = 0x2A5454u;
    // 0x2a5454: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A5454u;
    SET_GPR_U32(ctx, 31, 0x2A545Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A5454u, 0x2A545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A545Cu;
label_2a545c:
    // 0x2a545c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a545cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5460: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2a5460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a5464: 0x30c70001  andi        $a3, $a2, 0x1
    ctx->pc = 0x2a5464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2a5468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a546c: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A546Cu;
    {
        const bool branch_taken_0x2a546c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a546c) {
            ctx->pc = 0x2A54A4u;
            return;
        }
    }
    ctx->pc = 0x2A5474u;
    // 0x2a5474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a5474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5478: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a5478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a547c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2a547cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a5480: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2a5480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a5484: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a5484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5488: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2a5488u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a548c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5490: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a5490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a5494: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a5494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a5498: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a5498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a549c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a54a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a54a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2a54a4u;
}
