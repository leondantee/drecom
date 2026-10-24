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

// Function: Gp_RengtN_mul_ver1_w
// Address: 0x1d3bf0 - 0x1d43a4
void Gp_RengtN_mul_ver1_w_0x1d3bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_RengtN_mul_ver1_w_0x1d3bf0");
#endif

    switch (ctx->pc) {
        case 0x1d3d84u: goto label_1d3d84;
        case 0x1d3d98u: goto label_1d3d98;
        case 0x1d3dbcu: goto label_1d3dbc;
        case 0x1d3de4u: goto label_1d3de4;
        case 0x1d3e0cu: goto label_1d3e0c;
        case 0x1d3e2cu: goto label_1d3e2c;
        case 0x1d3e3cu: goto label_1d3e3c;
        case 0x1d3e54u: goto label_1d3e54;
        case 0x1d3e70u: goto label_1d3e70;
        case 0x1d3e8cu: goto label_1d3e8c;
        case 0x1d3ec4u: goto label_1d3ec4;
        case 0x1d3f44u: goto label_1d3f44;
        case 0x1d3f64u: goto label_1d3f64;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4054u: goto label_1d4054;
        case 0x1d4060u: goto label_1d4060;
        case 0x1d414cu: goto label_1d414c;
        case 0x1d4160u: goto label_1d4160;
        case 0x1d416cu: goto label_1d416c;
        case 0x1d4230u: goto label_1d4230;
        case 0x1d424cu: goto label_1d424c;
        case 0x1d4260u: goto label_1d4260;
        case 0x1d4278u: goto label_1d4278;
        case 0x1d42fcu: goto label_1d42fc;
        default: break;
    }

    ctx->pc = 0x1d3bf0u;

    // 0x1d3bf0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1d3bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1d3bf4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1d3bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1d3bf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d3bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d3bfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d3bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d3c00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d3c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d3c04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d3c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d3c08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d3c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d3c0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d3c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d3c10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d3c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d3c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3c1c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x1d3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x1d3c20: 0xafa50168  sw          $a1, 0x168($sp)
    ctx->pc = 0x1d3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 5));
    // 0x1d3c24: 0xafa60170  sw          $a2, 0x170($sp)
    ctx->pc = 0x1d3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 6));
    // 0x1d3c28: 0xafa70178  sw          $a3, 0x178($sp)
    ctx->pc = 0x1d3c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 7));
    // 0x1d3c2c: 0xafa80180  sw          $t0, 0x180($sp)
    ctx->pc = 0x1d3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 8));
    // 0x1d3c30: 0xafa90188  sw          $t1, 0x188($sp)
    ctx->pc = 0x1d3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 9));
    // 0x1d3c34: 0x8fb00188  lw          $s0, 0x188($sp)
    ctx->pc = 0x1d3c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1d3c38: 0x3a110001  xori        $s1, $s0, 0x1
    ctx->pc = 0x1d3c38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
    // 0x1d3c3c: 0xafb10138  sw          $s1, 0x138($sp)
    ctx->pc = 0x1d3c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 17));
    // 0x1d3c40: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d3c44: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1d3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d3c48: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1d3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1d3c4c: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3c50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3c54: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1d3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1d3c58: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3c5c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3C5Cu;
    {
        const bool branch_taken_0x1d3c5c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d3c5c) {
            ctx->pc = 0x1D3C78u;
            goto label_1d3c78;
        }
    }
    ctx->pc = 0x1D3C64u;
    // 0x1d3c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3c68: 0x0  nop
    ctx->pc = 0x1d3c68u;
    // NOP
    // 0x1d3c6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3c70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3C70u;
    {
        const bool branch_taken_0x1d3c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c70) {
            ctx->pc = 0x1D3C94u;
            goto label_1d3c94;
        }
    }
    ctx->pc = 0x1D3C78u;
