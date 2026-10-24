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

// Function: Room_fog_set
// Address: 0x175280 - 0x175404
void Room_fog_set_0x175280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Room_fog_set_0x175280");
#endif

    switch (ctx->pc) {
        case 0x1753bcu: goto label_1753bc;
        case 0x1753f4u: goto label_1753f4;
        default: break;
    }

    ctx->pc = 0x175280u;

    // 0x175280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175284: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x175284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x175288: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x175288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17528c: 0xa7a50018  sh          $a1, 0x18($sp)
    ctx->pc = 0x17528cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x175290: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x175290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x175294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175298: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17529c: 0xe420bd30  swc1        $f0, -0x42D0($at)
    ctx->pc = 0x17529cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD30u, _value); } while (0); }
    // 0x1752a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1752a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1752a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1752a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1752a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752ac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1752acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1752b0: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1752b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1752b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1752b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752b8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1752b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1752bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1752bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1752c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1752c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1752c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1752c8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1752c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1752cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1752ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752d0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1752d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1752d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1752d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1752d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1752dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1752dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1752e0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1752e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1752e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1752e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752e8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1752e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1752ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1752ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1752f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1752f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1752f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1752f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1752f8: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x1752f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1752fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1752fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x175300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175304: 0x0  nop
    ctx->pc = 0x175304u;
    // NOP
    // 0x175308: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x175308u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17530c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17530cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175310: 0xe420bd3c  swc1        $f0, -0x42C4($at)
    ctx->pc = 0x175310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD3Cu, _value); } while (0); }
    // 0x175314: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x175314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175318: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17531c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x17531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175320: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x175320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175324: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x175324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x175328: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17532c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x17532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175330: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175334: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x175334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175338: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17533c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x17533cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x175340: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175344: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x175344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17534c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x17534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175350: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x175350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x175354: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x175354u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x175358: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17535c: 0xe420bd4c  swc1        $f0, -0x42B4($at)
    ctx->pc = 0x17535cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47BD4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BD4Cu, _value); } while (0); }
    // 0x175360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x175360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175364: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175368: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x175368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x17536c: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x17536cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x175370: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x175370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x175374: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x175374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175378: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17537c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x17537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x175380: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x175380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x175384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175388: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x175388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x17538c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x17538cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x175390: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x175394: 0xfc22cc80  sd          $v0, -0x3380($at)
    ctx->pc = 0x175394u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC80u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x47CC80u, _value); } while (0);
    // 0x175398: 0x87a20018  lh          $v0, 0x18($sp)
    ctx->pc = 0x175398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17539c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17539Cu;
    {
        const bool branch_taken_0x17539c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17539c) {
            ctx->pc = 0x1753C4u;
            goto label_1753c4;
        }
    }
    ctx->pc = 0x1753A4u;
    // 0x1753a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1753a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1753a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1753a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1753ac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1753acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1753b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1753b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1753b4: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x1753B4u;
    SET_GPR_U32(ctx, 31, 0x1753BCu);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x1753B4u, 0x1753BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753BCu;
label_1753bc:
    // 0x1753bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1753BCu;
    {
        const bool branch_taken_0x1753bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1753bc) {
            ctx->pc = 0x1753F4u;
            goto label_1753f4;
        }
    }
    ctx->pc = 0x1753C4u;
label_1753c4:
    // 0x1753c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1753c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1753c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1753cc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1753ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1753d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1753d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753d4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1753d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1753d8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1753d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1753dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1753dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1753e0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1753e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1753e4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1753e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1753e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1753e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1753ec: 0xc0590ec  jal         func_1643B0
    ctx->pc = 0x1753ECu;
    SET_GPR_U32(ctx, 31, 0x1753F4u);
    ctx->pc = 0x1643B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643B0u, 0x1753ECu, 0x1753F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753F4u;
label_1753f4:
    // 0x1753f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1753f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1753f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1753fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1753FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1753FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175404u;
}
