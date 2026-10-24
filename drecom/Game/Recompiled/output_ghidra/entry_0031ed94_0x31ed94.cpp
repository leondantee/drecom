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

// Function: entry_0031ed94
// Address: 0x31ed94 - 0x31ee0c
void entry_0031ed94_0x31ed94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ed94_0x31ed94");
#endif

    switch (ctx->pc) {
        case 0x31edc4u: goto label_31edc4;
        case 0x31edd0u: goto label_31edd0;
        case 0x31ee00u: goto label_31ee00;
        default: break;
    }

    ctx->pc = 0x31ed94u;

    // 0x31ed94: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31ed98: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31ed98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ed9c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31ed9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31eda0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31eda4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31eda8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31edac: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31edacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31edb0: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
    // 0x31edb4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31edb4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31edb8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31edb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31edbc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31EDBCu;
    SET_GPR_U32(ctx, 31, 0x31EDC4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31EDBCu, 0x31EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDC4u;
label_31edc4:
    // 0x31edc4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31edc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31edc8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31EDC8u;
    SET_GPR_U32(ctx, 31, 0x31EDD0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31EDC8u, 0x31EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDD0u;
label_31edd0:
    // 0x31edd0: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x31edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x31edd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31edd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31edd8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31edd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31eddc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31ede0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31ede0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31ede4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31ede8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31ede8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31edec: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
    // 0x31edf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31edf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31edf4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31edf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31edf8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31EDF8u;
    SET_GPR_U32(ctx, 31, 0x31EE00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31EDF8u, 0x31EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE00u;
label_31ee00:
    // 0x31ee00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31ee00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ee04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31EE04u;
    SET_GPR_U32(ctx, 31, 0x31EE0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31EE04u, 0x31EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EE0Cu;
}