label_1d3c78:
    // 0x1d3c78: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1d3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1d3c7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d3c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d3c80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d3c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d3c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3c88: 0x0  nop
    ctx->pc = 0x1d3c88u;
    // NOP
    // 0x1d3c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3c90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d3c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d3c94:
    // 0x1d3c94: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x1d3c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x1d3c98: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1d3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1d3c9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D3C9Cu;
    {
        const bool branch_taken_0x1d3c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3c9c) {
            ctx->pc = 0x1D3CE8u;
            goto label_1d3ce8;
        }
    }
    ctx->pc = 0x1D3CA4u;
    // 0x1d3ca4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d3ca8: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1d3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x1d3cac: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3cb0: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d3cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d3cb4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3cb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3cbc: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3cc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3cc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d3cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3cc8: 0xa7a2015e  sh          $v0, 0x15E($sp)
    ctx->pc = 0x1d3cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3ccc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3cd0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3cd4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3cd8: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d3cdc: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1d3cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d3ce0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D3CE0u;
    {
        const bool branch_taken_0x1d3ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ce0) {
            ctx->pc = 0x1D3D24u;
            goto label_1d3d24;
        }
    }
    ctx->pc = 0x1D3CE8u;
label_1d3ce8:
    // 0x1d3ce8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3cec: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x1d3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x1d3cf0: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x1d3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x1d3cf4: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d3cf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d3cf8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3cfc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3d00: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3d04: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3d08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d3d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3d0c: 0xa7a2015e  sh          $v0, 0x15E($sp)
    ctx->pc = 0x1d3d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3d10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d3d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d3d14: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1d3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1d3d18: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3d1c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3d20: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1d3d20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
label_1d3d24:
    // 0x1d3d24: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x1d3d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x1d3d28: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1d3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1d3d2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3D2Cu;
    {
        const bool branch_taken_0x1d3d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d2c) {
            ctx->pc = 0x1D3D5Cu;
            goto label_1d3d5c;
        }
    }
    ctx->pc = 0x1D3D34u;
    // 0x1d3d34: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d3d38: 0xa7a2015a  sh          $v0, 0x15A($sp)
    ctx->pc = 0x1d3d38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3d3c: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x1d3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1d3d40: 0xa7a2015c  sh          $v0, 0x15C($sp)
    ctx->pc = 0x1d3d40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d3d44: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1d3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x1d3d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3d4c: 0x0  nop
    ctx->pc = 0x1d3d4cu;
    // NOP
    // 0x1d3d50: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d3d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1d3d54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3D54u;
    {
        const bool branch_taken_0x1d3d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3d54) {
            ctx->pc = 0x1D3D70u;
            goto label_1d3d70;
        }
    }
    ctx->pc = 0x1D3D5Cu;
label_1d3d5c:
    // 0x1d3d5c: 0xa7a0015a  sh          $zero, 0x15A($sp)
    ctx->pc = 0x1d3d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d3d60: 0xa7a0015c  sh          $zero, 0x15C($sp)
    ctx->pc = 0x1d3d60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d3d64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3d68: 0x0  nop
    ctx->pc = 0x1d3d68u;
    // NOP
    // 0x1d3d6c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d3d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1d3d70:
    // 0x1d3d70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d3d74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d3d78: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1d3d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1d3d7c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D3D84u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D3D84u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3D84u) { return; }
    ctx->pc = 0x1D3D84u;
label_1d3d84:
    // 0x1d3d84: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d3d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d3d88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1d3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1d3d8c: 0x2445e510  addiu       $a1, $v0, -0x1AF0
    ctx->pc = 0x1d3d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
    // 0x1d3d90: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1D3D90u;
    SET_GPR_U32(ctx, 31, 0x1D3D98u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1D3D98u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3D98u) { return; }
    ctx->pc = 0x1D3D98u;
label_1d3d98:
    // 0x1d3d98: 0x97a2015e  lhu         $v0, 0x15E($sp)
    ctx->pc = 0x1d3d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 350)));
    // 0x1d3d9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d3d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d3da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3da4: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D3DA4u;
    {
        const bool branch_taken_0x1d3da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3da4) {
            ctx->pc = 0x1D3E44u;
            goto label_1d3e44;
        }
    }
    ctx->pc = 0x1D3DACu;
    // 0x1d3dac: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3db0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d3db0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3db4: 0x8fb10180  lw          $s1, 0x180($sp)
    ctx->pc = 0x1d3db4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3db8: 0x0  nop
    ctx->pc = 0x1d3db8u;
    // NOP
