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

// Function: caseD_5
// Address: 0x349e38 - 0x349ed4
void caseD_5_0x349e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x349e38");
#endif

    switch (ctx->pc) {
        case 0x349e48u: goto label_349e48;
        case 0x349e58u: goto label_349e58;
        case 0x349e70u: goto label_349e70;
        case 0x349e84u: goto label_349e84;
        case 0x349eccu: goto label_349ecc;
        default: break;
    }

    ctx->pc = 0x349e38u;

    // 0x349e38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349e3c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349e3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349e40: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x349E40u;
    SET_GPR_U32(ctx, 31, 0x349E48u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x349E40u, 0x349E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E48u;
label_349e48:
    // 0x349e48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349e4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x349e4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x349e50: 0xc05cd10  jal         func_173440
    ctx->pc = 0x349E50u;
    SET_GPR_U32(ctx, 31, 0x349E58u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349E50u, 0x349E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E58u;
label_349e58:
    // 0x349e58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x349e58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x349e5c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x349e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349e60: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x349e60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x349e64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349e64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349e68: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x349E68u;
    SET_GPR_U32(ctx, 31, 0x349E70u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349E68u, 0x349E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E70u;
label_349e70:
    // 0x349e70: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x349e70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x349e74: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x349e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349e78: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x349e78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x349e7c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x349E7Cu;
    SET_GPR_U32(ctx, 31, 0x349E84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349E7Cu, 0x349E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349E84u;
label_349e84:
    // 0x349e84: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x349e84u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x349e88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349e8c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x349e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x349e90: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x349E90u;
    {
        const bool branch_taken_0x349e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349e90) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349E98u;
    // 0x349e98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349e9c: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x349e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x349ea0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x349EA0u;
    {
        const bool branch_taken_0x349ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349ea0) {
            ctx->pc = 0x349ED4u;
            return;
        }
    }
    ctx->pc = 0x349EA8u;
    // 0x349ea8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349eac: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x349eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349eb0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x349eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x349eb4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x349eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x349eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349ebc: 0x0  nop
    ctx->pc = 0x349ebcu;
    // NOP
    // 0x349ec0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x349ec0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349ec4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x349EC4u;
    SET_GPR_U32(ctx, 31, 0x349ECCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x349EC4u, 0x349ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349ECCu;
label_349ecc:
    // 0x349ecc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349ed0: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x349ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x349ed4u;
}
