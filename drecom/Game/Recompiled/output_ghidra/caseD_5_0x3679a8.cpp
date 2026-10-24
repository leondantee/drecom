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

// Function: caseD_5
// Address: 0x3679a8 - 0x3679fc
void caseD_5_0x3679a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x3679a8");
#endif

    switch (ctx->pc) {
        case 0x3679b8u: goto label_3679b8;
        case 0x3679c8u: goto label_3679c8;
        case 0x3679d4u: goto label_3679d4;
        default: break;
    }

    ctx->pc = 0x3679a8u;

    // 0x3679a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3679a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3679ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3679acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3679b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3679B0u;
    SET_GPR_U32(ctx, 31, 0x3679B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3679B0u, 0x3679B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679B8u;
label_3679b8:
    // 0x3679b8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3679b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3679bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3679bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3679c0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3679C0u;
    SET_GPR_U32(ctx, 31, 0x3679C8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3679C0u, 0x3679C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679C8u;
label_3679c8:
    // 0x3679c8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3679c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3679cc: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3679CCu;
    SET_GPR_U32(ctx, 31, 0x3679D4u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3679CCu, 0x3679D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3679D4u;
label_3679d4:
    // 0x3679d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3679d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3679d8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x3679d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3679dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3679DCu;
    {
        const bool branch_taken_0x3679dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3679dc) {
            ctx->pc = 0x3679FCu;
            return;
        }
    }
    ctx->pc = 0x3679E4u;
    // 0x3679e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3679e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3679e8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3679e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3679ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3679ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3679f0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x3679f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3679f4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3679F4u;
    {
        const bool branch_taken_0x3679f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3679f4) {
            ctx->pc = 0x367AC4u;
            return;
        }
    }
    ctx->pc = 0x3679FCu;
}
