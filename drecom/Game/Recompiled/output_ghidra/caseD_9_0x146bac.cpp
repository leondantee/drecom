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

// Function: caseD_9
// Address: 0x146bac - 0x146c2c
void caseD_9_0x146bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x146bac");
#endif

    switch (ctx->pc) {
        case 0x146bbcu: goto label_146bbc;
        case 0x146bccu: goto label_146bcc;
        case 0x146be4u: goto label_146be4;
        case 0x146bf4u: goto label_146bf4;
        default: break;
    }

    ctx->pc = 0x146bacu;

    // 0x146bac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146bb0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x146bb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146bb4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x146BB4u;
    SET_GPR_U32(ctx, 31, 0x146BBCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x146BB4u, 0x146BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BBCu;
label_146bbc:
    // 0x146bbc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146bbcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146bc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146bc4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x146BC4u;
    SET_GPR_U32(ctx, 31, 0x146BCCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x146BC4u, 0x146BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BCCu;
label_146bcc:
    // 0x146bcc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146bccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146bd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x146bd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146bd8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x146bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146bdc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x146BDCu;
    SET_GPR_U32(ctx, 31, 0x146BE4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x146BDCu, 0x146BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BE4u;
label_146be4:
    // 0x146be4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x146be4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146be8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x146be8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x146bec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x146BECu;
    SET_GPR_U32(ctx, 31, 0x146BF4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x146BECu, 0x146BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146BF4u;
label_146bf4:
    // 0x146bf4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146bf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146bf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146bfc: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x146bfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x146c00: 0x10a00281  beqz        $a1, . + 4 + (0x281 << 2)
    ctx->pc = 0x146C00u;
    {
        const bool branch_taken_0x146c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c00) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146C08u;
    // 0x146c08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x146c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146c0c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146c10: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146c10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146c14: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x146c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x146c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146c1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x146c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146c20: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x146c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x146c24: 0x10000278  b           . + 4 + (0x278 << 2)
    ctx->pc = 0x146C24u;
    {
        const bool branch_taken_0x146c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c24) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146C2Cu;
}
