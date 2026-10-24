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

// Function: Adjust_theta
// Address: 0x163fb0 - 0x1641f4
void Adjust_theta_0x163fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Adjust_theta_0x163fb0");
#endif

    switch (ctx->pc) {
        case 0x164038u: goto label_164038;
        default: break;
    }

    ctx->pc = 0x163fb0u;

    // 0x163fb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163fb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x163fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x163fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163fbc: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x163fbcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x163fc0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163fc4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x163fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x163fc8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x163fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163fcc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x163fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x163fd0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163fd8: 0x0  nop
    ctx->pc = 0x163fd8u;
    // NOP
    // 0x163fdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163fe0: 0x0  nop
    ctx->pc = 0x163fe0u;
    // NOP
    // 0x163fe4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x163FE4u;
    {
        const bool branch_taken_0x163fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163fe4) {
            ctx->pc = 0x164010u;
            goto label_164010;
        }
    }
    ctx->pc = 0x163FECu;
    // 0x163fec: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x163fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163ff0: 0x3c02c0c9  lui         $v0, 0xC0C9
    ctx->pc = 0x163ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49353 << 16));
    // 0x163ff4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163ffc: 0x0  nop
    ctx->pc = 0x163ffcu;
    // NOP
    // 0x164000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164004: 0x0  nop
    ctx->pc = 0x164004u;
    // NOP
    // 0x164008: 0x4500004b  bc1f        . + 4 + (0x4B << 2)
    ctx->pc = 0x164008u;
    {
        const bool branch_taken_0x164008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164008) {
            ctx->pc = 0x164138u;
            goto label_164138;
        }
    }
    ctx->pc = 0x164010u;
label_164010:
    // 0x164010: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x164010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x164014: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x164018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16401c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x16401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164020: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x164020u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x164024: 0x0  nop
    ctx->pc = 0x164024u;
    // NOP
    // 0x164028: 0x0  nop
    ctx->pc = 0x164028u;
    // NOP
    // 0x16402c: 0x0  nop
    ctx->pc = 0x16402cu;
    // NOP
    // 0x164030: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x164030u;
    SET_GPR_U32(ctx, 31, 0x164038u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x164030u, 0x164038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164038u;
label_164038:
    // 0x164038: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x164038u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16403c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x16403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164044: 0x0  nop
    ctx->pc = 0x164044u;
    // NOP
    // 0x164048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16404c: 0x0  nop
    ctx->pc = 0x16404cu;
    // NOP
    // 0x164050: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x164050u;
    {
        const bool branch_taken_0x164050 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164050) {
            ctx->pc = 0x1640C8u;
            goto label_1640c8;
        }
    }
    ctx->pc = 0x164058u;
    // 0x164058: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x164058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16405c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x164060: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x164064: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x164064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164068: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x164068u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16406c: 0x0  nop
    ctx->pc = 0x16406cu;
    // NOP
    // 0x164070: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x164070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x164074: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x164074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164078: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x164078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x16407c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x16407cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x164080: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x164080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164084: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x164084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x164088: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16408c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164090: 0x0  nop
    ctx->pc = 0x164090u;
    // NOP
    // 0x164094: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x164094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164098: 0x0  nop
    ctx->pc = 0x164098u;
    // NOP
    // 0x16409c: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x16409Cu;
    {
        const bool branch_taken_0x16409c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16409c) {
            ctx->pc = 0x16412Cu;
            goto label_16412c;
        }
    }
    ctx->pc = 0x1640A4u;
    // 0x1640a4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1640a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1640a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1640a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1640ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1640acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1640b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1640b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1640b4: 0x0  nop
    ctx->pc = 0x1640b4u;
    // NOP
    // 0x1640b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1640b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1640bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1640bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1640c0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1640C0u;
    {
        const bool branch_taken_0x1640c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1640c0) {
            ctx->pc = 0x16412Cu;
            goto label_16412c;
        }
    }
    ctx->pc = 0x1640C8u;
label_1640c8:
    // 0x1640c8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1640c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1640cc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1640ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1640d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1640d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1640d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1640d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1640d8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1640d8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1640dc: 0x0  nop
    ctx->pc = 0x1640dcu;
    // NOP
    // 0x1640e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1640e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1640e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1640e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1640e8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1640e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1640ec: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1640ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1640f0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1640f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1640f4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1640f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1640f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1640f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1640fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1640fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164100: 0x0  nop
    ctx->pc = 0x164100u;
    // NOP
    // 0x164104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164108: 0x0  nop
    ctx->pc = 0x164108u;
    // NOP
    // 0x16410c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16410Cu;
    {
        const bool branch_taken_0x16410c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16410c) {
            ctx->pc = 0x16412Cu;
            goto label_16412c;
        }
    }
    ctx->pc = 0x164114u;
    // 0x164114: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x164114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x164118: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16411c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16411cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164120: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x164120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164124: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x164124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x164128: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x164128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_16412c:
    // 0x16412c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x16412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164130: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x164130u;
    {
        const bool branch_taken_0x164130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164130) {
            ctx->pc = 0x1641E0u;
            goto label_1641e0;
        }
    }
    ctx->pc = 0x164138u;
label_164138:
    // 0x164138: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x164138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16413c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16413cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164140: 0x0  nop
    ctx->pc = 0x164140u;
    // NOP
    // 0x164144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164148: 0x0  nop
    ctx->pc = 0x164148u;
    // NOP
    // 0x16414c: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x16414Cu;
    {
        const bool branch_taken_0x16414c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16414c) {
            ctx->pc = 0x16419Cu;
            goto label_16419c;
        }
    }
    ctx->pc = 0x164154u;
    // 0x164154: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x164154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164158: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x164158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x16415c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x164160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164164: 0x0  nop
    ctx->pc = 0x164164u;
    // NOP
    // 0x164168: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x164168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16416c: 0x0  nop
    ctx->pc = 0x16416cu;
    // NOP
    // 0x164170: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x164170u;
    {
        const bool branch_taken_0x164170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164170) {
            ctx->pc = 0x1641D8u;
            goto label_1641d8;
        }
    }
    ctx->pc = 0x164178u;
    // 0x164178: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x164178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16417c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x164180: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x164180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x164184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164188: 0x0  nop
    ctx->pc = 0x164188u;
    // NOP
    // 0x16418c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x16418cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x164190: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x164190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x164194: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x164194u;
    {
        const bool branch_taken_0x164194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164194) {
            ctx->pc = 0x1641D8u;
            goto label_1641d8;
        }
    }
    ctx->pc = 0x16419Cu;
label_16419c:
    // 0x16419c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x16419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1641a0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1641a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1641a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1641a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1641a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1641a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1641ac: 0x0  nop
    ctx->pc = 0x1641acu;
    // NOP
    // 0x1641b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1641b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1641b4: 0x0  nop
    ctx->pc = 0x1641b4u;
    // NOP
    // 0x1641b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1641B8u;
    {
        const bool branch_taken_0x1641b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1641b8) {
            ctx->pc = 0x1641D8u;
            goto label_1641d8;
        }
    }
    ctx->pc = 0x1641C0u;
    // 0x1641c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1641c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1641c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1641c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1641c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1641c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1641cc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1641ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1641d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1641d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1641d4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1641d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1641d8:
    // 0x1641d8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1641d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1641dc: 0x0  nop
    ctx->pc = 0x1641dcu;
    // NOP
label_1641e0:
    // 0x1641e0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1641e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1641e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1641e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1641e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1641e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1641ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1641ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1641ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1641F4u;
}
