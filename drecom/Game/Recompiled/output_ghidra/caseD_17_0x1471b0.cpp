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

// Function: caseD_17
// Address: 0x1471b0 - 0x14721c
void caseD_17_0x1471b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x1471b0");
#endif

    switch (ctx->pc) {
        case 0x1471c0u: goto label_1471c0;
        case 0x1471d0u: goto label_1471d0;
        case 0x1471e4u: goto label_1471e4;
        case 0x1471f4u: goto label_1471f4;
        default: break;
    }

    ctx->pc = 0x1471b0u;

    // 0x1471b0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1471b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1471b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1471b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1471b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1471B8u;
    SET_GPR_U32(ctx, 31, 0x1471C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1471B8u, 0x1471C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471C0u;
label_1471c0:
    // 0x1471c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1471c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1471c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1471c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1471c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1471C8u;
    SET_GPR_U32(ctx, 31, 0x1471D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1471C8u, 0x1471D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471D0u;
label_1471d0:
    // 0x1471d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1471d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1471d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1471d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1471d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1471d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1471dc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1471DCu;
    SET_GPR_U32(ctx, 31, 0x1471E4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1471DCu, 0x1471E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471E4u;
label_1471e4:
    // 0x1471e4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1471e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1471e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1471e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1471ec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1471ECu;
    SET_GPR_U32(ctx, 31, 0x1471F4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1471ECu, 0x1471F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1471F4u;
label_1471f4:
    // 0x1471f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1471f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1471f8: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1471f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1471fc: 0x10600102  beqz        $v1, . + 4 + (0x102 << 2)
    ctx->pc = 0x1471FCu;
    {
        const bool branch_taken_0x1471fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1471fc) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x147204u;
    // 0x147204: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147208: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x147208u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14720c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x14720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x147210: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x147210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x147214: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x147214u;
    {
        const bool branch_taken_0x147214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147214) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x14721Cu;
}