label_1d3dbc:
    // 0x1d3dbc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3dc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d3dc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3dc8: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3dcc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3dd0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x1d3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1d3dd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3dd8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3ddc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3DDCu;
    SET_GPR_U32(ctx, 31, 0x1D3DE4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3DE4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3DE4u) { return; }
    ctx->pc = 0x1D3DE4u;
label_1d3de4:
    // 0x1d3de4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3de8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d3dec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3df0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d3df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3df4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3df8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1d3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1d3dfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3e00: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1d3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3e04: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E04u;
    SET_GPR_U32(ctx, 31, 0x1D3E0Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E0Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E0Cu) { return; }
    ctx->pc = 0x1D3E0Cu;
label_1d3e0c:
    // 0x1d3e0c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d3e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d3e10: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x1d3e10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d3e14: 0x1020ffe9  beqz        $at, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D3E14u;
    {
        const bool branch_taken_0x1d3e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e14) {
            ctx->pc = 0x1D3DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3dbc;
        }
    }
    ctx->pc = 0x1D3E1Cu;
    // 0x1d3e1c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1d3e1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1d3e20: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d3e24: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E24u;
    SET_GPR_U32(ctx, 31, 0x1D3E2Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E2Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E2Cu) { return; }
    ctx->pc = 0x1D3E2Cu;
label_1d3e2c:
    // 0x1d3e2c: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1d3e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d3e30: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d3e34: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E34u;
    SET_GPR_U32(ctx, 31, 0x1D3E3Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E3Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E3Cu) { return; }
    ctx->pc = 0x1D3E3Cu;
label_1d3e3c:
    // 0x1d3e3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D3E3Cu;
    {
        const bool branch_taken_0x1d3e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e3c) {
            ctx->pc = 0x1D3E98u;
            goto label_1d3e98;
        }
    }
    ctx->pc = 0x1D3E44u;
label_1d3e44:
    // 0x1d3e44: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3e48: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d3e48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3e4c: 0x8fb10180  lw          $s1, 0x180($sp)
    ctx->pc = 0x1d3e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3e50: 0x0  nop
    ctx->pc = 0x1d3e50u;
    // NOP
label_1d3e54:
    // 0x1d3e54: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3e58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d3e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3e60: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3e64: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1d3e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1d3e68: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E68u;
    SET_GPR_U32(ctx, 31, 0x1D3E70u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E70u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E70u) { return; }
    ctx->pc = 0x1D3E70u;
label_1d3e70:
    // 0x1d3e70: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1d3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d3e74: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1d3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1d3e78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3e7c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d3e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3e80: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1d3e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x1d3e84: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1D3E84u;
    SET_GPR_U32(ctx, 31, 0x1D3E8Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1D3E8Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3E8Cu) { return; }
    ctx->pc = 0x1D3E8Cu;
label_1d3e8c:
    // 0x1d3e8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d3e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d3e90: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D3E90u;
    {
        const bool branch_taken_0x1d3e90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e90) {
            ctx->pc = 0x1D3E54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3e54;
        }
    }
    ctx->pc = 0x1D3E98u;
