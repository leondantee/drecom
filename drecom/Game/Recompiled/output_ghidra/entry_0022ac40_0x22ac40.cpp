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

// Function: entry_0022ac40
// Address: 0x22ac40 - 0x22acb0
void entry_0022ac40_0x22ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ac40_0x22ac40");
#endif

    switch (ctx->pc) {
        case 0x22ac64u: goto label_22ac64;
        case 0x22ac70u: goto label_22ac70;
        case 0x22aca8u: goto label_22aca8;
        default: break;
    }

    ctx->pc = 0x22ac40u;

    // 0x22ac40: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x22ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x22ac44: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x22ac44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x22ac48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x22ac48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ac4c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ac50: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x22ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x22ac54: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22ac58: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ac58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22ac5c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22AC5Cu;
    SET_GPR_U32(ctx, 31, 0x22AC64u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22AC5Cu, 0x22AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC64u;
label_22ac64:
    // 0x22ac64: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22ac64u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22ac68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22AC68u;
    SET_GPR_U32(ctx, 31, 0x22AC70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22AC68u, 0x22AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC70u;
label_22ac70:
    // 0x22ac70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22ac70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22ac74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22ac74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22ac78: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22ac7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22AC7Cu;
    {
        const bool branch_taken_0x22ac7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac7c) {
            ctx->pc = 0x22ACB0u;
            return;
        }
    }
    ctx->pc = 0x22AC84u;
    // 0x22ac84: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ac88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x22ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x22ac8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x22ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22ac90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22ac90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22ac94: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x22ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x22ac98: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x22ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x22ac9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22ac9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22aca0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22ACA0u;
    SET_GPR_U32(ctx, 31, 0x22ACA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22ACA0u, 0x22ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACA8u;
label_22aca8:
    // 0x22aca8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x22ACA8u;
    {
        const bool branch_taken_0x22aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22aca8) {
            ctx->pc = 0x22ACD4u;
            return;
        }
    }
    ctx->pc = 0x22ACB0u;
}
