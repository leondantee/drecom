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

// Function: Om_on_at_conv
// Address: 0x361ec0 - 0x3620f8
void Om_on_at_conv_0x361ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_on_at_conv_0x361ec0");
#endif

    switch (ctx->pc) {
        case 0x3620e8u: goto label_3620e8;
        default: break;
    }

    ctx->pc = 0x361ec0u;

    // 0x361ec0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x361ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x361ec4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x361ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x361ec8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x361ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x361ecc: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x361eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
    // 0x361ed0: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x361ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x361ed4: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x361ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
    // 0x361ed8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x361ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361edc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x361edcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361ee0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x361ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x361ee4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x361ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x361ee8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x361ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361eec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x361eecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361ef0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x361ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x361ef4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x361ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x361ef8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x361ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361efc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x361efcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361f00: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x361f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x361f04: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x361f04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x361f08: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x361f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361f0c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x361f0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361f10: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x361f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x361f14: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x361f14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x361f18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x361f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x361f1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x361f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x361f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x361f24: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x361f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x361f28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x361f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f2c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x361f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x361f30: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x361f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x361f34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x361f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f38: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x361f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x361f3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x361f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x361f40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x361f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361f44: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x361f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x361f48: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x361f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361f4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x361f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361f50: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x361f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x361f54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x361f54u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x361f58: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x361f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361f5c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x361f5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361f60: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x361f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x361f64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x361f64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x361f68: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x361f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361f6c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x361f6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361f70: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x361f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x361f74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x361f74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x361f78: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x361f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x361f7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x361f7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361f80: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x361f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x361f84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x361f84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x361f88: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x361f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361f8c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x361f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x361f90: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x361F90u;
    {
        const bool branch_taken_0x361f90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x361f90) {
            ctx->pc = 0x361FACu;
            goto label_361fac;
        }
    }
    ctx->pc = 0x361F98u;
    // 0x361f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x361f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361f9c: 0x0  nop
    ctx->pc = 0x361f9cu;
    // NOP
    // 0x361fa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x361fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x361fa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x361FA4u;
    {
        const bool branch_taken_0x361fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361fa4) {
            ctx->pc = 0x361FC8u;
            goto label_361fc8;
        }
    }
    ctx->pc = 0x361FACu;
label_361fac:
    // 0x361fac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x361facu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x361fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x361fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x361fb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x361fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x361fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x361fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361fbc: 0x0  nop
    ctx->pc = 0x361fbcu;
    // NOP
    // 0x361fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x361fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x361fc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x361fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_361fc8:
    // 0x361fc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x361fc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x361fcc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x361fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x361fd0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x361fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x361fd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x361fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361fd8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x361fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x361fdc: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x361fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x361fe0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x361fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x361fe4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x361FE4u;
    {
        const bool branch_taken_0x361fe4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x361fe4) {
            ctx->pc = 0x362000u;
            goto label_362000;
        }
    }
    ctx->pc = 0x361FECu;
    // 0x361fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x361fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x361ff0: 0x0  nop
    ctx->pc = 0x361ff0u;
    // NOP
    // 0x361ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x361ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x361ff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x361FF8u;
    {
        const bool branch_taken_0x361ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361ff8) {
            ctx->pc = 0x36201Cu;
            goto label_36201c;
        }
    }
    ctx->pc = 0x362000u;
label_362000:
    // 0x362000: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x362000u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x362004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x362004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x362008: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x362008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36200c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36200cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362010: 0x0  nop
    ctx->pc = 0x362010u;
    // NOP
    // 0x362014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x362014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x362018: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x362018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36201c:
    // 0x36201c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36201cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x362020: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x362020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x362024: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x362024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x362028: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x362028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36202c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x36202cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x362030: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x362030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x362034: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x362034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362038: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x362038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36203c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x36203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362040: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x362040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x362044: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362044u;
    {
        const bool branch_taken_0x362044 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x362044) {
            ctx->pc = 0x362060u;
            goto label_362060;
        }
    }
    ctx->pc = 0x36204Cu;
    // 0x36204c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36204cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362050: 0x0  nop
    ctx->pc = 0x362050u;
    // NOP
    // 0x362054: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x362054u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x362058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x362058u;
    {
        const bool branch_taken_0x362058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362058) {
            ctx->pc = 0x36207Cu;
            goto label_36207c;
        }
    }
    ctx->pc = 0x362060u;
label_362060:
    // 0x362060: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x362060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x362064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x362064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x362068: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x362068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x36206c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36206cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362070: 0x0  nop
    ctx->pc = 0x362070u;
    // NOP
    // 0x362074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x362074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x362078: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x362078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_36207c:
    // 0x36207c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36207cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x362080: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x362080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x362084: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x362084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x362088: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x362088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36208c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x36208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x362090: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x362090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362094: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x362094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x362098: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362098u;
    {
        const bool branch_taken_0x362098 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x362098) {
            ctx->pc = 0x3620B4u;
            goto label_3620b4;
        }
    }
    ctx->pc = 0x3620A0u;
    // 0x3620a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3620a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3620a4: 0x0  nop
    ctx->pc = 0x3620a4u;
    // NOP
    // 0x3620a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3620a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3620ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3620ACu;
    {
        const bool branch_taken_0x3620ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3620ac) {
            ctx->pc = 0x3620D0u;
            goto label_3620d0;
        }
    }
    ctx->pc = 0x3620B4u;
label_3620b4:
    // 0x3620b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3620b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3620b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3620b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3620bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3620bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3620c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3620c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3620c4: 0x0  nop
    ctx->pc = 0x3620c4u;
    // NOP
    // 0x3620c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3620c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3620cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3620ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3620d0:
    // 0x3620d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3620d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3620d4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3620d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3620d8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x3620d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3620dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3620dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3620e0: 0xc056964  jal         func_15A590
    ctx->pc = 0x3620E0u;
    SET_GPR_U32(ctx, 31, 0x3620E8u);
    ctx->pc = 0x15A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A590u, 0x3620E0u, 0x3620E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3620E8u;
label_3620e8:
    // 0x3620e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3620e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3620ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x3620ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3620f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3620F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3620F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3620F8u;
}
