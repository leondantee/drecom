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

// Function: caseD_19
// Address: 0x147290 - 0x1472f4
void caseD_19_0x147290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_19_0x147290");
#endif

    switch (ctx->pc) {
        case 0x1472a0u: goto label_1472a0;
        case 0x1472b0u: goto label_1472b0;
        case 0x1472c8u: goto label_1472c8;
        case 0x1472d8u: goto label_1472d8;
        default: break;
    }

    ctx->pc = 0x147290u;

    // 0x147290: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147294: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x147294u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x147298: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x147298u;
    SET_GPR_U32(ctx, 31, 0x1472A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x147298u, 0x1472A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472A0u;
label_1472a0:
    // 0x1472a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1472a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1472a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1472a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1472a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1472A8u;
    SET_GPR_U32(ctx, 31, 0x1472B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1472A8u, 0x1472B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472B0u;
label_1472b0:
    // 0x1472b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1472b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1472b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1472b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1472b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1472b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1472bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1472bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1472c0: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1472C0u;
    SET_GPR_U32(ctx, 31, 0x1472C8u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1472C0u, 0x1472C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472C8u;
label_1472c8:
    // 0x1472c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1472c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1472cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1472ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1472d0: 0xc05cf54  jal         func_173D50
    ctx->pc = 0x1472D0u;
    SET_GPR_U32(ctx, 31, 0x1472D8u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x1472D0u, 0x1472D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472D8u;
label_1472d8:
    // 0x1472d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1472d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1472dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1472DCu;
    {
        const bool branch_taken_0x1472dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1472dc) {
            ctx->pc = 0x1472F4u;
            return;
        }
    }
    ctx->pc = 0x1472E4u;
    // 0x1472e4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1472e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1472e8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x1472e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1472ec: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1472ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1472f0: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x1472f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1472f4u;
}
