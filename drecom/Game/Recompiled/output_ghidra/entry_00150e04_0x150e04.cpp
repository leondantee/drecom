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

// Function: entry_00150e04
// Address: 0x150e04 - 0x151010
void entry_00150e04_0x150e04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150e04_0x150e04");
#endif

    switch (ctx->pc) {
        case 0x150e58u: goto label_150e58;
        case 0x150e7cu: goto label_150e7c;
        case 0x150edcu: goto label_150edc;
        case 0x150efcu: goto label_150efc;
        case 0x150f5cu: goto label_150f5c;
        case 0x150f80u: goto label_150f80;
        case 0x150fe0u: goto label_150fe0;
        case 0x151008u: goto label_151008;
        default: break;
    }

    ctx->pc = 0x150e04u;

    // 0x150e04: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x150e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x150e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e0c: 0x0  nop
    ctx->pc = 0x150e0cu;
    // NOP
    // 0x150e10: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150e14: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x150e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e1c: 0x0  nop
    ctx->pc = 0x150e1cu;
    // NOP
    // 0x150e20: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150e24: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x150e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x150e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e2c: 0x0  nop
    ctx->pc = 0x150e2cu;
    // NOP
    // 0x150e30: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150e34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e3c: 0x0  nop
    ctx->pc = 0x150e3cu;
    // NOP
    // 0x150e40: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150e44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150e48: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150e4c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150e50: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150E50u;
    SET_GPR_U32(ctx, 31, 0x150E58u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150E58u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150E58u) { return; }
    ctx->pc = 0x150E58u;
label_150e58:
    // 0x150e58: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150e5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150e60: 0x8fb500e8  lw          $s5, 0xE8($sp)
    ctx->pc = 0x150e60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150e64: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150e68: 0x90461576  lbu         $a2, 0x1576($v0)
    ctx->pc = 0x150e68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5494)));
    // 0x150e6c: 0x92b41577  lbu         $s4, 0x1577($s5)
    ctx->pc = 0x150e6cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5495)));
    // 0x150e70: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x150e70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x150e74: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150E74u;
    SET_GPR_U32(ctx, 31, 0x150E7Cu);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150E74u, 0x150E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E7Cu;
label_150e7c:
    // 0x150e7c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x150e7cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150e80: 0x2341025  or          $v0, $s1, $s4
    ctx->pc = 0x150e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x150e84: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x150e84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150e88: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x150e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e90: 0x0  nop
    ctx->pc = 0x150e90u;
    // NOP
    // 0x150e94: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150e98: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x150e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ea0: 0x0  nop
    ctx->pc = 0x150ea0u;
    // NOP
    // 0x150ea4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150ea8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x150ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x150eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150eb0: 0x0  nop
    ctx->pc = 0x150eb0u;
    // NOP
    // 0x150eb4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150eb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ec0: 0x0  nop
    ctx->pc = 0x150ec0u;
    // NOP
    // 0x150ec4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150ec8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150ecc: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150ed0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150ed4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150ED4u;
    SET_GPR_U32(ctx, 31, 0x150EDCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150EDCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150EDCu) { return; }
    ctx->pc = 0x150EDCu;
label_150edc:
    // 0x150edc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ee0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ee4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ee8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150eec: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150eecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150ef0: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150ef0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150ef4: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150EF4u;
    SET_GPR_U32(ctx, 31, 0x150EFCu);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150EF4u, 0x150EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EFCu;
label_150efc:
    // 0x150efc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x150efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150f00: 0x2242825  or          $a1, $s1, $a0
    ctx->pc = 0x150f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x150f04: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x150f04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x150f08: 0x3c06c3fa  lui         $a2, 0xC3FA
    ctx->pc = 0x150f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50170 << 16));
    // 0x150f0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x150f0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f10: 0x0  nop
    ctx->pc = 0x150f10u;
    // NOP
    // 0x150f14: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150f18: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x150f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x150f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f20: 0x0  nop
    ctx->pc = 0x150f20u;
    // NOP
    // 0x150f24: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150f28: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x150f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x150f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f30: 0x0  nop
    ctx->pc = 0x150f30u;
    // NOP
    // 0x150f34: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150f38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f40: 0x0  nop
    ctx->pc = 0x150f40u;
    // NOP
    // 0x150f44: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150f48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150f4c: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150f50: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150f54: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150F54u;
    SET_GPR_U32(ctx, 31, 0x150F5Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150F5Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150F5Cu) { return; }
    ctx->pc = 0x150F5Cu;
label_150f5c:
    // 0x150f5c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150f60: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150f64: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150f68: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x150f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150f6c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x150f6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150f70: 0x90c61576  lbu         $a2, 0x1576($a2)
    ctx->pc = 0x150f70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5494)));
    // 0x150f74: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x150f74u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x150f78: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150F78u;
    SET_GPR_U32(ctx, 31, 0x150F80u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150F78u, 0x150F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F80u;
label_150f80:
    // 0x150f80: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x150f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150f84: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x150f84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x150f88: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x150f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x150f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f90: 0x0  nop
    ctx->pc = 0x150f90u;
    // NOP
    // 0x150f94: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150f98: 0x3c06c3fa  lui         $a2, 0xC3FA
    ctx->pc = 0x150f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50170 << 16));
    // 0x150f9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x150f9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fa0: 0x0  nop
    ctx->pc = 0x150fa0u;
    // NOP
    // 0x150fa4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150fa8: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x150fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x150fac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150facu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fb0: 0x0  nop
    ctx->pc = 0x150fb0u;
    // NOP
    // 0x150fb4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150fb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x150fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fc0: 0x0  nop
    ctx->pc = 0x150fc0u;
    // NOP
    // 0x150fc4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150fc8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x150fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150fcc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x150fccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x150fd0: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150fd4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150fd8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150FD8u;
    SET_GPR_U32(ctx, 31, 0x150FE0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150FE0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150FE0u) { return; }
    ctx->pc = 0x150FE0u;
label_150fe0:
    // 0x150fe0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x150fe0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150fe4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150fe8: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150fec: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ff0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x150ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150ff4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150ff8: 0x90c61576  lbu         $a2, 0x1576($a2)
    ctx->pc = 0x150ff8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5494)));
    // 0x150ffc: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x150ffcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x151000: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x151000u;
    SET_GPR_U32(ctx, 31, 0x151008u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x151000u, 0x151008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151008u;
label_151008:
    // 0x151008: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x151008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x15100c: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x15100cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x151010u;
}
