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

// Function: caseD_7
// Address: 0x26f76c - 0x26f7e4
void caseD_7_0x26f76c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x26f76c");
#endif

    switch (ctx->pc) {
        case 0x26f77cu: goto label_26f77c;
        case 0x26f790u: goto label_26f790;
        case 0x26f79cu: goto label_26f79c;
        default: break;
    }

    ctx->pc = 0x26f76cu;

    // 0x26f76c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f770: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f770u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f774: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26F774u;
    SET_GPR_U32(ctx, 31, 0x26F77Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F774u, 0x26F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F77Cu;
label_26f77c:
    // 0x26f77c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f77cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f780: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f784: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f784u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f788: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x26F788u;
    SET_GPR_U32(ctx, 31, 0x26F790u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x26F788u, 0x26F790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F790u;
label_26f790:
    // 0x26f790: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f794: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26F794u;
    SET_GPR_U32(ctx, 31, 0x26F79Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F794u, 0x26F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F79Cu;
label_26f79c:
    // 0x26f79c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f7a0: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x26f7a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x26f7a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26f7a8: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x26f7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x26f7ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f7b0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x26f7b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x26f7b4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26F7B4u;
    {
        const bool branch_taken_0x26f7b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f7b4) {
            ctx->pc = 0x26F7E4u;
            return;
        }
    }
    ctx->pc = 0x26F7BCu;
    // 0x26f7bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f7bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f7c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f7c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f7c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x26f7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f7c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x26f7c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f7cc: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x26f7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x26f7d0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x26f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x26f7d4: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x26f7d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f7d8: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x26f7d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26f7dc: 0xc059190  jal         func_164640
    ctx->pc = 0x26F7DCu;
    SET_GPR_U32(ctx, 31, 0x26F7E4u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x26F7DCu, 0x26F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7E4u;
}
