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

// Function: entry_002a7bbc
// Address: 0x2a7bbc - 0x2a7c4c
void entry_002a7bbc_0x2a7bbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7bbc_0x2a7bbc");
#endif

    switch (ctx->pc) {
        case 0x2a7bc8u: goto label_2a7bc8;
        case 0x2a7bf4u: goto label_2a7bf4;
        case 0x2a7c0cu: goto label_2a7c0c;
        case 0x2a7c24u: goto label_2a7c24;
        case 0x2a7c44u: goto label_2a7c44;
        default: break;
    }

    ctx->pc = 0x2a7bbcu;

    // 0x2a7bbc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a7bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7bc0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A7BC0u;
    SET_GPR_U32(ctx, 31, 0x2A7BC8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A7BC0u, 0x2A7BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BC8u;
label_2a7bc8:
    // 0x2a7bc8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a7bc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7bcc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2a7bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7bd0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a7bd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a7bd4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2a7bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a7bd8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a7bd8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a7bdc: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2a7bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7be0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a7be0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a7be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7be8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a7be8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7bec: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A7BECu;
    SET_GPR_U32(ctx, 31, 0x2A7BF4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A7BECu, 0x2A7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BF4u;
label_2a7bf4:
    // 0x2a7bf4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7bf8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a7bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a7bfc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a7bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7c00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7c04: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A7C04u;
    SET_GPR_U32(ctx, 31, 0x2A7C0Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A7C04u, 0x2A7C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C0Cu;
label_2a7c0c:
    // 0x2a7c0c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c10: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a7c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a7c14: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a7c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7c18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7c1c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A7C1Cu;
    SET_GPR_U32(ctx, 31, 0x2A7C24u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A7C1Cu, 0x2A7C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C24u;
label_2a7c24:
    // 0x2a7c24: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a7c24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7c28: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7c2c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a7c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a7c30: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a7c34: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a7c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a7c38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a7c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7c3c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A7C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A7C44u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A7C3Cu, 0x2A7C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C44u;
label_2a7c44:
    // 0x2a7c44: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2A7C44u;
    {
        const bool branch_taken_0x2a7c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c44) {
            ctx->pc = 0x2A7D24u;
            return;
        }
    }
    ctx->pc = 0x2A7C4Cu;
}
