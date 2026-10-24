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

// Function: camera_devil_jump_main
// Address: 0x183e20 - 0x184044
void camera_devil_jump_main_0x183e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_devil_jump_main_0x183e20");
#endif

    switch (ctx->pc) {
        case 0x183f20u: goto label_183f20;
        case 0x183f44u: goto label_183f44;
        case 0x183f58u: goto label_183f58;
        case 0x183f74u: goto label_183f74;
        case 0x183facu: goto label_183fac;
        case 0x183fc8u: goto label_183fc8;
        case 0x183fe0u: goto label_183fe0;
        case 0x184028u: goto label_184028;
        case 0x184034u: goto label_184034;
        default: break;
    }

    ctx->pc = 0x183e20u;

    // 0x183e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x183e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x183e24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x183e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x183e28: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x183e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x183e2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183e30: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x183e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x183e34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183e34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183e38: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183e3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183e40: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x183e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183e44: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x183e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x183e48: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x183e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x183e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183e50: 0x0  nop
    ctx->pc = 0x183e50u;
    // NOP
    // 0x183e54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x183e54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x183e58: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x183e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x183e5c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183e60: 0x8c220270  lw          $v0, 0x270($at)
    ctx->pc = 0x183e60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x480270u));
    // 0x183e64: 0x2841001e  slti        $at, $v0, 0x1E
    ctx->pc = 0x183e64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x183e68: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x183E68u;
    {
        const bool branch_taken_0x183e68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183e68) {
            ctx->pc = 0x183EA4u;
            goto label_183ea4;
        }
    }
    ctx->pc = 0x183E70u;
    // 0x183e70: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x183e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183e74: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x183e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x183e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x183e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183e7c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183e80: 0x8c220270  lw          $v0, 0x270($at)
    ctx->pc = 0x183e80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x480270u));
    // 0x183e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183e88: 0x0  nop
    ctx->pc = 0x183e88u;
    // NOP
    // 0x183e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x183e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x183e90: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x183e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x183e94: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x183e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x183e98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x183e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x183e9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x183E9Cu;
    {
        const bool branch_taken_0x183e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183e9c) {
            ctx->pc = 0x183EF0u;
            goto label_183ef0;
        }
    }
    ctx->pc = 0x183EA4u;
label_183ea4:
    // 0x183ea4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183ea8: 0x8c220270  lw          $v0, 0x270($at)
    ctx->pc = 0x183ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x480270u));
    // 0x183eac: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x183eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x183eb0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x183EB0u;
    {
        const bool branch_taken_0x183eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x183eb0) {
            ctx->pc = 0x183EF0u;
            goto label_183ef0;
        }
    }
    ctx->pc = 0x183EB8u;
    // 0x183eb8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x183eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x183ebc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183ec0: 0x8c220270  lw          $v0, 0x270($at)
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x480270u));
    // 0x183ec4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x183ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x183ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183ecc: 0x0  nop
    ctx->pc = 0x183eccu;
    // NOP
    // 0x183ed0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x183ed4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x183ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x183ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183edc: 0x0  nop
    ctx->pc = 0x183edcu;
    // NOP
    // 0x183ee0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x183ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x183ee4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x183ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x183ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x183eec: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x183eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_183ef0:
    // 0x183ef0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183ef4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183ef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183efc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x183efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183f00: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183f00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183f04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x183f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183f08: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x183f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183f0c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183f10: 0x24450260  addiu       $a1, $v0, 0x260
    ctx->pc = 0x183f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x183f14: 0x24660150  addiu       $a2, $v1, 0x150
    ctx->pc = 0x183f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x183f18: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x183F18u;
    SET_GPR_U32(ctx, 31, 0x183F20u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x183F18u, 0x183F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F20u;
label_183f20:
    // 0x183f20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183f24: 0xc4200244  lwc1        $f0, 0x244($at)
    ctx->pc = 0x183f24u;
    { uint32_t bits = FAST_READ32(0x480244u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183f28: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x183f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x183f2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183f30: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183f34: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183f38: 0x24460230  addiu       $a2, $v0, 0x230
    ctx->pc = 0x183f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183f3c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x183F3Cu;
    SET_GPR_U32(ctx, 31, 0x183F44u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x183F3Cu, 0x183F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F44u;
label_183f44:
    // 0x183f44: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x183f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183f48: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183f4c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183f50: 0xc040c86  jal         func_103218
    ctx->pc = 0x183F50u;
    SET_GPR_U32(ctx, 31, 0x183F58u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x183F58u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183F58u) { return; }
    ctx->pc = 0x183F58u;
label_183f58:
    // 0x183f58: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x183f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183f5c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x183f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183f60: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x183f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183f64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x183f64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x183f68: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x183f68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x183f6c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x183F6Cu;
    SET_GPR_U32(ctx, 31, 0x183F74u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x183F6Cu, 0x183F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183F74u;
label_183f74:
    // 0x183f74: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x183f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x183f78: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x183f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183f7c: 0x3c02440f  lui         $v0, 0x440F
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17423 << 16));
    // 0x183f80: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x183f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x183f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183f88: 0x0  nop
    ctx->pc = 0x183f88u;
    // NOP
    // 0x183f8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183f90: 0x0  nop
    ctx->pc = 0x183f90u;
    // NOP
    // 0x183f94: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x183F94u;
    {
        const bool branch_taken_0x183f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183f94) {
            ctx->pc = 0x183FE0u;
            goto label_183fe0;
        }
    }
    ctx->pc = 0x183F9Cu;
    // 0x183f9c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fa0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fa4: 0xc040c24  jal         func_103090
    ctx->pc = 0x183FA4u;
    SET_GPR_U32(ctx, 31, 0x183FACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x183FACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183FACu) { return; }
    ctx->pc = 0x183FACu;
label_183fac:
    // 0x183fac: 0x3c02440f  lui         $v0, 0x440F
    ctx->pc = 0x183facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17423 << 16));
    // 0x183fb0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x183fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x183fb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x183fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183fb8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fbc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fc0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x183FC0u;
    SET_GPR_U32(ctx, 31, 0x183FC8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x183FC8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183FC8u) { return; }
    ctx->pc = 0x183FC8u;
label_183fc8:
    // 0x183fc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x183fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183fcc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183fd0: 0x24450230  addiu       $a1, $v0, 0x230
    ctx->pc = 0x183fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183fd4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183fd8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x183FD8u;
    SET_GPR_U32(ctx, 31, 0x183FE0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x183FD8u, 0x183FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183FE0u;
label_183fe0:
    // 0x183fe0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183fe4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183fe4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183fe8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183fec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x183ff0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183ff4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183ff8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183ff8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183ffc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x184000: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x184000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x184004: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184004u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480230u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480230u, _value); } while (0);
    // 0x184008: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18400c: 0x8c220270  lw          $v0, 0x270($at)
    ctx->pc = 0x18400cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x480270u));
    // 0x184010: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x184010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x184014: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184018: 0xac220270  sw          $v0, 0x270($at)
    ctx->pc = 0x184018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x480270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480270u, _value); } while (0);
    // 0x18401c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x184020: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x184020u;
    SET_GPR_U32(ctx, 31, 0x184028u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x184020u, 0x184028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184028u;
label_184028:
    // 0x184028: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18402c: 0xc05f910  jal         func_17E440
    ctx->pc = 0x18402Cu;
    SET_GPR_U32(ctx, 31, 0x184034u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x18402Cu, 0x184034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184034u;
label_184034:
    // 0x184034: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x184034u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184038: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18403c: 0x3e00008  jr          $ra
    ctx->pc = 0x18403Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18403Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184044u;
}
