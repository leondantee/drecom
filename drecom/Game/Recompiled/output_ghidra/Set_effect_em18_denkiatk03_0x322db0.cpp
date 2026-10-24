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

// Function: Set_effect_em18_denkiatk03
// Address: 0x322db0 - 0x322f90
void Set_effect_em18_denkiatk03_0x322db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em18_denkiatk03_0x322db0");
#endif

    switch (ctx->pc) {
        case 0x322e08u: goto label_322e08;
        case 0x322e20u: goto label_322e20;
        case 0x322e3cu: goto label_322e3c;
        case 0x322e60u: goto label_322e60;
        case 0x322ec0u: goto label_322ec0;
        case 0x322ee0u: goto label_322ee0;
        default: break;
    }

    ctx->pc = 0x322db0u;

    // 0x322db0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x322db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x322db4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x322db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x322db8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x322db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x322dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x322dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x322dc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x322dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x322dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x322dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x322dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x322dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x322dcc: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x322dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x322dd0: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x322dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x322dd4: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x322dd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x322dd8: 0xe7ad00a8  swc1        $f13, 0xA8($sp)
    ctx->pc = 0x322dd8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x322ddc: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x322ddcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322de0: 0x2413000e  addiu       $s3, $zero, 0xE
    ctx->pc = 0x322de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x322de4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x322de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x322de8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x322de8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322dec: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x322decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x322df0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x322df0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x322df4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x322df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x322df8: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x322df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x322dfc: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x322dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x322e00: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x322E00u;
    SET_GPR_U32(ctx, 31, 0x322E08u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x322E00u, 0x322E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E08u;
label_322e08:
    // 0x322e08: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x322e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x322e0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x322e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x322e10: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x322e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x322e14: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x322e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x322e18: 0xc040c8c  jal         func_103230
    ctx->pc = 0x322E18u;
    SET_GPR_U32(ctx, 31, 0x322E20u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x322E20u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x322E20u) { return; }
    ctx->pc = 0x322E20u;
label_322e20:
    // 0x322e20: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x322e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x322e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322e28: 0x0  nop
    ctx->pc = 0x322e28u;
    // NOP
    // 0x322e2c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x322e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x322e30: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x322e30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322e34: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x322E34u;
    {
        const bool branch_taken_0x322e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322e34) {
            ctx->pc = 0x322F60u;
            goto label_322f60;
        }
    }
    ctx->pc = 0x322E3Cu;
label_322e3c:
    // 0x322e3c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x322e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x322e40: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x322e40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x322e44: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x322e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x322e48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x322e48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x322e4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x322e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x322e50: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x322e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x322e54: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x322e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x322e58: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x322E58u;
    SET_GPR_U32(ctx, 31, 0x322E60u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x322E58u, 0x322E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322E60u;
label_322e60:
    // 0x322e60: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x322e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x322e64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x322e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x322e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x322e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x322e6c: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x322e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x322e70: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x322e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x322e74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x322e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322e78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x322e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x322e7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x322e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x322e80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x322e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x322e84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x322e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x322e88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x322e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x322e8c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x322e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322e90: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x322e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x322e94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x322e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322e98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x322e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x322e9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x322e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x322ea0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x322ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x322ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x322ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x322ea8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x322ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x322eac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x322eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x322eb0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x322eb0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322eb4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x322eb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x322eb8: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x322EB8u;
    SET_GPR_U32(ctx, 31, 0x322EC0u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x322EB8u, 0x322EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322EC0u;
label_322ec0:
    // 0x322ec0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x322ec0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322ec4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x322ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x322ec8: 0xa2220347  sb          $v0, 0x347($s1)
    ctx->pc = 0x322ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 839), (uint8_t)GPR_U32(ctx, 2));
    // 0x322ecc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x322eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x322ed0: 0xa2220344  sb          $v0, 0x344($s1)
    ctx->pc = 0x322ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 836), (uint8_t)GPR_U32(ctx, 2));
    // 0x322ed4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x322ed4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x322ed8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x322ED8u;
    SET_GPR_U32(ctx, 31, 0x322EE0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x322ED8u, 0x322EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322EE0u;
label_322ee0:
    // 0x322ee0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x322ee0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x322ee4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x322ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x322ee8: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x322ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x322eec: 0x12030018  beq         $s0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x322EECu;
    {
        const bool branch_taken_0x322eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x322eec) {
            ctx->pc = 0x322F50u;
            goto label_322f50;
        }
    }
    ctx->pc = 0x322EF4u;
    // 0x322ef4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x322ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x322ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322efc: 0x0  nop
    ctx->pc = 0x322efcu;
    // NOP
    // 0x322f00: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x322f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x322f04: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x322f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x322f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322f0c: 0x0  nop
    ctx->pc = 0x322f0cu;
    // NOP
    // 0x322f10: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x322f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x322f14: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x322f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x322f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x322f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322f1c: 0x0  nop
    ctx->pc = 0x322f1cu;
    // NOP
    // 0x322f20: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x322f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x322f24: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x322f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322f28: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x322f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x322f2c: 0xa2000348  sb          $zero, 0x348($s0)
    ctx->pc = 0x322f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 840), (uint8_t)GPR_U32(ctx, 0));
    // 0x322f30: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x322f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x322f34: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x322f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x322f38: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x322f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322f3c: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x322f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x322f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x322f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x322f44: 0xae030334  sw          $v1, 0x334($s0)
    ctx->pc = 0x322f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 3));
    // 0x322f48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x322F48u;
    {
        const bool branch_taken_0x322f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f48) {
            ctx->pc = 0x322F58u;
            goto label_322f58;
        }
    }
    ctx->pc = 0x322F50u;
label_322f50:
    // 0x322f50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x322F50u;
    {
        const bool branch_taken_0x322f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x322f50) {
            ctx->pc = 0x322F6Cu;
            goto label_322f6c;
        }
    }
    ctx->pc = 0x322F58u;
label_322f58:
    // 0x322f58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x322f58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x322f5c: 0x0  nop
    ctx->pc = 0x322f5cu;
    // NOP
label_322f60:
    // 0x322f60: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x322f60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x322f64: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x322F64u;
    {
        const bool branch_taken_0x322f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x322f64) {
            ctx->pc = 0x322E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322e3c;
        }
    }
    ctx->pc = 0x322F6Cu;
label_322f6c:
    // 0x322f6c: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x322f6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x322f70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x322f70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x322f74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x322f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x322f78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x322f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x322f7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x322f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322f80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x322f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322f84: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x322f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x322f88: 0x3e00008  jr          $ra
    ctx->pc = 0x322F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322F90u;
}