label_1d3e98:
    // 0x1d3e98: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x1d3e9c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d3ea0: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1d3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1d3ea4: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1d3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1d3ea8: 0x24550080  addiu       $s5, $v0, 0x80
    ctx->pc = 0x1d3ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d3eac: 0x8fb10180  lw          $s1, 0x180($sp)
    ctx->pc = 0x1d3eacu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3eb0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d3eb0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3eb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3ebc: 0x0  nop
    ctx->pc = 0x1d3ebcu;
    // NOP
    // 0x1d3ec0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1d3ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1d3ec4:
    // 0x1d3ec4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d3ec8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3ecc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1d3eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d3ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3ed4: 0x0  nop
    ctx->pc = 0x1d3ed4u;
    // NOP
    // 0x1d3ed8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d3ed8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d3edc: 0x0  nop
    ctx->pc = 0x1d3edcu;
    // NOP
    // 0x1d3ee0: 0x450100c3  bc1t        . + 4 + (0xC3 << 2)
    ctx->pc = 0x1D3EE0u;
    {
        const bool branch_taken_0x1d3ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d3ee0) {
            ctx->pc = 0x1D41F0u;
            goto label_1d41f0;
        }
    }
    ctx->pc = 0x1D3EE8u;
    // 0x1d3ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3eec: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d3ef0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3ef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3ef8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3efc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f00: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f04: 0x24570020  addiu       $s7, $v0, 0x20
    ctx->pc = 0x1d3f04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d3f08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3f0c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d3f10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3f18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3f1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f20: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f24: 0x245e0050  addiu       $fp, $v0, 0x50
    ctx->pc = 0x1d3f24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1d3f28: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d3f2c: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x1d3f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3f30: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x1d3f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1d3f34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d3f38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3f3c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D3F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F44u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D3F44u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3F44u) { return; }
    ctx->pc = 0x1D3F44u;
label_1d3f44:
    // 0x1d3f44: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d3f48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d3f4c: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x1d3f4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x1d3f50: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1d3f54: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1d3f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d3f58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3f5c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1D3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D3F64u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1D3F64u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D3F64u) { return; }
    ctx->pc = 0x1D3F64u;
