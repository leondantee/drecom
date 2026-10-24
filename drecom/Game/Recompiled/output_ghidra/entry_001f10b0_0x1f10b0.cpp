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

// Function: entry_001f10b0
// Address: 0x1f10b0 - 0x1f1120
void entry_001f10b0_0x1f10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f10b0_0x1f10b0");
#endif

    switch (ctx->pc) {
        case 0x1f10d0u: goto label_1f10d0;
        case 0x1f10e4u: goto label_1f10e4;
        case 0x1f111cu: goto label_1f111c;
        default: break;
    }

    ctx->pc = 0x1f10b0u;

    // 0x1f10b0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10b4: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x1f10b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x1f10b8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f10b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10bc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f10bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f10c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f10c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f10c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f10c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f10c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F10C8u;
    SET_GPR_U32(ctx, 31, 0x1F10D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F10C8u, 0x1F10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10D0u;
label_1f10d0:
    // 0x1f10d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f10d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f10d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10d8: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x1f10d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f10dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F10DCu;
    SET_GPR_U32(ctx, 31, 0x1F10E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F10DCu, 0x1F10E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10E4u;
label_1f10e4:
    // 0x1f10e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f10e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f10e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f10e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f10ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f10f0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F10F0u;
    {
        const bool branch_taken_0x1f10f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f10f0) {
            ctx->pc = 0x1F1120u;
            return;
        }
    }
    ctx->pc = 0x1F10F8u;
    // 0x1f10f8: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10fc: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f10fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f1100: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f1100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f1104: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1108: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1f1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1f110c: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1f110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1f1110: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1114: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1114u;
    SET_GPR_U32(ctx, 31, 0x1F111Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1114u, 0x1F111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F111Cu;
label_1f111c:
    // 0x1f111c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f111cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1f1120u;
}
