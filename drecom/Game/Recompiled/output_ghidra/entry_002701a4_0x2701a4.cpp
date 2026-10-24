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

// Function: entry_002701a4
// Address: 0x2701a4 - 0x270234
void entry_002701a4_0x2701a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002701a4_0x2701a4");
#endif

    switch (ctx->pc) {
        case 0x2701b4u: goto label_2701b4;
        case 0x2701c4u: goto label_2701c4;
        case 0x2701d8u: goto label_2701d8;
        case 0x2701f0u: goto label_2701f0;
        case 0x270200u: goto label_270200;
        default: break;
    }

    ctx->pc = 0x2701a4u;

    // 0x2701a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2701a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2701a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2701a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2701ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2701ACu;
    SET_GPR_U32(ctx, 31, 0x2701B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2701ACu, 0x2701B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701B4u;
label_2701b4:
    // 0x2701b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2701b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2701b8: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2701b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2701bc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2701BCu;
    SET_GPR_U32(ctx, 31, 0x2701C4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2701BCu, 0x2701C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701C4u;
label_2701c4:
    // 0x2701c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2701c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2701c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2701c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2701cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2701ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2701d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2701D0u;
    SET_GPR_U32(ctx, 31, 0x2701D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2701D0u, 0x2701D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701D8u;
label_2701d8:
    // 0x2701d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2701d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2701dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2701dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2701e0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2701e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2701e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2701e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2701e8: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x2701E8u;
    SET_GPR_U32(ctx, 31, 0x2701F0u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x2701E8u, 0x2701F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701F0u;
label_2701f0:
    // 0x2701f0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2701f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2701f4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2701f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2701f8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x2701F8u;
    SET_GPR_U32(ctx, 31, 0x270200u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x2701F8u, 0x270200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270200u;
label_270200:
    // 0x270200: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x270200u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x270204: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x270204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270208: 0x910309e7  lbu         $v1, 0x9E7($t0)
    ctx->pc = 0x270208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
    // 0x27020c: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x27020Cu;
    {
        const bool branch_taken_0x27020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27020c) {
            ctx->pc = 0x270310u;
            return;
        }
    }
    ctx->pc = 0x270214u;
    // 0x270214: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x270214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270218: 0xa0a010a8  sb          $zero, 0x10A8($a1)
    ctx->pc = 0x270218u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x27021c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x27021cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270220: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x270220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x270224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x270224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x270228: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x270228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x27022c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x27022Cu;
    {
        const bool branch_taken_0x27022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27022c) {
            ctx->pc = 0x270310u;
            return;
        }
    }
    ctx->pc = 0x270234u;
}
