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

// Function: entry_00345444
// Address: 0x345444 - 0x3454d8
void entry_00345444_0x345444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345444_0x345444");
#endif

    switch (ctx->pc) {
        case 0x345470u: goto label_345470;
        default: break;
    }

    ctx->pc = 0x345444u;

    // 0x345444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x345444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345448: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34544c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34544cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x345450: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345454: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x345454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345458: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x345458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34545c: 0x24061e0d  addiu       $a2, $zero, 0x1E0D
    ctx->pc = 0x34545cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7693));
    // 0x345460: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x345460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345464: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x345464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x345468: 0xc0965d0  jal         func_259740
    ctx->pc = 0x345468u;
    SET_GPR_U32(ctx, 31, 0x345470u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x345468u, 0x345470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345470u;
label_345470:
    // 0x345470: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345474: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x345474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x345478: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x345478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34547c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x345480: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x345480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345484: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x345484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x345488: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x345488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34548c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345494: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x345494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x345498: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x345498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x34549c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x34549Cu;
    {
        const bool branch_taken_0x34549c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34549c) {
            ctx->pc = 0x3454D8u;
            return;
        }
    }
    ctx->pc = 0x3454A4u;
    // 0x3454a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454ac: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x3454acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3454b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3454b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3454b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454bc: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x3454bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x3454c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3454c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3454c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3454c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3454c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3454c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3454cc: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x3454ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x3454d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3454D0u;
    {
        const bool branch_taken_0x3454d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3454d0) {
            ctx->pc = 0x345500u;
            return;
        }
    }
    ctx->pc = 0x3454D8u;
}
