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

// Function: entry_002a02c0
// Address: 0x2a02c0 - 0x2a0340
void entry_002a02c0_0x2a02c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a02c0_0x2a02c0");
#endif

    switch (ctx->pc) {
        case 0x2a02ccu: goto label_2a02cc;
        case 0x2a02e8u: goto label_2a02e8;
        case 0x2a0304u: goto label_2a0304;
        case 0x2a0320u: goto label_2a0320;
        default: break;
    }

    ctx->pc = 0x2a02c0u;

    // 0x2a02c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2a02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a02c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A02C4u;
    SET_GPR_U32(ctx, 31, 0x2A02CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A02C4u, 0x2A02CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02CCu;
label_2a02cc:
    // 0x2a02cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a02ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a02d0: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a02d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a02d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a02d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a02d8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a02d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a02dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a02dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a02e0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A02E0u;
    SET_GPR_U32(ctx, 31, 0x2A02E8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A02E0u, 0x2A02E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A02E8u;
label_2a02e8:
    // 0x2a02e8: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a02e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a02ec: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x2a02ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a02f0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2a02f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2a02f4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a02f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a02f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a02fc: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A02FCu;
    SET_GPR_U32(ctx, 31, 0x2A0304u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A02FCu, 0x2A0304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0304u;
label_2a0304:
    // 0x2a0304: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0304u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0308: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a030c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a030cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0310: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a0310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a0314: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0318: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0318u;
    SET_GPR_U32(ctx, 31, 0x2A0320u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0318u, 0x2A0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0320u;
label_2a0320:
    // 0x2a0320: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0320u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0324: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0328: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a0328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a032c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a0330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0334: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a0334u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0338: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0338u;
    SET_GPR_U32(ctx, 31, 0x2A0340u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0338u, 0x2A0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0340u;
}
