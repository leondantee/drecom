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

// Function: caseD_e
// Address: 0x1c7f94 - 0x1c8034
void caseD_e_0x1c7f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1c7f94");
#endif

    switch (ctx->pc) {
        case 0x1c7fb8u: goto label_1c7fb8;
        case 0x1c7fc4u: goto label_1c7fc4;
        case 0x1c8010u: goto label_1c8010;
        default: break;
    }

    ctx->pc = 0x1c7f94u;

    // 0x1c7f94: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7f9c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c7f9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c7fa0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c7fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c7fa4: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1c7fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1c7fa8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c7fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7fac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c7facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c7fb0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C7FB0u;
    SET_GPR_U32(ctx, 31, 0x1C7FB8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C7FB0u, 0x1C7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FB8u;
label_1c7fb8:
    // 0x1c7fb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c7fb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7fbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1C7FBCu;
    SET_GPR_U32(ctx, 31, 0x1C7FC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C7FBCu, 0x1C7FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7FC4u;
label_1c7fc4:
    // 0x1c7fc4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7fc4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7fc8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c7fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c7fcc: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x1c7fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1c7fd0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1c7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c7fd4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1c7fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1c7fd8: 0x24c79230  addiu       $a3, $a2, -0x6DD0
    ctx->pc = 0x1c7fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939184));
    // 0x1c7fdc: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1c7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1c7fe0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1c7fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7fe4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1c7fe4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1c7fe8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1c7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1c7fec: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x1c7fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1c7ff0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1c7ff0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c7ff4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7ff8: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x1c7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1c7ffc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c7ffcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c8000: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1c8000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1c8004: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c8004u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8008: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C8008u;
    SET_GPR_U32(ctx, 31, 0x1C8010u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C8008u, 0x1C8010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8010u;
label_1c8010:
    // 0x1c8010: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1c8010u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c8014: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x1c8014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
    // 0x1c8018: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c8018u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c801c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c801cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8020: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1c8020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x1c8024: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c8024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c8028: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c8028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c802c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1c802cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c8030: 0xa0850002  sb          $a1, 0x2($a0)
    ctx->pc = 0x1c8030u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1c8034u;
}
