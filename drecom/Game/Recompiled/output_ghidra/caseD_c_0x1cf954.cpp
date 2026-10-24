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

// Function: caseD_c
// Address: 0x1cf954 - 0x1cf9f4
void caseD_c_0x1cf954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x1cf954");
#endif

    switch (ctx->pc) {
        case 0x1cf974u: goto label_1cf974;
        case 0x1cf980u: goto label_1cf980;
        case 0x1cf9d0u: goto label_1cf9d0;
        default: break;
    }

    ctx->pc = 0x1cf954u;

    // 0x1cf954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf958: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf95c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1cf95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1cf960: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x1cf960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1cf964: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cf964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cf968: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1cf968u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cf96c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CF96Cu;
    SET_GPR_U32(ctx, 31, 0x1CF974u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CF96Cu, 0x1CF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF974u;
label_1cf974:
    // 0x1cf974: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1cf974u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf978: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1CF978u;
    SET_GPR_U32(ctx, 31, 0x1CF980u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1CF978u, 0x1CF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF980u;
label_1cf980:
    // 0x1cf980: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf980u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf984: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1cf984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cf988: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x1cf988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x1cf98c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1cf98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1cf990: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1cf990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1cf994: 0x24a29230  addiu       $v0, $a1, -0x6DD0
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939184));
    // 0x1cf998: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1cf998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf99c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1cf99cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cf9a0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1cf9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1cf9a4: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1cf9a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cf9a8: 0x3c07469c  lui         $a3, 0x469C
    ctx->pc = 0x1cf9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18076 << 16));
    // 0x1cf9ac: 0x34e64000  ori         $a2, $a3, 0x4000
    ctx->pc = 0x1cf9acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x1cf9b0: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1cf9b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf9b4: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1cf9b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf9b8: 0x8d020130  lw          $v0, 0x130($t0)
    ctx->pc = 0x1cf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x1cf9bc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1cf9bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1cf9c0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1cf9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1cf9c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cf9c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cf9c8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CF9C8u;
    SET_GPR_U32(ctx, 31, 0x1CF9D0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CF9C8u, 0x1CF9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF9D0u;
label_1cf9d0:
    // 0x1cf9d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1cf9d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cf9d4: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x1cf9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
    // 0x1cf9d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cf9d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf9dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf9e0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cf9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1cf9e4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf9e8: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1cf9e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1cf9ec: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1cf9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cf9f0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1cf9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1cf9f4u;
}
