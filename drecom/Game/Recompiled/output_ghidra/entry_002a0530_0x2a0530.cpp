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

// Function: entry_002a0530
// Address: 0x2a0530 - 0x2a05f0
void entry_002a0530_0x2a0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0530_0x2a0530");
#endif

    switch (ctx->pc) {
        case 0x2a055cu: goto label_2a055c;
        case 0x2a0588u: goto label_2a0588;
        case 0x2a05a0u: goto label_2a05a0;
        case 0x2a05ccu: goto label_2a05cc;
        case 0x2a05ecu: goto label_2a05ec;
        default: break;
    }

    ctx->pc = 0x2a0530u;

    // 0x2a0530: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a0530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0534: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2a0534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2a0538: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a0538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a053c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a053cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a0540: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x2a0540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2a0544: 0x1480002a  bnez        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A0544u;
    {
        const bool branch_taken_0x2a0544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0544) {
            ctx->pc = 0x2A05F0u;
            return;
        }
    }
    ctx->pc = 0x2A054Cu;
    // 0x2a054c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2a054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a0550: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a0550u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a0554: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0554u;
    SET_GPR_U32(ctx, 31, 0x2A055Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0554u, 0x2A055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A055Cu;
label_2a055c:
    // 0x2a055c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a055cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0560: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x2a0560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0564: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a0564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0568: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2a0568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a056c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a056cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0570: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x2a0570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a0574: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a0574u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0578: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a0578u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a057c: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2a057cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0580: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0580u;
    SET_GPR_U32(ctx, 31, 0x2A0588u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0580u, 0x2A0588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0588u;
label_2a0588:
    // 0x2a0588: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a058c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0590: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2a0590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a0594: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0598: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0598u;
    SET_GPR_U32(ctx, 31, 0x2A05A0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0598u, 0x2A05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05A0u;
label_2a05a0:
    // 0x2a05a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a05a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a05a4: 0x8fa60168  lw          $a2, 0x168($sp)
    ctx->pc = 0x2a05a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a05a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a05a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a05ac: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2a05acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a05b0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a05b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a05b4: 0x27a80140  addiu       $t0, $sp, 0x140
    ctx->pc = 0x2a05b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a05b8: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a05b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a05bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a05bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a05c0: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a05c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a05c4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A05C4u;
    SET_GPR_U32(ctx, 31, 0x2A05CCu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A05C4u, 0x2A05CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05CCu;
label_2a05cc:
    // 0x2a05cc: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a05ccu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a05d0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x2a05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a05d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a05d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a05d8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a05dc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2a05dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2a05e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a05e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a05e4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A05E4u;
    SET_GPR_U32(ctx, 31, 0x2A05ECu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A05E4u, 0x2A05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05ECu;
label_2a05ec:
    // 0x2a05ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a05ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a05f0u;
}
