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

// Function: caseD_2
// Address: 0x319db8 - 0x31a164
void caseD_2_0x319db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x319db8");
#endif

    switch (ctx->pc) {
        case 0x319e34u: goto label_319e34;
        case 0x319e40u: goto label_319e40;
        case 0x319e9cu: goto label_319e9c;
        case 0x319ea8u: goto label_319ea8;
        case 0x319f20u: goto label_319f20;
        case 0x319f2cu: goto label_319f2c;
        case 0x319f84u: goto label_319f84;
        case 0x319f94u: goto label_319f94;
        case 0x31a024u: goto label_31a024;
        case 0x31a030u: goto label_31a030;
        case 0x31a084u: goto label_31a084;
        case 0x31a090u: goto label_31a090;
        case 0x31a114u: goto label_31a114;
        case 0x31a124u: goto label_31a124;
        default: break;
    }

    ctx->pc = 0x319db8u;

    // 0x319db8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319dbc: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x319dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x319dc0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319dc4: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x319dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x319dc8: 0x78850000  lq          $a1, 0x0($a0)
    ctx->pc = 0x319dc8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x319dcc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319dd0: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x319dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x319dd4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319dd8: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x319dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x319ddc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319ddcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319de0: 0x0  nop
    ctx->pc = 0x319de0u;
    // NOP
    // 0x319de4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319de8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x319dec: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319df0: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x319df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x319df4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319df4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319df8: 0x0  nop
    ctx->pc = 0x319df8u;
    // NOP
    // 0x319dfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319e00: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x319e04: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319e08: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x319e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x319e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319e10: 0x0  nop
    ctx->pc = 0x319e10u;
    // NOP
    // 0x319e14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319e14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319e18: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x319e1c: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x319e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x319e20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319e20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319e24: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319e28: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319e28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319e2c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x319E2Cu;
    SET_GPR_U32(ctx, 31, 0x319E34u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x319E2Cu, 0x319E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E34u;
label_319e34:
    // 0x319e34: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319e34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319e38: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x319E38u;
    SET_GPR_U32(ctx, 31, 0x319E40u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319E38u, 0x319E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E40u;
label_319e40:
    // 0x319e40: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x319e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319e44: 0x24e40120  addiu       $a0, $a3, 0x120
    ctx->pc = 0x319e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x319e48: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x319e48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x319e4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x319e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319e50: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x319e50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x319e54: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319e58: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x319e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x319e5c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319e5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319e60: 0x0  nop
    ctx->pc = 0x319e60u;
    // NOP
    // 0x319e64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319e68: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x319e6c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319e70: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x319e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
    // 0x319e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319e78: 0x0  nop
    ctx->pc = 0x319e78u;
    // NOP
    // 0x319e7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319e80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x319e84: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x319e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x319e88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319e88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319e8c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319e90: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319e90u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319e94: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x319E94u;
    SET_GPR_U32(ctx, 31, 0x319E9Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x319E94u, 0x319E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319E9Cu;
label_319e9c:
    // 0x319e9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319e9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319ea0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x319EA0u;
    SET_GPR_U32(ctx, 31, 0x319EA8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319EA0u, 0x319EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319EA8u;
label_319ea8:
    // 0x319ea8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x319ea8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319eac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x319eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319eb0: 0x24830120  addiu       $v1, $a0, 0x120
    ctx->pc = 0x319eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x319eb4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x319eb4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x319eb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x319eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319ebc: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x319ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x319ec0: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319ec4: 0x3c05c47a  lui         $a1, 0xC47A
    ctx->pc = 0x319ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50298 << 16));
    // 0x319ec8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x319ec8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319ecc: 0x0  nop
    ctx->pc = 0x319eccu;
    // NOP
    // 0x319ed0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319ed4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x319ed8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319edc: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x319edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x319ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319ee4: 0x0  nop
    ctx->pc = 0x319ee4u;
    // NOP
    // 0x319ee8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319eec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x319ef0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319ef4: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x319ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x319ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319efc: 0x0  nop
    ctx->pc = 0x319efcu;
    // NOP
    // 0x319f00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319f04: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x319f08: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x319f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x319f0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319f0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319f10: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319f14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319f14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319f18: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x319F18u;
    SET_GPR_U32(ctx, 31, 0x319F20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x319F18u, 0x319F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F20u;
label_319f20:
    // 0x319f20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x319f20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319f24: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x319F24u;
    SET_GPR_U32(ctx, 31, 0x319F2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319F24u, 0x319F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F2Cu;
label_319f2c:
    // 0x319f2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x319f2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319f30: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x319f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319f34: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x319f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x319f38: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x319f38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x319f3c: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x319f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319f40: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x319f40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x319f44: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319f48: 0x3c104396  lui         $s0, 0x4396
    ctx->pc = 0x319f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17302 << 16));
    // 0x319f4c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x319f4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319f50: 0x0  nop
    ctx->pc = 0x319f50u;
    // NOP
    // 0x319f54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319f54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319f58: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x319f5c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x319f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x319f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x319f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319f64: 0x0  nop
    ctx->pc = 0x319f64u;
    // NOP
    // 0x319f68: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x319f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x319f6c: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x319f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x319f70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x319f70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319f74: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x319f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319f78: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x319f78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x319f7c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x319F7Cu;
    SET_GPR_U32(ctx, 31, 0x319F84u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x319F7Cu, 0x319F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F84u;
label_319f84:
    // 0x319f84: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x319f84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319f88: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x319f88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x319f8c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x319F8Cu;
    SET_GPR_U32(ctx, 31, 0x319F94u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x319F8Cu, 0x319F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319F94u;
label_319f94:
    // 0x319f94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x319f94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x319f98: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x319f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x319f9c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x319f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x319fa0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x319fa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x319fa4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x319fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x319fa8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x319fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x319fac: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x319facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319fb0: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x319fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x319fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319fb8: 0x0  nop
    ctx->pc = 0x319fb8u;
    // NOP
    // 0x319fbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319fc0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x319fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x319fc4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x319fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319fc8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x319fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x319fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319fd0: 0x0  nop
    ctx->pc = 0x319fd0u;
    // NOP
    // 0x319fd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319fd8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x319fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x319fdc: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x319fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x319fe0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x319fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x319fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x319fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319fe8: 0x0  nop
    ctx->pc = 0x319fe8u;
    // NOP
    // 0x319fec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x319fecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x319ff0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x319ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x319ff4: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x319ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x319ff8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x319ff8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x319ffc: 0x0  nop
    ctx->pc = 0x319ffcu;
    // NOP
    // 0x31a000: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a004: 0x24050301  addiu       $a1, $zero, 0x301
    ctx->pc = 0x31a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x31a008: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x31a008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x31a00c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a00cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a010: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a014: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x31a014u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a018: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a018u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a01c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31A01Cu;
    SET_GPR_U32(ctx, 31, 0x31A024u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A01Cu, 0x31A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A024u;
label_31a024:
    // 0x31a024: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a024u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a028: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31A028u;
    SET_GPR_U32(ctx, 31, 0x31A030u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A028u, 0x31A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A030u;
label_31a030:
    // 0x31a030: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a034: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x31a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31a038: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x31a038u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a03c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a040: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31a040u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31a044: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a048: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x31a048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x31a04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a050: 0x0  nop
    ctx->pc = 0x31a050u;
    // NOP
    // 0x31a054: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a058: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a05c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x31a060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a064: 0x0  nop
    ctx->pc = 0x31a064u;
    // NOP
    // 0x31a068: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a06c: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x31a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x31a070: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a074: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a078: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a078u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a07c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31A07Cu;
    SET_GPR_U32(ctx, 31, 0x31A084u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A07Cu, 0x31A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A084u;
label_31a084:
    // 0x31a084: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31a084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a088: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31A088u;
    SET_GPR_U32(ctx, 31, 0x31A090u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A088u, 0x31A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A090u;
label_31a090:
    // 0x31a090: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a094: 0x24620120  addiu       $v0, $v1, 0x120
    ctx->pc = 0x31a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x31a098: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x31a098u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a09c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x31a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a0a0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x31a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x31a0a4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x31a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a0a8: 0x3c03c348  lui         $v1, 0xC348
    ctx->pc = 0x31a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49992 << 16));
    // 0x31a0ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a0b0: 0x0  nop
    ctx->pc = 0x31a0b0u;
    // NOP
    // 0x31a0b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a0b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a0b8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x31a0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31a0bc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x31a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a0c0: 0x3c144316  lui         $s4, 0x4316
    ctx->pc = 0x31a0c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)17174 << 16));
    // 0x31a0c4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x31a0c4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a0c8: 0x0  nop
    ctx->pc = 0x31a0c8u;
    // NOP
    // 0x31a0cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a0d0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x31a0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x31a0d4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x31a0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a0d8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x31a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x31a0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a0e0: 0x0  nop
    ctx->pc = 0x31a0e0u;
    // NOP
    // 0x31a0e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31a0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a0e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x31a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x31a0ec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x31a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x31a0f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31a0f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a0f4: 0x0  nop
    ctx->pc = 0x31a0f4u;
    // NOP
    // 0x31a0f8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x31a0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x31a0fc: 0x24040301  addiu       $a0, $zero, 0x301
    ctx->pc = 0x31a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
    // 0x31a100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31a100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a104: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x31a104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a108: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x31a108u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31a10c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31A10Cu;
    SET_GPR_U32(ctx, 31, 0x31A114u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31A10Cu, 0x31A114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A114u;
label_31a114:
    // 0x31a114: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31a114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a118: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x31a118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x31a11c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31A11Cu;
    SET_GPR_U32(ctx, 31, 0x31A124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31A11Cu, 0x31A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A124u;
label_31a124:
    // 0x31a124: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31a124u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31a128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a12c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x31a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a130: 0xe4a001a0  swc1        $f0, 0x1A0($a1)
    ctx->pc = 0x31a130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 416), bits); }
    // 0x31a134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a138: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a13c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x31a13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x31a140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a144: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x31a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a148: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x31a148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x31a14c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x31a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31a150: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31a150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31a154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31a158: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31a158u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x31a15c: 0x100001be  b           . + 4 + (0x1BE << 2)
    ctx->pc = 0x31A15Cu;
    {
        const bool branch_taken_0x31a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a15c) {
            ctx->pc = 0x31A858u;
            return;
        }
    }
    ctx->pc = 0x31A164u;
}
