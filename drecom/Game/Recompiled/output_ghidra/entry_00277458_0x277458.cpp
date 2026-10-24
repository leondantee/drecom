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

// Function: entry_00277458
// Address: 0x277458 - 0x2774c0
void entry_00277458_0x277458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277458_0x277458");
#endif

    switch (ctx->pc) {
        case 0x27747cu: goto label_27747c;
        case 0x277488u: goto label_277488;
        case 0x2774acu: goto label_2774ac;
        case 0x2774b8u: goto label_2774b8;
        default: break;
    }

    ctx->pc = 0x277458u;

    // 0x277458: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27745c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277460: 0x2442da60  addiu       $v0, $v0, -0x25A0
    ctx->pc = 0x277460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957664));
    // 0x277464: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x277464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277468: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x277468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27746c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27746cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277470: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277470u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277474u;
    SET_GPR_U32(ctx, 31, 0x27747Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277474u, 0x27747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27747Cu;
label_27747c:
    // 0x27747c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27747cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277480: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277480u;
    SET_GPR_U32(ctx, 31, 0x277488u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277480u, 0x277488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277488u;
label_277488:
    // 0x277488: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27748c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277490: 0x2442da60  addiu       $v0, $v0, -0x25A0
    ctx->pc = 0x277490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957664));
    // 0x277494: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x277494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277498: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x277498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27749c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27749cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2774a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2774a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2774a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2774A4u;
    SET_GPR_U32(ctx, 31, 0x2774ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2774A4u, 0x2774ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774ACu;
label_2774ac:
    // 0x2774ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2774acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2774b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2774B0u;
    SET_GPR_U32(ctx, 31, 0x2774B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2774B0u, 0x2774B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774B8u;
label_2774b8:
    // 0x2774b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2774b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2774bc: 0x0  nop
    ctx->pc = 0x2774bcu;
    // NOP
    ctx->pc = 0x2774c0u;
}
