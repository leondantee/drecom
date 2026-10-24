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

// Function: entry_001cfcd0
// Address: 0x1cfcd0 - 0x1cfd2c
void entry_001cfcd0_0x1cfcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfcd0_0x1cfcd0");
#endif

    switch (ctx->pc) {
        case 0x1cfcdcu: goto label_1cfcdc;
        case 0x1cfcf4u: goto label_1cfcf4;
        case 0x1cfd04u: goto label_1cfd04;
        default: break;
    }

    ctx->pc = 0x1cfcd0u;

    // 0x1cfcd0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfcd4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CFCD4u;
    SET_GPR_U32(ctx, 31, 0x1CFCDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CFCD4u, 0x1CFCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCDCu;
label_1cfcdc:
    // 0x1cfcdc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfcdcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfce0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cfce4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cfce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfce8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cfce8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cfcec: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1CFCECu;
    SET_GPR_U32(ctx, 31, 0x1CFCF4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1CFCECu, 0x1CFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFCF4u;
label_1cfcf4:
    // 0x1cfcf4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cfcf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfcf8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cfcf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cfcfc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CFCFCu;
    SET_GPR_U32(ctx, 31, 0x1CFD04u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CFCFCu, 0x1CFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFD04u;
label_1cfd04:
    // 0x1cfd04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cfd04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cfd08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfd0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1cfd0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1cfd10: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1CFD10u;
    {
        const bool branch_taken_0x1cfd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd10) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CFD18u;
    // 0x1cfd18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cfd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cfd1c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cfd20: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x1cfd20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cfd24: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1CFD24u;
    {
        const bool branch_taken_0x1cfd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd24) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CFD2Cu;
}
