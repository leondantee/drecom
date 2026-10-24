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

// Function: entry_00183838
// Address: 0x183838 - 0x1838bc
void entry_00183838_0x183838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183838_0x183838");
#endif

    switch (ctx->pc) {
        case 0x183894u: goto label_183894;
        default: break;
    }

    ctx->pc = 0x183838u;

    // 0x183838: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x18383c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18383cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183840: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x183840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183844: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x183844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x183848: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183848u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18384c: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x18384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183850: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183854: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x183854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x183858: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x183858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18385c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18385cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183860: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183864: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x183864u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x183868: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x183868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18386c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18386cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x183870: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x183870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x183874: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183878: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x183878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18387c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x18387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x183880: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x183880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x183884: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x183884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183888: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18388c: 0xc05f728  jal         func_17DCA0
    ctx->pc = 0x18388Cu;
    SET_GPR_U32(ctx, 31, 0x183894u);
    ctx->pc = 0x17DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DCA0u, 0x18388Cu, 0x183894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183894u;
label_183894:
    // 0x183894: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x183894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x183898: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183898u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18389c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x18389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1838a0: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1838a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1838a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1838a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1838a8: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1838a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1838ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1838acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1838b0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1838b4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1838b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1838b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1838b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->pc = 0x1838bcu;
}