label_1d3f64:
    // 0x1d3f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3f68: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d3f6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3f74: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3f78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f7c: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x1d3f7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3f84: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d3f88: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d3f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d3f90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3f94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f98: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f9c: 0x24540030  addiu       $s4, $v0, 0x30
    ctx->pc = 0x1d3f9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1d3fa0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d3fa4: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1d3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d3fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3fac: 0x0  nop
    ctx->pc = 0x1d3facu;
    // NOP
    // 0x1d3fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3fb4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d3fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d3fb8: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d3fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d3fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3fc0: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d3fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3fc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d3fc4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d3fc8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d3fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d3fcc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1d3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3fd0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d3fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3fd8: 0x0  nop
    ctx->pc = 0x1d3fd8u;
    // NOP
    // 0x1d3fdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d3fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d3fe0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d3fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3fe8: 0x0  nop
    ctx->pc = 0x1d3fe8u;
    // NOP
    // 0x1d3fec: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d3fecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d3ff0: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1d3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3ff4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d3ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d3ff8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d3ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3ffc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d3ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4000: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d4000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d4004: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1d4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1d4008: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1d4008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1d400c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d400cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4010: 0x0  nop
    ctx->pc = 0x1d4010u;
    // NOP
    // 0x1d4014: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4018: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d401c: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d401cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d4020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d4020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4024: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4028: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d4028u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d402c: 0x0  nop
    ctx->pc = 0x1d402cu;
    // NOP
    // 0x1d4030: 0x0  nop
    ctx->pc = 0x1d4030u;
    // NOP
    // 0x1d4034: 0x0  nop
    ctx->pc = 0x1d4034u;
    // NOP
    // 0x1d4038: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D4038u;
    SET_GPR_U32(ctx, 31, 0x1D4040u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D4038u, 0x1D4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4040u;
label_1d4040:
    // 0x1d4040: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d4044: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d4044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4048: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4048u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d404c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D404Cu;
    SET_GPR_U32(ctx, 31, 0x1D4054u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D404Cu, 0x1D4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4054u;
label_1d4054:
    // 0x1d4054: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4058: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D4058u;
    SET_GPR_U32(ctx, 31, 0x1D4060u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D4058u, 0x1D4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4060u;
label_1d4060:
    // 0x1d4060: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4064: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d4064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4068: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d406c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d406cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4070: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d4070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d4074: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1d4074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4078: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d407c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d407cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4080: 0x0  nop
    ctx->pc = 0x1d4080u;
    // NOP
    // 0x1d4084: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4088: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d408c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d408cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4090: 0x0  nop
    ctx->pc = 0x1d4090u;
    // NOP
    // 0x1d4094: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d4094u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4098: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1d4098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d409c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d409cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d40a0: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x1d40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d40a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d40a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d40a8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d40a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d40ac: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1d40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d40b0: 0x24429000  addiu       $v0, $v0, -0x7000
    ctx->pc = 0x1d40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
    // 0x1d40b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d40b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d40b8: 0x0  nop
    ctx->pc = 0x1d40b8u;
    // NOP
    // 0x1d40bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d40bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d40c0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d40c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d40c4: 0x3c024600  lui         $v0, 0x4600
    ctx->pc = 0x1d40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17920 << 16));
    // 0x1d40c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d40c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d40cc: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d40ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d40d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d40d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d40d4: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d40d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1d40d8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1d40d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d40dc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d40dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d40e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d40e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d40e4: 0x0  nop
    ctx->pc = 0x1d40e4u;
    // NOP
    // 0x1d40e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d40e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d40ec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d40f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d40f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d40f4: 0x0  nop
    ctx->pc = 0x1d40f4u;
    // NOP
    // 0x1d40f8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d40f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d40fc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1d40fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4100: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d4100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d4104: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1d4104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d4108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d410c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1d410cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1d4110: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x1d4110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1d4114: 0x24428700  addiu       $v0, $v0, -0x7900
    ctx->pc = 0x1d4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    // 0x1d4118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d411c: 0x0  nop
    ctx->pc = 0x1d411cu;
    // NOP
    // 0x1d4120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d4120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4124: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1d4128: 0x3c024560  lui         $v0, 0x4560
    ctx->pc = 0x1d4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17760 << 16));
    // 0x1d412c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d412cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4130: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1d4130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4134: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1d4134u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1d4138: 0x0  nop
    ctx->pc = 0x1d4138u;
    // NOP
    // 0x1d413c: 0x0  nop
    ctx->pc = 0x1d413cu;
    // NOP
    // 0x1d4140: 0x0  nop
    ctx->pc = 0x1d4140u;
    // NOP
    // 0x1d4144: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1D4144u;
    SET_GPR_U32(ctx, 31, 0x1D414Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1D4144u, 0x1D414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D414Cu;
label_1d414c:
    // 0x1d414c: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x1d414cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x1d4150: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1d4150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d4154: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1d4154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4158: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1D4158u;
    SET_GPR_U32(ctx, 31, 0x1D4160u);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1D4158u, 0x1D4160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4160u;
label_1d4160:
    // 0x1d4160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1d4160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4164: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1D4164u;
    SET_GPR_U32(ctx, 31, 0x1D416Cu);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1D4164u, 0x1D416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D416Cu;
label_1d416c:
    // 0x1d416c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d416cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4170: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d4170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4174: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x1d4174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4178: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d417c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d417cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d4180: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4184: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d4184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d418c: 0x0  nop
    ctx->pc = 0x1d418cu;
    // NOP
    // 0x1d4190: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1d4190u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4194: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1d4194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1d4198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d419c: 0x0  nop
    ctx->pc = 0x1d419cu;
    // NOP
    // 0x1d41a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1d41a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d41a4: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1d41a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d41a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1d41a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d41ac: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1d41acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d41b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d41b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d41b4: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x1d41b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1d41b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d41bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d41bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d41c0: 0x0  nop
    ctx->pc = 0x1d41c0u;
    // NOP
    // 0x1d41c4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1d41c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1d41c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d41c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d41cc: 0x0  nop
    ctx->pc = 0x1d41ccu;
    // NOP
    // 0x1d41d0: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x1d41d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1d41d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d41d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d41d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d41dc: 0x0  nop
    ctx->pc = 0x1d41dcu;
    // NOP
    // 0x1d41e0: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x1d41e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1d41e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d41e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d41e8: 0x0  nop
    ctx->pc = 0x1d41e8u;
    // NOP
    // 0x1d41ec: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x1d41ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1d41f0:
    // 0x1d41f0: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x1d41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d41f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d41f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d41f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d41fc: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x1d41fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4200: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d4200u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d4204: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1d4204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1d4208: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1d4208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1d420c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1d420cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1d4210: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d4210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d4214: 0x1620ff2b  bnez        $s1, . + 4 + (-0xD5 << 2)
    ctx->pc = 0x1D4214u;
    {
        const bool branch_taken_0x1d4214 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4214) {
            ctx->pc = 0x1D3EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ec4;
        }
    }
    ctx->pc = 0x1D421Cu;
    // 0x1d421c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d421cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d4220: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d4220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4224: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1d4224u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1d4228: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4228u;
    SET_GPR_U32(ctx, 31, 0x1D4230u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4228u, 0x1D4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4230u;
label_1d4230:
    // 0x1d4230: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d4230u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4234: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1d4234u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1d4238: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d4238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d423c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4240: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1d4240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1d4244: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4244u;
    SET_GPR_U32(ctx, 31, 0x1D424Cu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4244u, 0x1D424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D424Cu;
label_1d424c:
    // 0x1d424c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d424cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4250: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1d4250u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1d4254: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x1d4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d4258: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1d4258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d425c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1d425cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4260:
    // 0x1d4260: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d4260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d4264: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x1d4264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d4268: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d4268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d426c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d426cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d4270: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D4270u;
    SET_GPR_U32(ctx, 31, 0x1D4278u);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D4270u, 0x1D4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4278u;
label_1d4278:
    // 0x1d4278: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d4278u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d427c: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1d427cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1d4280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4284: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d4284u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d4288: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d428c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4290: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d4290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d4294: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d4294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d4298: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d4298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d429c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d42a0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1d42a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1d42a4: 0x1613bc  dsll32      $v0, $s6, 14
    ctx->pc = 0x1d42a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 14));
    // 0x1d42a8: 0x213be  dsrl32      $v0, $v0, 14
    ctx->pc = 0x1d42a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 14));
    // 0x1d42ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D42ACu;
    {
        const bool branch_taken_0x1d42ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d42ac) {
            ctx->pc = 0x1D42E0u;
            goto label_1d42e0;
        }
    }
    ctx->pc = 0x1D42B4u;
    // 0x1d42b4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1d42b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d42b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d42bc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1d42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d42c0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d42c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d42c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d42cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d42d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d42d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1d42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1d42d8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1d42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1d42dc: 0x0  nop
    ctx->pc = 0x1d42dcu;
    // NOP
