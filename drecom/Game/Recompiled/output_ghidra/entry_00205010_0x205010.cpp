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

// Function: entry_00205010
// Address: 0x205010 - 0x205090
void entry_00205010_0x205010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205010_0x205010");
#endif

    switch (ctx->pc) {
        case 0x205040u: goto label_205040;
        case 0x205084u: goto label_205084;
        default: break;
    }

    ctx->pc = 0x205010u;

    // 0x205010: 0x3c063b44  lui         $a2, 0x3B44
    ctx->pc = 0x205010u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15172 << 16));
    // 0x205014: 0x34c59ba6  ori         $a1, $a2, 0x9BA6
    ctx->pc = 0x205014u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39846);
    // 0x205018: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x205018u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20501c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x20501cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205020: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x205020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x205024: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x205024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x205028: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x205028u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20502c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20502cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205030: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x205030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x205034: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x205034u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205038: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205038u;
    SET_GPR_U32(ctx, 31, 0x205040u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205038u, 0x205040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205040u;
label_205040:
    // 0x205040: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x205040u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205044: 0x3c063e19  lui         $a2, 0x3E19
    ctx->pc = 0x205044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15897 << 16));
    // 0x205048: 0x34c5999a  ori         $a1, $a2, 0x999A
    ctx->pc = 0x205048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x20504c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20504cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205050: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x205050u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205054: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x205054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x205058: 0x8c4308c0  lw          $v1, 0x8C0($v0)
    ctx->pc = 0x205058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2240)));
    // 0x20505c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x20505cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x205060: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x205060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x205064: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x205064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x205068: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x205068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20506c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x20506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x205070: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x205070u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205074: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x205074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205078: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x205078u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20507c: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x20507Cu;
    SET_GPR_U32(ctx, 31, 0x205084u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x20507Cu, 0x205084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205084u;
label_205084:
    // 0x205084: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x205084u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205088: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x205088u;
    {
        const bool branch_taken_0x205088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205088) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x205090u;
}
