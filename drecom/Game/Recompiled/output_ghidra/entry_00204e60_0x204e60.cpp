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

// Function: entry_00204e60
// Address: 0x204e60 - 0x204ee4
void entry_00204e60_0x204e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204e60_0x204e60");
#endif

    switch (ctx->pc) {
        case 0x204ea4u: goto label_204ea4;
        case 0x204ed0u: goto label_204ed0;
        default: break;
    }

    ctx->pc = 0x204e60u;

    // 0x204e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e64: 0x94450094  lhu         $a1, 0x94($v0)
    ctx->pc = 0x204e64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x204e68: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x204E68u;
    {
        const bool branch_taken_0x204e68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x204e68) {
            ctx->pc = 0x204EE4u;
            return;
        }
    }
    ctx->pc = 0x204E70u;
    // 0x204e70: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204e70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204e74: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204e78: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x204e78u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204e7c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e80: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204e80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204e84: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x204e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204e88: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204e88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204e8c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204e8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204e90: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x204e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e94: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x204e94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204e98: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204e98u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204e9c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204E9Cu;
    SET_GPR_U32(ctx, 31, 0x204EA4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204E9Cu, 0x204EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204EA4u;
label_204ea4:
    // 0x204ea4: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204ea8: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204eac: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204eacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204eb0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204eb4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204eb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204eb8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204ebc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204ebcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ec0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204ec4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204ec4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ec8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204EC8u;
    SET_GPR_U32(ctx, 31, 0x204ED0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204EC8u, 0x204ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204ED0u;
label_204ed0:
    // 0x204ed0: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x204ed0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ed4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204ed8: 0x94450094  lhu         $a1, 0x94($v0)
    ctx->pc = 0x204ed8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x204edc: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x204edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x204ee0: 0xa4460094  sh          $a2, 0x94($v0)
    ctx->pc = 0x204ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x204ee4u;
}