label_1d42e0:
    // 0x1d42e0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d42e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d42e8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d42ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d42ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d42f0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1d42f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1d42f4: 0xc04f958  jal         func_13E560
    ctx->pc = 0x1D42F4u;
    SET_GPR_U32(ctx, 31, 0x1D42FCu);
    ctx->pc = 0x13E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E560u, 0x1D42F4u, 0x1D42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42FCu;
label_1d42fc:
    // 0x1d42fc: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d42fcu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d4300: 0x16b180  sll         $s6, $s6, 6
    ctx->pc = 0x1d4300u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1d4304: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4308: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1d4308u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d430c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d430cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d4310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4314: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d4314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4318: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d431c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d4320: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1d4320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1d4324: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d4324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d4328: 0x161bbc  dsll32      $v1, $s6, 14
    ctx->pc = 0x1d4328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 14));
    // 0x1d432c: 0x31bbe  dsrl32      $v1, $v1, 14
    ctx->pc = 0x1d432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 14));
    // 0x1d4330: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4330u;
    {
        const bool branch_taken_0x1d4330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4330) {
            ctx->pc = 0x1D4360u;
            goto label_1d4360;
        }
    }
    ctx->pc = 0x1D4338u;
    // 0x1d4338: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1d4338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d433c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4340: 0x102042  srl         $a0, $s0, 1
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1d4344: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d4344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d4348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d434c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d4350: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d4350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d4354: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d4354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d4358: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x1d4358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1d435c: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x1d435cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_1d4360:
    // 0x1d4360: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1d4360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1d4364: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d4368: 0x1620ffbd  bnez        $s1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1D4368u;
    {
        const bool branch_taken_0x1d4368 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4368) {
            ctx->pc = 0x1D4260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4260;
        }
    }
    ctx->pc = 0x1D4370u;
    // 0x1d4370: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d4370u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4374: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d4374u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4378: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d4378u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d437c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d437cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4380: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d4380u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4384: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d4384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d438c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d438cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4390: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d4390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4394: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4398: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x1d4398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1d439c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D439Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D439Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D43A4u;
}
