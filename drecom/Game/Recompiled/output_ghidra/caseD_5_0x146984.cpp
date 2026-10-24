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
// Address: 0x146984 - 0x146a00
void caseD_5_0x146984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x146984");
#endif

    switch (ctx->pc) {
        case 0x146998u: goto label_146998;
        case 0x1469a8u: goto label_1469a8;
        case 0x1469bcu: goto label_1469bc;
        case 0x1469c8u: goto label_1469c8;
        default: break;
    }

    ctx->pc = 0x146984u;

    // 0x146984: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x146984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146988: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x146988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x14698c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14698cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146990: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146990u;
    SET_GPR_U32(ctx, 31, 0x146998u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146990u, 0x146998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146998u;
label_146998:
    // 0x146998: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x146998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14699c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x14699cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1469a0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1469A0u;
    SET_GPR_U32(ctx, 31, 0x1469A8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1469A0u, 0x1469A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469A8u;
label_1469a8:
    // 0x1469a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1469a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1469ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1469b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1469b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1469b4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1469B4u;
    SET_GPR_U32(ctx, 31, 0x1469BCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1469B4u, 0x1469BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469BCu;
label_1469bc:
    // 0x1469bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1469bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1469c0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1469C0u;
    SET_GPR_U32(ctx, 31, 0x1469C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1469C0u, 0x1469C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1469C8u;
label_1469c8:
    // 0x1469c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1469c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1469cc: 0x8c641b68  lw          $a0, 0x1B68($v1)
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7016)));
    // 0x1469d0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1469D0u;
    {
        const bool branch_taken_0x1469d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469d0) {
            ctx->pc = 0x146A14u;
            return;
        }
    }
    ctx->pc = 0x1469D8u;
    // 0x1469d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1469d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1469dc: 0x8c641b64  lw          $a0, 0x1B64($v1)
    ctx->pc = 0x1469dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x1469e0: 0x2c810011  sltiu       $at, $a0, 0x11
    ctx->pc = 0x1469e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1469e4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1469E4u;
    {
        const bool branch_taken_0x1469e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469e4) {
            ctx->pc = 0x146A00u;
            return;
        }
    }
    ctx->pc = 0x1469ECu;
    // 0x1469ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1469ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1469f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1469f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1469f4: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1469f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1469f8: 0x10000303  b           . + 4 + (0x303 << 2)
    ctx->pc = 0x1469F8u;
    {
        const bool branch_taken_0x1469f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1469f8) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146A00u;
}
