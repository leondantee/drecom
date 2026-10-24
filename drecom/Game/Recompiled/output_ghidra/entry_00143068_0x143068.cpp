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

// Function: entry_00143068
// Address: 0x143068 - 0x1430e4
void entry_00143068_0x143068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143068_0x143068");
#endif

    switch (ctx->pc) {
        case 0x143090u: goto label_143090;
        case 0x1430ccu: goto label_1430cc;
        default: break;
    }

    ctx->pc = 0x143068u;

    // 0x143068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14306c: 0x94260084  lhu         $a2, 0x84($at)
    ctx->pc = 0x14306cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x143070: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x143070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x143074: 0x30440800  andi        $a0, $v0, 0x800
    ctx->pc = 0x143074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x143078: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x143078u;
    {
        const bool branch_taken_0x143078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143078) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x143080u;
    // 0x143080: 0x240601e0  addiu       $a2, $zero, 0x1E0
    ctx->pc = 0x143080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x143084: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x143084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x143088: 0xc067e5c  jal         func_19F970
    ctx->pc = 0x143088u;
    SET_GPR_U32(ctx, 31, 0x143090u);
    ctx->pc = 0x19F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F970u, 0x143088u, 0x143090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143090u;
label_143090:
    // 0x143090: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x143090u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x143094: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x143094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x143098: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x143098u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14309c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14309cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1430a0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x1430a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1430a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1430a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1430a8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1430a8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1430ac: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x1430acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1430b0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1430b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1430b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1430b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1430b8: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x1430b8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1430bc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1430bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1430c0: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x1430c0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1430c4: 0xc059190  jal         func_164640
    ctx->pc = 0x1430C4u;
    SET_GPR_U32(ctx, 31, 0x1430CCu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1430C4u, 0x1430CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1430CCu;
label_1430cc:
    // 0x1430cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1430ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1430d0: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1430d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1430d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1430d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1430d8: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x1430d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1430dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1430DCu;
    {
        const bool branch_taken_0x1430dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1430dc) {
            ctx->pc = 0x143118u;
            return;
        }
    }
    ctx->pc = 0x1430E4u;
}
