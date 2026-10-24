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

// Function: entry_00142694
// Address: 0x142694 - 0x142720
void entry_00142694_0x142694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142694_0x142694");
#endif

    switch (ctx->pc) {
        case 0x1426a4u: goto label_1426a4;
        case 0x1426bcu: goto label_1426bc;
        case 0x1426e4u: goto label_1426e4;
        case 0x14270cu: goto label_14270c;
        default: break;
    }

    ctx->pc = 0x142694u;

    // 0x142694: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142698: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x142698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14269c: 0xc067de8  jal         func_19F7A0
    ctx->pc = 0x14269Cu;
    SET_GPR_U32(ctx, 31, 0x1426A4u);
    ctx->pc = 0x19F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F7A0u, 0x14269Cu, 0x1426A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426A4u;
label_1426a4:
    // 0x1426a4: 0x3c1401f0  lui         $s4, 0x1F0
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)496 << 16));
    // 0x1426a8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1426a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1426ac: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1426acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1426b0: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x1426b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1426b4: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1426B4u;
    SET_GPR_U32(ctx, 31, 0x1426BCu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1426B4u, 0x1426BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426BCu;
label_1426bc:
    // 0x1426bc: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1426bcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1426c0: 0x2979821  addu        $s3, $s4, $s7
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x1426c4: 0x2663000f  addiu       $v1, $s3, 0xF
    ctx->pc = 0x1426c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x1426c8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1426c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1426cc: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x1426ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1426d0: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1426d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1426d4: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1426d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1426d8: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x1426d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1426dc: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1426DCu;
    SET_GPR_U32(ctx, 31, 0x1426E4u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1426DCu, 0x1426E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426E4u;
label_1426e4:
    // 0x1426e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1426e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1426e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1426e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1426ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1426ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1426f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1426f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1426f4: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1426f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1426f8: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x1426f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1426fc: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1426fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x142700: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x142700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x142704: 0xc059190  jal         func_164640
    ctx->pc = 0x142704u;
    SET_GPR_U32(ctx, 31, 0x14270Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x142704u, 0x14270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14270Cu;
label_14270c:
    // 0x14270c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x14270cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142710: 0x24160924  addiu       $s6, $zero, 0x924
    ctx->pc = 0x142710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
    // 0x142714: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14271c: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x14271cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x142720u;
}
