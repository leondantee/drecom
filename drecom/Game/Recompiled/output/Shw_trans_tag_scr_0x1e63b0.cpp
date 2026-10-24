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

// Function: Shw_trans_tag_scr
// Address: 0x1e63b0 - 0x1e7558
void Shw_trans_tag_scr_0x1e63b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_trans_tag_scr_0x1e63b0");
#endif

    switch (ctx->pc) {
        case 0x1e641cu: goto label_1e641c;
        case 0x1e644cu: goto label_1e644c;
        case 0x1e6460u: goto label_1e6460;
        case 0x1e649cu: goto label_1e649c;
        case 0x1e64b8u: goto label_1e64b8;
        case 0x1e64d0u: goto label_1e64d0;
        case 0x1e64e8u: goto label_1e64e8;
        case 0x1e6500u: goto label_1e6500;
        case 0x1e6524u: goto label_1e6524;
        case 0x1e6544u: goto label_1e6544;
        case 0x1e6560u: goto label_1e6560;
        case 0x1e657cu: goto label_1e657c;
        case 0x1e6594u: goto label_1e6594;
        case 0x1e65ccu: goto label_1e65cc;
        case 0x1e65ecu: goto label_1e65ec;
        case 0x1e6600u: goto label_1e6600;
        case 0x1e6618u: goto label_1e6618;
        case 0x1e6630u: goto label_1e6630;
        case 0x1e6648u: goto label_1e6648;
        case 0x1e6660u: goto label_1e6660;
        case 0x1e6674u: goto label_1e6674;
        case 0x1e66e0u: goto label_1e66e0;
        case 0x1e670cu: goto label_1e670c;
        case 0x1e6738u: goto label_1e6738;
        case 0x1e6760u: goto label_1e6760;
        case 0x1e677cu: goto label_1e677c;
        case 0x1e678cu: goto label_1e678c;
        case 0x1e67c8u: goto label_1e67c8;
        case 0x1e67e4u: goto label_1e67e4;
        case 0x1e67f8u: goto label_1e67f8;
        case 0x1e680cu: goto label_1e680c;
        case 0x1e6830u: goto label_1e6830;
        case 0x1e6844u: goto label_1e6844;
        case 0x1e6854u: goto label_1e6854;
        case 0x1e688cu: goto label_1e688c;
        case 0x1e68a8u: goto label_1e68a8;
        case 0x1e68c0u: goto label_1e68c0;
        case 0x1e68d4u: goto label_1e68d4;
        case 0x1e68fcu: goto label_1e68fc;
        case 0x1e6bc0u: goto label_1e6bc0;
        case 0x1e6c18u: goto label_1e6c18;
        case 0x1e6c44u: goto label_1e6c44;
        case 0x1e6c6cu: goto label_1e6c6c;
        case 0x1e6c8cu: goto label_1e6c8c;
        case 0x1e6ca0u: goto label_1e6ca0;
        case 0x1e6ce0u: goto label_1e6ce0;
        case 0x1e6d00u: goto label_1e6d00;
        case 0x1e6d1cu: goto label_1e6d1c;
        case 0x1e6d38u: goto label_1e6d38;
        case 0x1e6d60u: goto label_1e6d60;
        case 0x1e6d84u: goto label_1e6d84;
        case 0x1e6d9cu: goto label_1e6d9c;
        case 0x1e6ddcu: goto label_1e6ddc;
        case 0x1e6dfcu: goto label_1e6dfc;
        case 0x1e6e1cu: goto label_1e6e1c;
        case 0x1e6e38u: goto label_1e6e38;
        case 0x1e6e6cu: goto label_1e6e6c;
        case 0x1e6e98u: goto label_1e6e98;
        case 0x1e6eacu: goto label_1e6eac;
        case 0x1e6eecu: goto label_1e6eec;
        case 0x1e6f0cu: goto label_1e6f0c;
        case 0x1e6f28u: goto label_1e6f28;
        case 0x1e6f44u: goto label_1e6f44;
        case 0x1e6f70u: goto label_1e6f70;
        case 0x1e701cu: goto label_1e701c;
        case 0x1e7040u: goto label_1e7040;
        case 0x1e7060u: goto label_1e7060;
        case 0x1e7084u: goto label_1e7084;
        case 0x1e715cu: goto label_1e715c;
        case 0x1e717cu: goto label_1e717c;
        case 0x1e719cu: goto label_1e719c;
        case 0x1e71b8u: goto label_1e71b8;
        case 0x1e72a0u: goto label_1e72a0;
        case 0x1e72c4u: goto label_1e72c4;
        case 0x1e72e8u: goto label_1e72e8;
        case 0x1e7308u: goto label_1e7308;
        case 0x1e73fcu: goto label_1e73fc;
        case 0x1e7420u: goto label_1e7420;
        case 0x1e7444u: goto label_1e7444;
        case 0x1e7460u: goto label_1e7460;
        default: break;
    }

    ctx->pc = 0x1e63b0u;

    // 0x1e63b0: 0x27bdf5a0  addiu       $sp, $sp, -0xA60
    ctx->pc = 0x1e63b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964640));
    // 0x1e63b4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e63b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1e63b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e63b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e63bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e63bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e63c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e63c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e63c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e63c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e63c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e63c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e63cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e63ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e63d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e63d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e63d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e63d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e63d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e63d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e63dc: 0xafa40a30  sw          $a0, 0xA30($sp)
    ctx->pc = 0x1e63dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2608), GPR_U32(ctx, 4));
    // 0x1e63e0: 0xafa50a38  sw          $a1, 0xA38($sp)
    ctx->pc = 0x1e63e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2616), GPR_U32(ctx, 5));
    // 0x1e63e4: 0xafa60a40  sw          $a2, 0xA40($sp)
    ctx->pc = 0x1e63e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2624), GPR_U32(ctx, 6));
    // 0x1e63e8: 0xafa70a48  sw          $a3, 0xA48($sp)
    ctx->pc = 0x1e63e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2632), GPR_U32(ctx, 7));
    // 0x1e63ec: 0xafa80a50  sw          $t0, 0xA50($sp)
    ctx->pc = 0x1e63ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2640), GPR_U32(ctx, 8));
    // 0x1e63f0: 0xe7ac0a58  swc1        $f12, 0xA58($sp)
    ctx->pc = 0x1e63f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2648), bits); }
    // 0x1e63f4: 0x8fa40a38  lw          $a0, 0xA38($sp)
    ctx->pc = 0x1e63f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2616)));
    // 0x1e63f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e63f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e63fc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e63fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6400: 0x8fb40a40  lw          $s4, 0xA40($sp)
    ctx->pc = 0x1e6400u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2624)));
    // 0x1e6404: 0x72809628  paddub      $s2, $s4, $zero
    ctx->pc = 0x1e6404u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1e6408: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e6408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e640c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1e640cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1e6410: 0x2465e550  addiu       $a1, $v1, -0x1AB0
    ctx->pc = 0x1e6410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960464));
    // 0x1e6414: 0xc040ca2  jal         func_103288
    ctx->pc = 0x1E6414u;
    SET_GPR_U32(ctx, 31, 0x1E641Cu);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x1E641Cu;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E641Cu) { return; }
    ctx->pc = 0x1E641Cu;
label_1e641c:
    // 0x1e641c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e641cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6420: 0x8fa30a48  lw          $v1, 0xA48($sp)
    ctx->pc = 0x1e6420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2632)));
    // 0x1e6424: 0xafa30a28  sw          $v1, 0xA28($sp)
    ctx->pc = 0x1e6424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2600), GPR_U32(ctx, 3));
    // 0x1e6428: 0x8fb60a48  lw          $s6, 0xA48($sp)
    ctx->pc = 0x1e6428u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2632)));
    // 0x1e642c: 0x26c40060  addiu       $a0, $s6, 0x60
    ctx->pc = 0x1e642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x1e6430: 0xafa40a48  sw          $a0, 0xA48($sp)
    ctx->pc = 0x1e6430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2632), GPR_U32(ctx, 4));
    // 0x1e6434: 0x8fa30a30  lw          $v1, 0xA30($sp)
    ctx->pc = 0x1e6434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2608)));
    // 0x1e6438: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e643c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1e643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1e6440: 0x8fa60a50  lw          $a2, 0xA50($sp)
    ctx->pc = 0x1e6440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6444: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6444u;
    SET_GPR_U32(ctx, 31, 0x1E644Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E644Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E644Cu) { return; }
    ctx->pc = 0x1E644Cu;
label_1e644c:
    // 0x1e644c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1e644cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6450: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e6450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6454: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6458: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E6458u;
    SET_GPR_U32(ctx, 31, 0x1E6460u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6460u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6460u) { return; }
    ctx->pc = 0x1E6460u;
label_1e6460:
    // 0x1e6460: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6464: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6468: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6468u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e646c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e646cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e6470: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e6470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e6474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e647c: 0x0  nop
    ctx->pc = 0x1e647cu;
    // NOP
    // 0x1e6480: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e6480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e6484: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6488: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x1e6488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e648c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e648cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6490: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e6490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6494: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E6494u;
    SET_GPR_U32(ctx, 31, 0x1E649Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E649Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E649Cu) { return; }
    ctx->pc = 0x1E649Cu;
label_1e649c:
    // 0x1e649c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1e649cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1e64a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e64a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e64a4: 0x0  nop
    ctx->pc = 0x1e64a4u;
    // NOP
    // 0x1e64a8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e64a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e64ac: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e64acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e64b0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E64B0u;
    SET_GPR_U32(ctx, 31, 0x1E64B8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E64B8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E64B8u) { return; }
    ctx->pc = 0x1E64B8u;
label_1e64b8:
    // 0x1e64b8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e64b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e64bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e64bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e64c0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e64c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e64c4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e64c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e64c8: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E64C8u;
    SET_GPR_U32(ctx, 31, 0x1E64D0u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E64D0u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E64D0u) { return; }
    ctx->pc = 0x1E64D0u;
label_1e64d0:
    // 0x1e64d0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e64d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e64d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e64d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e64d8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e64d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e64dc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e64dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e64e0: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E64E0u;
    SET_GPR_U32(ctx, 31, 0x1E64E8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E64E8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E64E8u) { return; }
    ctx->pc = 0x1E64E8u;
label_1e64e8:
    // 0x1e64e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1e64e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e64ec: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x1e64ecu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e64f0: 0x8fa60a38  lw          $a2, 0xA38($sp)
    ctx->pc = 0x1e64f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2616)));
    // 0x1e64f4: 0x94c40002  lhu         $a0, 0x2($a2)
    ctx->pc = 0x1e64f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1e64f8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1e64f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e64fc: 0x70a0f628  paddub      $fp, $a1, $zero
    ctx->pc = 0x1e64fcu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1e6500:
    // 0x1e6500: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1e6500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e6504: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1e6504u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6508: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e6508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e650c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e650cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6510: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6514: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x1e6514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e6518: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e6518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e651c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E651Cu;
    SET_GPR_U32(ctx, 31, 0x1E6524u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E6524u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6524u) { return; }
    ctx->pc = 0x1E6524u;
label_1e6524:
    // 0x1e6524: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6524u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6528: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e6528u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e652c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e652cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6530: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1e6530u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e6534: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1e6534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6538: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e6538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e653c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E653Cu;
    SET_GPR_U32(ctx, 31, 0x1E6544u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E6544u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6544u) { return; }
    ctx->pc = 0x1E6544u;
label_1e6544:
    // 0x1e6544: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x1e6544u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6548: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x1e6548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e654c: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x1e654cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6550: 0x2552821  addu        $a1, $s2, $s5
    ctx->pc = 0x1e6550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x1e6554: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e6554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e6558: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E6558u;
    SET_GPR_U32(ctx, 31, 0x1E6560u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E6560u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6560u) { return; }
    ctx->pc = 0x1E6560u;
label_1e6560:
    // 0x1e6560: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6564: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6568: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e6568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e656c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e656cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6570: 0x8fa60a50  lw          $a2, 0xA50($sp)
    ctx->pc = 0x1e6570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6574: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6574u;
    SET_GPR_U32(ctx, 31, 0x1E657Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E657Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E657Cu) { return; }
    ctx->pc = 0x1E657Cu;
label_1e657c:
    // 0x1e657c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6580: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6580u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6584: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6588: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e6588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e658c: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E658Cu;
    SET_GPR_U32(ctx, 31, 0x1E6594u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6594u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6594u) { return; }
    ctx->pc = 0x1E6594u;
label_1e6594:
    // 0x1e6594: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6598: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e659c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e659cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e65a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e65a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e65a4: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e65a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e65a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e65ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e65acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e65b0: 0x0  nop
    ctx->pc = 0x1e65b0u;
    // NOP
    // 0x1e65b4: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e65b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e65b8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e65b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e65bc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e65c0: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e65c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e65c4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E65C4u;
    SET_GPR_U32(ctx, 31, 0x1E65CCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E65CCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E65CCu) { return; }
    ctx->pc = 0x1E65CCu;
label_1e65cc:
    // 0x1e65cc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e65ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1e65d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e65d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e65d4: 0x0  nop
    ctx->pc = 0x1e65d4u;
    // NOP
    // 0x1e65d8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e65d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e65dc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e65dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e65e0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e65e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e65e4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E65E4u;
    SET_GPR_U32(ctx, 31, 0x1E65ECu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E65ECu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E65ECu) { return; }
    ctx->pc = 0x1E65ECu;
label_1e65ec:
    // 0x1e65ec: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e65f0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e65f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e65f4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e65f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e65f8: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E65F8u;
    SET_GPR_U32(ctx, 31, 0x1E6600u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E6600u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6600u) { return; }
    ctx->pc = 0x1E6600u;
label_1e6600:
    // 0x1e6600: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e6600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6604: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1e6604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6608: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e6608u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e660c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e660cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6610: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E6610u;
    SET_GPR_U32(ctx, 31, 0x1E6618u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E6618u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6618u) { return; }
    ctx->pc = 0x1E6618u;
label_1e6618:
    // 0x1e6618: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e661c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e661cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6620: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1e6620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e6624: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e6624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e6628: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6628u;
    SET_GPR_U32(ctx, 31, 0x1E6630u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6630u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6630u) { return; }
    ctx->pc = 0x1E6630u;
label_1e6630:
    // 0x1e6630: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1e6630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e6634: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6634u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6638: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e6638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e663c: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1e663cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e6640: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6640u;
    SET_GPR_U32(ctx, 31, 0x1E6648u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6648u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6648u) { return; }
    ctx->pc = 0x1E6648u;
label_1e6648:
    // 0x1e6648: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6648u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e664c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1e664cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e6650: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1e6650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e6654: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6658: 0xc040c12  jal         func_103048
    ctx->pc = 0x1E6658u;
    SET_GPR_U32(ctx, 31, 0x1E6660u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x1E6660u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6660u) { return; }
    ctx->pc = 0x1E6660u;
label_1e6660:
    // 0x1e6660: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6660u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6664: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e6664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6668: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1e6668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1e666c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1E666Cu;
    SET_GPR_U32(ctx, 31, 0x1E6674u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1E6674u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6674u) { return; }
    ctx->pc = 0x1E6674u;
label_1e6674:
    // 0x1e6674: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e6674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e6678: 0x0  nop
    ctx->pc = 0x1e6678u;
    // NOP
    // 0x1e667c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e667cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e6680: 0x0  nop
    ctx->pc = 0x1e6680u;
    // NOP
    // 0x1e6684: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6684u;
    {
        const bool branch_taken_0x1e6684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6684) {
            ctx->pc = 0x1E66A0u;
            goto label_1e66a0;
        }
    }
    ctx->pc = 0x1E668Cu;
    // 0x1e668c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e668cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6690: 0x27d3021  addu        $a2, $s3, $sp
    ctx->pc = 0x1e6690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e6694: 0xa0c50220  sb          $a1, 0x220($a2)
    ctx->pc = 0x1e6694u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 544), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e6698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6698u;
    {
        const bool branch_taken_0x1e6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6698) {
            ctx->pc = 0x1E66B8u;
            goto label_1e66b8;
        }
    }
    ctx->pc = 0x1E66A0u;
label_1e66a0:
    // 0x1e66a0: 0x27d2021  addu        $a0, $s3, $sp
    ctx->pc = 0x1e66a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e66a4: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x1e66a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e66a8: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e66ac: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e66acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e66b0: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x1E66B0u;
    {
        const bool branch_taken_0x1e66b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e66b0) {
            ctx->pc = 0x1E6B78u;
            goto label_1e6b78;
        }
    }
    ctx->pc = 0x1E66B8u;
label_1e66b8:
    // 0x1e66b8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e66b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e66bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e66bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e66c0: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x1e66c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e66c4: 0x2473021  addu        $a2, $s2, $a3
    ctx->pc = 0x1e66c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1e66c8: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x1e66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e66cc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1e66ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e66d0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e66d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e66d4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e66d4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e66d8: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E66D8u;
    SET_GPR_U32(ctx, 31, 0x1E66E0u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E66E0u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E66E0u) { return; }
    ctx->pc = 0x1E66E0u;
label_1e66e0:
    // 0x1e66e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e66e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e66e4: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e66e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e66e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e66e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e66ec: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1e66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e66f0: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1e66f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e66f4: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x1e66f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e66f8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1e66f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e66fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e66fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6700: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6700u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6704: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6704u;
    SET_GPR_U32(ctx, 31, 0x1E670Cu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E670Cu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E670Cu) { return; }
    ctx->pc = 0x1E670Cu;
label_1e670c:
    // 0x1e670c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e670cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6710: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x1e6710u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6714: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1e6714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e6718: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e671c: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x1e671cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e6720: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e6720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e6724: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6724u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6728: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e672c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e672cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6730: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6730u;
    SET_GPR_U32(ctx, 31, 0x1E6738u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6738u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6738u) { return; }
    ctx->pc = 0x1E6738u;
label_1e6738:
    // 0x1e6738: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x1e6738u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e673c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1e673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e6740: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1e6740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6744: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x1e6744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1e6748: 0x27a201f0  addiu       $v0, $sp, 0x1F0
    ctx->pc = 0x1e6748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e674c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e674cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6750: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6754: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6754u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6758: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6758u;
    SET_GPR_U32(ctx, 31, 0x1E6760u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6760u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6760u) { return; }
    ctx->pc = 0x1E6760u;
label_1e6760:
    // 0x1e6760: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6764: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6768: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1e6768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e676c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e676cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6770: 0x8fa60a50  lw          $a2, 0xA50($sp)
    ctx->pc = 0x1e6770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6774: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6774u;
    SET_GPR_U32(ctx, 31, 0x1E677Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E677Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E677Cu) { return; }
    ctx->pc = 0x1E677Cu;
label_1e677c:
    // 0x1e677c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e677cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6780: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6784: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E6784u;
    SET_GPR_U32(ctx, 31, 0x1E678Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E678Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E678Cu) { return; }
    ctx->pc = 0x1E678Cu;
label_1e678c:
    // 0x1e678c: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6790: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6794: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6794u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e6798: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e6798u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e679c: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e679cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e67a0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1e67a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e67a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e67a8: 0x0  nop
    ctx->pc = 0x1e67a8u;
    // NOP
    // 0x1e67ac: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e67acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e67b0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e67b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e67b4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e67b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e67b8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e67b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e67bc: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e67bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e67c0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E67C0u;
    SET_GPR_U32(ctx, 31, 0x1E67C8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E67C8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E67C8u) { return; }
    ctx->pc = 0x1E67C8u;
label_1e67c8:
    // 0x1e67c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e67cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e67ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e67d0: 0x0  nop
    ctx->pc = 0x1e67d0u;
    // NOP
    // 0x1e67d4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e67d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e67d8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e67dc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E67DCu;
    SET_GPR_U32(ctx, 31, 0x1E67E4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E67E4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E67E4u) { return; }
    ctx->pc = 0x1E67E4u;
label_1e67e4:
    // 0x1e67e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e67e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e67e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e67e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e67ec: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e67ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e67f0: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E67F0u;
    SET_GPR_U32(ctx, 31, 0x1E67F8u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E67F8u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E67F8u) { return; }
    ctx->pc = 0x1E67F8u;
label_1e67f8:
    // 0x1e67f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e67fc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e67fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6800: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6804: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E6804u;
    SET_GPR_U32(ctx, 31, 0x1E680Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E680Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E680Cu) { return; }
    ctx->pc = 0x1E680Cu;
label_1e680c:
    // 0x1e680c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e680cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e6810: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1e6810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6814: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x1e6814u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6818: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x1e6818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1e681c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x1e681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e6820: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6824: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6824u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6828: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6828u;
    SET_GPR_U32(ctx, 31, 0x1E6830u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6830u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6830u) { return; }
    ctx->pc = 0x1E6830u;
label_1e6830:
    // 0x1e6830: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6834: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1e6834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e6838: 0x8fa60a50  lw          $a2, 0xA50($sp)
    ctx->pc = 0x1e6838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e683c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E683Cu;
    SET_GPR_U32(ctx, 31, 0x1E6844u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6844u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6844u) { return; }
    ctx->pc = 0x1E6844u;
label_1e6844:
    // 0x1e6844: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e6844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6848: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e684c: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E684Cu;
    SET_GPR_U32(ctx, 31, 0x1E6854u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6854u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6854u) { return; }
    ctx->pc = 0x1E6854u;
label_1e6854:
    // 0x1e6854: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6858: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e685c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e685cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e6860: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e6860u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e6864: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e6864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e6868: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e686c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e686cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6870: 0x0  nop
    ctx->pc = 0x1e6870u;
    // NOP
    // 0x1e6874: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e6874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e6878: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e687c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6880: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6884: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E6884u;
    SET_GPR_U32(ctx, 31, 0x1E688Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E688Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E688Cu) { return; }
    ctx->pc = 0x1E688Cu;
label_1e688c:
    // 0x1e688c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e688cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6894: 0x0  nop
    ctx->pc = 0x1e6894u;
    // NOP
    // 0x1e6898: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e689c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e68a0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E68A0u;
    SET_GPR_U32(ctx, 31, 0x1E68A8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E68A8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E68A8u) { return; }
    ctx->pc = 0x1E68A8u;
label_1e68a8:
    // 0x1e68a8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e68ac: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e68acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e68b0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e68b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e68b4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e68b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e68b8: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E68B8u;
    SET_GPR_U32(ctx, 31, 0x1E68C0u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E68C0u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E68C0u) { return; }
    ctx->pc = 0x1E68C0u;
label_1e68c0:
    // 0x1e68c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e68c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e68c4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e68c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e68c8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e68c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e68cc: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E68CCu;
    SET_GPR_U32(ctx, 31, 0x1E68D4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E68D4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E68D4u) { return; }
    ctx->pc = 0x1E68D4u;
label_1e68d4:
    // 0x1e68d4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e68d4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e68d8: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x1e68d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e68dc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1e68dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e68e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e68e4: 0x2433021  addu        $a2, $s2, $v1
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e68e8: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1e68e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e68ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e68f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e68f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e68f4: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E68F4u;
    SET_GPR_U32(ctx, 31, 0x1E68FCu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E68FCu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E68FCu) { return; }
    ctx->pc = 0x1E68FCu;
label_1e68fc:
    // 0x1e68fc: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x1e68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1e6900: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E6900u;
    {
        const bool branch_taken_0x1e6900 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6900) {
            ctx->pc = 0x1E6948u;
            goto label_1e6948;
        }
    }
    ctx->pc = 0x1E6908u;
    // 0x1e6908: 0x8fb401d8  lw          $s4, 0x1D8($sp)
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1e690c: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x1E690Cu;
    {
        const bool branch_taken_0x1e690c = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x1e690c) {
            ctx->pc = 0x1E6948u;
            goto label_1e6948;
        }
    }
    ctx->pc = 0x1E6914u;
    // 0x1e6914: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1e6914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1e6918: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E6918u;
    {
        const bool branch_taken_0x1e6918 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e6918) {
            ctx->pc = 0x1E6948u;
            goto label_1e6948;
        }
    }
    ctx->pc = 0x1E6920u;
    // 0x1e6920: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1e6924: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6924u;
    {
        const bool branch_taken_0x1e6924 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6924) {
            ctx->pc = 0x1E6948u;
            goto label_1e6948;
        }
    }
    ctx->pc = 0x1E692Cu;
    // 0x1e692c: 0x8fb50208  lw          $s5, 0x208($sp)
    ctx->pc = 0x1e692cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1e6930: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6930u;
    {
        const bool branch_taken_0x1e6930 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x1e6930) {
            ctx->pc = 0x1E6948u;
            goto label_1e6948;
        }
    }
    ctx->pc = 0x1E6938u;
    // 0x1e6938: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x1e6938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1e693c: 0x4810008  bgez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E693Cu;
    {
        const bool branch_taken_0x1e693c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1e693c) {
            ctx->pc = 0x1E6960u;
            goto label_1e6960;
        }
    }
    ctx->pc = 0x1E6944u;
    // 0x1e6944: 0x0  nop
    ctx->pc = 0x1e6944u;
    // NOP
label_1e6948:
    // 0x1e6948: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e6948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e694c: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e694cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6950: 0x26360010  addiu       $s6, $s1, 0x10
    ctx->pc = 0x1e6950u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6954: 0x72c08e28  paddub      $s1, $s6, $zero
    ctx->pc = 0x1e6954u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1e6958: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1E6958u;
    {
        const bool branch_taken_0x1e6958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6958) {
            ctx->pc = 0x1E6B78u;
            goto label_1e6b78;
        }
    }
    ctx->pc = 0x1E6960u;
label_1e6960:
    // 0x1e6960: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x1e6960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e6964: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6964u;
    {
        const bool branch_taken_0x1e6964 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e6964) {
            ctx->pc = 0x1E69A0u;
            goto label_1e69a0;
        }
    }
    ctx->pc = 0x1E696Cu;
    // 0x1e696c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e6970: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6974: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6978: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6978u;
    {
        const bool branch_taken_0x1e6978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6978) {
            ctx->pc = 0x1E69A0u;
            goto label_1e69a0;
        }
    }
    ctx->pc = 0x1E6980u;
    // 0x1e6980: 0x8fb701c4  lw          $s7, 0x1C4($sp)
    ctx->pc = 0x1e6980u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e6984: 0x6e00006  bltz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6984u;
    {
        const bool branch_taken_0x1e6984 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x1e6984) {
            ctx->pc = 0x1E69A0u;
            goto label_1e69a0;
        }
    }
    ctx->pc = 0x1E698Cu;
    // 0x1e698c: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x1e698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e6990: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6994: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1e6994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6998: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6998u;
    {
        const bool branch_taken_0x1e6998 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6998) {
            ctx->pc = 0x1E69B8u;
            goto label_1e69b8;
        }
    }
    ctx->pc = 0x1E69A0u;
label_1e69a0:
    // 0x1e69a0: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e69a4: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e69a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e69a8: 0x26340010  addiu       $s4, $s1, 0x10
    ctx->pc = 0x1e69a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e69ac: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1e69acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1e69b0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1E69B0u;
    {
        const bool branch_taken_0x1e69b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e69b0) {
            ctx->pc = 0x1E6B78u;
            goto label_1e6b78;
        }
    }
    ctx->pc = 0x1E69B8u;
label_1e69b8:
    // 0x1e69b8: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e69bc: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E69BCu;
    {
        const bool branch_taken_0x1e69bc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e69bc) {
            ctx->pc = 0x1E69F8u;
            goto label_1e69f8;
        }
    }
    ctx->pc = 0x1E69C4u;
    // 0x1e69c4: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x1e69c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e69c8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e69c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e69cc: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x1e69ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e69d0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E69D0u;
    {
        const bool branch_taken_0x1e69d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e69d0) {
            ctx->pc = 0x1E69F8u;
            goto label_1e69f8;
        }
    }
    ctx->pc = 0x1E69D8u;
    // 0x1e69d8: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e69dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E69DCu;
    {
        const bool branch_taken_0x1e69dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e69dc) {
            ctx->pc = 0x1E69F8u;
            goto label_1e69f8;
        }
    }
    ctx->pc = 0x1E69E4u;
    // 0x1e69e4: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e69e8: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e69e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e69ec: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e69ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e69f0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E69F0u;
    {
        const bool branch_taken_0x1e69f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e69f0) {
            ctx->pc = 0x1E6A10u;
            goto label_1e6a10;
        }
    }
    ctx->pc = 0x1E69F8u;
label_1e69f8:
    // 0x1e69f8: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e69fc: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e69fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6a00: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6a04: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1e6a04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6a08: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1E6A08u;
    {
        const bool branch_taken_0x1e6a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a08) {
            ctx->pc = 0x1E6B78u;
            goto label_1e6b78;
        }
    }
    ctx->pc = 0x1E6A10u;
label_1e6a10:
    // 0x1e6a10: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e6a14: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6A14u;
    {
        const bool branch_taken_0x1e6a14 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6a14) {
            ctx->pc = 0x1E6A50u;
            goto label_1e6a50;
        }
    }
    ctx->pc = 0x1E6A1Cu;
    // 0x1e6a1c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1e6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e6a20: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6a24: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6a28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6A28u;
    {
        const bool branch_taken_0x1e6a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a28) {
            ctx->pc = 0x1E6A50u;
            goto label_1e6a50;
        }
    }
    ctx->pc = 0x1E6A30u;
    // 0x1e6a30: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1e6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e6a34: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6A34u;
    {
        const bool branch_taken_0x1e6a34 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6a34) {
            ctx->pc = 0x1E6A50u;
            goto label_1e6a50;
        }
    }
    ctx->pc = 0x1E6A3Cu;
    // 0x1e6a3c: 0x8fb001e4  lw          $s0, 0x1E4($sp)
    ctx->pc = 0x1e6a3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e6a40: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6a44: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x1e6a44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6a48: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6A48u;
    {
        const bool branch_taken_0x1e6a48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a48) {
            ctx->pc = 0x1E6A68u;
            goto label_1e6a68;
        }
    }
    ctx->pc = 0x1E6A50u;
label_1e6a50:
    // 0x1e6a50: 0x27d2821  addu        $a1, $s3, $sp
    ctx->pc = 0x1e6a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e6a54: 0xa0a00220  sb          $zero, 0x220($a1)
    ctx->pc = 0x1e6a54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6a58: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e6a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6a5c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e6a5cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6a60: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1E6A60u;
    {
        const bool branch_taken_0x1e6a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a60) {
            ctx->pc = 0x1E6B78u;
            goto label_1e6b78;
        }
    }
    ctx->pc = 0x1E6A68u;
label_1e6a68:
    // 0x1e6a68: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1e6a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e6a6c: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6A6Cu;
    {
        const bool branch_taken_0x1e6a6c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6a6c) {
            ctx->pc = 0x1E6AA8u;
            goto label_1e6aa8;
        }
    }
    ctx->pc = 0x1E6A74u;
    // 0x1e6a74: 0x8fb001f0  lw          $s0, 0x1F0($sp)
    ctx->pc = 0x1e6a74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e6a78: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6a7c: 0x201082a  slt         $at, $s0, $at
    ctx->pc = 0x1e6a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6a80: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6A80u;
    {
        const bool branch_taken_0x1e6a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a80) {
            ctx->pc = 0x1E6AA8u;
            goto label_1e6aa8;
        }
    }
    ctx->pc = 0x1E6A88u;
    // 0x1e6a88: 0x8fa501f4  lw          $a1, 0x1F4($sp)
    ctx->pc = 0x1e6a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e6a8c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6A8Cu;
    {
        const bool branch_taken_0x1e6a8c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e6a8c) {
            ctx->pc = 0x1E6AA8u;
            goto label_1e6aa8;
        }
    }
    ctx->pc = 0x1E6A94u;
    // 0x1e6a94: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x1e6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e6a98: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6a9c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6a9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6aa0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6AA0u;
    {
        const bool branch_taken_0x1e6aa0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6aa0) {
            ctx->pc = 0x1E6AC0u;
            goto label_1e6ac0;
        }
    }
    ctx->pc = 0x1E6AA8u;
label_1e6aa8:
    // 0x1e6aa8: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e6aac: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e6aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6ab0: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1e6ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6ab4: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x1e6ab4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e6ab8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E6AB8u;
    {
        const bool branch_taken_0x1e6ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6ab8) {
            ctx->pc = 0x1E6B78u;
            goto label_1e6b78;
        }
    }
    ctx->pc = 0x1E6AC0u;
label_1e6ac0:
    // 0x1e6ac0: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x1e6ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e6ac4: 0x4a0000e  bltz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6AC4u;
    {
        const bool branch_taken_0x1e6ac4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1e6ac4) {
            ctx->pc = 0x1E6B00u;
            goto label_1e6b00;
        }
    }
    ctx->pc = 0x1E6ACCu;
    // 0x1e6acc: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x1e6accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e6ad0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6ad4: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6ad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6ad8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6AD8u;
    {
        const bool branch_taken_0x1e6ad8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6ad8) {
            ctx->pc = 0x1E6B00u;
            goto label_1e6b00;
        }
    }
    ctx->pc = 0x1E6AE0u;
    // 0x1e6ae0: 0x8fb00204  lw          $s0, 0x204($sp)
    ctx->pc = 0x1e6ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e6ae4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6AE4u;
    {
        const bool branch_taken_0x1e6ae4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1e6ae4) {
            ctx->pc = 0x1E6B00u;
            goto label_1e6b00;
        }
    }
    ctx->pc = 0x1E6AECu;
    // 0x1e6aec: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x1e6aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e6af0: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6af0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6af4: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1e6af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6af8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6AF8u;
    {
        const bool branch_taken_0x1e6af8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6af8) {
            ctx->pc = 0x1E6B18u;
            goto label_1e6b18;
        }
    }
    ctx->pc = 0x1E6B00u;
label_1e6b00:
    // 0x1e6b00: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e6b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e6b04: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e6b04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6b08: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1e6b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6b0c: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x1e6b0cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e6b10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1E6B10u;
    {
        const bool branch_taken_0x1e6b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b10) {
            ctx->pc = 0x1E6B78u;
            goto label_1e6b78;
        }
    }
    ctx->pc = 0x1E6B18u;
label_1e6b18:
    // 0x1e6b18: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x1e6b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e6b1c: 0x460000e  bltz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E6B1Cu;
    {
        const bool branch_taken_0x1e6b1c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1e6b1c) {
            ctx->pc = 0x1E6B58u;
            goto label_1e6b58;
        }
    }
    ctx->pc = 0x1E6B24u;
    // 0x1e6b24: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x1e6b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e6b28: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6b2c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6b2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6b30: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E6B30u;
    {
        const bool branch_taken_0x1e6b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b30) {
            ctx->pc = 0x1E6B58u;
            goto label_1e6b58;
        }
    }
    ctx->pc = 0x1E6B38u;
    // 0x1e6b38: 0x8fa40214  lw          $a0, 0x214($sp)
    ctx->pc = 0x1e6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e6b3c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6B3Cu;
    {
        const bool branch_taken_0x1e6b3c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1e6b3c) {
            ctx->pc = 0x1E6B58u;
            goto label_1e6b58;
        }
    }
    ctx->pc = 0x1E6B44u;
    // 0x1e6b44: 0x8fa30214  lw          $v1, 0x214($sp)
    ctx->pc = 0x1e6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e6b48: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e6b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e6b4c: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1e6b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1e6b50: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E6B50u;
    {
        const bool branch_taken_0x1e6b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b50) {
            ctx->pc = 0x1E6B70u;
            goto label_1e6b70;
        }
    }
    ctx->pc = 0x1E6B58u;
label_1e6b58:
    // 0x1e6b58: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e6b5c: 0xa0600220  sb          $zero, 0x220($v1)
    ctx->pc = 0x1e6b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e6b60: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1e6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6b64: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1e6b64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6B68u;
    {
        const bool branch_taken_0x1e6b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b68) {
            ctx->pc = 0x1E6B78u;
            goto label_1e6b78;
        }
    }
    ctx->pc = 0x1E6B70u;
label_1e6b70:
    // 0x1e6b70: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e6b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6b74: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e6b74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_1e6b78:
    // 0x1e6b78: 0x27d4ffff  addiu       $s4, $fp, -0x1
    ctx->pc = 0x1e6b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e6b7c: 0x7280f628  paddub      $fp, $s4, $zero
    ctx->pc = 0x1e6b7cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1e6b80: 0x1680fe5f  bnez        $s4, . + 4 + (-0x1A1 << 2)
    ctx->pc = 0x1E6B80u;
    {
        const bool branch_taken_0x1e6b80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b80) {
            ctx->pc = 0x1E6500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6500;
        }
    }
    ctx->pc = 0x1E6B88u;
    // 0x1e6b88: 0x8fa40a48  lw          $a0, 0xA48($sp)
    ctx->pc = 0x1e6b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2632)));
    // 0x1e6b8c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e6b8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6b90: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e6b94: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e6b94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6b98: 0x8fa50a38  lw          $a1, 0xA38($sp)
    ctx->pc = 0x1e6b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2616)));
    // 0x1e6b9c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e6b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e6ba0: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x1e6ba0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6ba4: 0x8fa30a38  lw          $v1, 0xA38($sp)
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2616)));
    // 0x1e6ba8: 0x94760002  lhu         $s6, 0x2($v1)
    ctx->pc = 0x1e6ba8u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e6bac: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x1e6bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x1e6bb0: 0x7080f628  paddub      $fp, $a0, $zero
    ctx->pc = 0x1e6bb0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6bb4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e6bb4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6bb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6bbc: 0xafa30a24  sw          $v1, 0xA24($sp)
    ctx->pc = 0x1e6bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2596), GPR_U32(ctx, 3));
label_1e6bc0:
    // 0x1e6bc0: 0x8fa40a24  lw          $a0, 0xA24($sp)
    ctx->pc = 0x1e6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2596)));
    // 0x1e6bc4: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1e6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e6bc8: 0xafa50a24  sw          $a1, 0xA24($sp)
    ctx->pc = 0x1e6bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2596), GPR_U32(ctx, 5));
    // 0x1e6bcc: 0x8fa60a24  lw          $a2, 0xA24($sp)
    ctx->pc = 0x1e6bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2596)));
    // 0x1e6bd0: 0xdda021  addu        $s4, $a2, $sp
    ctx->pc = 0x1e6bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1e6bd4: 0x92840220  lbu         $a0, 0x220($s4)
    ctx->pc = 0x1e6bd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 544)));
    // 0x1e6bd8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6BD8u;
    {
        const bool branch_taken_0x1e6bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6bd8) {
            ctx->pc = 0x1E6BF0u;
            goto label_1e6bf0;
        }
    }
    ctx->pc = 0x1E6BE0u;
    // 0x1e6be0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1e6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e6be4: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1e6be4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6be8: 0x10000225  b           . + 4 + (0x225 << 2)
    ctx->pc = 0x1E6BE8u;
    {
        const bool branch_taken_0x1e6be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6be8) {
            ctx->pc = 0x1E7480u;
            goto label_1e7480;
        }
    }
    ctx->pc = 0x1E6BF0u;
label_1e6bf0:
    // 0x1e6bf0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1e6bf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6bf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e6bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6bf8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1e6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6bfc: 0x2443021  addu        $a2, $s2, $a0
    ctx->pc = 0x1e6bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1e6c00: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1e6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e6c04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6c04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c08: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6c0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6c0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6c10: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6C10u;
    SET_GPR_U32(ctx, 31, 0x1E6C18u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6C18u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6C18u) { return; }
    ctx->pc = 0x1E6C18u;
label_1e6c18:
    // 0x1e6c18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6c18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c1c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1e6c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e6c20: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1e6c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6c24: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e6c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6c28: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1e6c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6c2c: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1e6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e6c30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6c38: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6c38u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6c3c: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6C3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C44u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6C44u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6C44u) { return; }
    ctx->pc = 0x1E6C44u;
label_1e6c44:
    // 0x1e6c44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c48: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1e6c48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6c4c: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1e6c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1e6c50: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x1e6c50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1e6c54: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x1e6c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6c58: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x1e6c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e6c5c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6c60: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6c60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6c64: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6C64u;
    SET_GPR_U32(ctx, 31, 0x1E6C6Cu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6C6Cu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6C6Cu) { return; }
    ctx->pc = 0x1E6C6Cu;
label_1e6c6c:
    // 0x1e6c6c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6c70: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e6c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6c74: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6c78: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x1e6c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e6c7c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6c80: 0x8fa60a50  lw          $a2, 0xA50($sp)
    ctx->pc = 0x1e6c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6c84: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6C84u;
    SET_GPR_U32(ctx, 31, 0x1E6C8Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6C8Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6C8Cu) { return; }
    ctx->pc = 0x1E6C8Cu;
label_1e6c8c:
    // 0x1e6c8c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e6c8cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6c90: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e6c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6c94: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6c98: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E6C98u;
    SET_GPR_U32(ctx, 31, 0x1E6CA0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6CA0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6CA0u) { return; }
    ctx->pc = 0x1E6CA0u;
label_1e6ca0:
    // 0x1e6ca0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6ca0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6ca4: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6ca8: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6cac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6cacu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e6cb0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e6cb0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e6cb4: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e6cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e6cb8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6cbc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e6cbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6cc0: 0x0  nop
    ctx->pc = 0x1e6cc0u;
    // NOP
    // 0x1e6cc4: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e6cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e6cc8: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1e6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6ccc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6cccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6cd0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e6cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6cd4: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e6cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6cd8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E6CD8u;
    SET_GPR_U32(ctx, 31, 0x1E6CE0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E6CE0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6CE0u) { return; }
    ctx->pc = 0x1E6CE0u;
label_1e6ce0:
    // 0x1e6ce0: 0x3c153f80  lui         $s5, 0x3F80
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6ce4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1e6ce4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6ce8: 0x0  nop
    ctx->pc = 0x1e6ce8u;
    // NOP
    // 0x1e6cec: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e6cf0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6cf4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6cf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6cf8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E6CF8u;
    SET_GPR_U32(ctx, 31, 0x1E6D00u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E6D00u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D00u) { return; }
    ctx->pc = 0x1E6D00u;
label_1e6d00:
    // 0x1e6d00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6d00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d04: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6d08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d0c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d10: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6d14: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E6D14u;
    SET_GPR_U32(ctx, 31, 0x1E6D1Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E6D1Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D1Cu) { return; }
    ctx->pc = 0x1E6D1Cu;
label_1e6d1c:
    // 0x1e6d1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6d1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d20: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6d24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6d2c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d30: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E6D30u;
    SET_GPR_U32(ctx, 31, 0x1E6D38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E6D38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D38u) { return; }
    ctx->pc = 0x1E6D38u;
label_1e6d38:
    // 0x1e6d38: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1e6d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e6d3c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e6d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6d40: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1e6d40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e6d44: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1e6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6d48: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x1e6d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e6d4c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6d50: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6d50u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d54: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6d54u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6d58: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6D58u;
    SET_GPR_U32(ctx, 31, 0x1E6D60u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6D60u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D60u) { return; }
    ctx->pc = 0x1E6D60u;
label_1e6d60:
    // 0x1e6d60: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x1e6d60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e6d64: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e6d68: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x1e6d68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6d6c: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x1e6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1e6d70: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e6d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6d74: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6d74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d78: 0x8fa60a50  lw          $a2, 0xA50($sp)
    ctx->pc = 0x1e6d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6d7c: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1E6D84u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6D84u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D84u) { return; }
    ctx->pc = 0x1E6D84u;
label_1e6d84:
    // 0x1e6d84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6d84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d88: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x1e6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6d8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6d8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6d90: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6d94: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E6D94u;
    SET_GPR_U32(ctx, 31, 0x1E6D9Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6D9Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6D9Cu) { return; }
    ctx->pc = 0x1E6D9Cu;
label_1e6d9c:
    // 0x1e6d9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6d9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6da0: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6da4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6da8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6da8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e6dac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e6dacu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e6db0: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e6db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e6db4: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e6db4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6db8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e6db8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6dbc: 0x0  nop
    ctx->pc = 0x1e6dbcu;
    // NOP
    // 0x1e6dc0: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e6dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e6dc4: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1e6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6dc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6dcc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6dd0: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e6dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6dd4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E6DD4u;
    SET_GPR_U32(ctx, 31, 0x1E6DDCu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E6DDCu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6DDCu) { return; }
    ctx->pc = 0x1E6DDCu;
label_1e6ddc:
    // 0x1e6ddc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6ddcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6de0: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1e6de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6de4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e6de4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6de8: 0x0  nop
    ctx->pc = 0x1e6de8u;
    // NOP
    // 0x1e6dec: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e6df0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e6df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6df4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E6DF4u;
    SET_GPR_U32(ctx, 31, 0x1E6DFCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E6DFCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6DFCu) { return; }
    ctx->pc = 0x1E6DFCu;
label_1e6dfc:
    // 0x1e6dfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6dfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e00: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6e08: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e0c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e6e0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6e10: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6e14: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E6E14u;
    SET_GPR_U32(ctx, 31, 0x1E6E1Cu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E6E1Cu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6E1Cu) { return; }
    ctx->pc = 0x1E6E1Cu;
label_1e6e1c:
    // 0x1e6e1c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6e1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e20: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e24: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1e6e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6e28: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6e2c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e30: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E6E30u;
    SET_GPR_U32(ctx, 31, 0x1E6E38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E6E38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6E38u) { return; }
    ctx->pc = 0x1E6E38u;
label_1e6e38:
    // 0x1e6e38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6e38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e3c: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e6e3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e6e40: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e6e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6e44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6e48: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x1e6e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e6e4c: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x1e6e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e6e50: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e6e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6e54: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x1e6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6e58: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1e6e58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6e5c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1e6e5cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e6e60: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6e60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6e64: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6E64u;
    SET_GPR_U32(ctx, 31, 0x1E6E6Cu);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6E6Cu;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6E6Cu) { return; }
    ctx->pc = 0x1E6E6Cu;
label_1e6e6c:
    // 0x1e6e6c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6e6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e70: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e6e70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6e74: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e6e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e6e78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e6e7c: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x1e6e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e6e80: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6e84: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e6e84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6e88: 0x8fa30a50  lw          $v1, 0xA50($sp)
    ctx->pc = 0x1e6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2640)));
    // 0x1e6e8c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1e6e8cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e6e90: 0xc040c80  jal         func_103200
    ctx->pc = 0x1E6E90u;
    SET_GPR_U32(ctx, 31, 0x1E6E98u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1E6E98u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6E98u) { return; }
    ctx->pc = 0x1E6E98u;
label_1e6e98:
    // 0x1e6e98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6e9c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1e6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6ea0: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1e6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6ea4: 0xc040c24  jal         func_103090
    ctx->pc = 0x1E6EA4u;
    SET_GPR_U32(ctx, 31, 0x1E6EACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1E6EACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6EACu) { return; }
    ctx->pc = 0x1E6EACu;
label_1e6eac:
    // 0x1e6eac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e6eacu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6eb0: 0xc7a10a58  lwc1        $f1, 0xA58($sp)
    ctx->pc = 0x1e6eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6eb4: 0xc7a001b4  lwc1        $f0, 0x1B4($sp)
    ctx->pc = 0x1e6eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6eb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e6eb8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e6ebc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e6ebcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1e6ec0: 0xe7a00a2c  swc1        $f0, 0xA2C($sp)
    ctx->pc = 0x1e6ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2604), bits); }
    // 0x1e6ec4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1e6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6ecc: 0x0  nop
    ctx->pc = 0x1e6eccu;
    // NOP
    // 0x1e6ed0: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x1e6ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x1e6ed4: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e6ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6ed8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e6ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6edc: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x1e6edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1e6ee0: 0xc7ac0a2c  lwc1        $f12, 0xA2C($sp)
    ctx->pc = 0x1e6ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6ee4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1E6EE4u;
    SET_GPR_U32(ctx, 31, 0x1E6EECu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1E6EECu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6EECu) { return; }
    ctx->pc = 0x1E6EECu;
label_1e6eec:
    // 0x1e6eec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6eecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6ef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e6ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6ef8: 0x0  nop
    ctx->pc = 0x1e6ef8u;
    // NOP
    // 0x1e6efc: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x1e6efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1e6f00: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e6f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f04: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E6F04u;
    SET_GPR_U32(ctx, 31, 0x1E6F0Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E6F0Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6F0Cu) { return; }
    ctx->pc = 0x1E6F0Cu;
label_1e6f0c:
    // 0x1e6f0c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f10: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f14: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e6f14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e6f18: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1e6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e6f1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6f1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f20: 0xc040c92  jal         func_103248
    ctx->pc = 0x1E6F20u;
    SET_GPR_U32(ctx, 31, 0x1E6F28u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x1E6F28u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6F28u) { return; }
    ctx->pc = 0x1E6F28u;
label_1e6f28:
    // 0x1e6f28: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6f28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f2c: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e6f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e6f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e6f38: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1e6f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f3c: 0xc040c00  jal         func_103000
    ctx->pc = 0x1E6F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F44u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x1E6F44u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6F44u) { return; }
    ctx->pc = 0x1E6F44u;
label_1e6f44:
    // 0x1e6f44: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6f44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f48: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1e6f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e6f4c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1e6f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e6f50: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1e6f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e6f54: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1e6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1e6f58: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x1e6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e6f5c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1e6f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e6f60: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e6f60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e6f64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e6f68: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x1E6F68u;
    SET_GPR_U32(ctx, 31, 0x1E6F70u);
    ctx->pc = 0x103AC8u;
    {
        ctx->pc = 0x1E6F70u;
        ps2_stubs::sceVu0RotTransPers(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E6F70u) { return; }
    ctx->pc = 0x1E6F70u;
label_1e6f70:
    // 0x1e6f70: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e6f70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6f74: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e6f78: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e6f7c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1e6f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e6f80: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x1e6f80u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6f84: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1e6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e6f88: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x1e6f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e6f8c: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x1e6f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e6f90: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1e6f90u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e6f94: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x1e6f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e6f98: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1e6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e6f9c: 0xc22023  subu        $a0, $a2, $v0
    ctx->pc = 0x1e6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1e6fa0: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x1e6fa0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e6fa4: 0x8fa501e4  lw          $a1, 0x1E4($sp)
    ctx->pc = 0x1e6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e6fa8: 0x8fa601c4  lw          $a2, 0x1C4($sp)
    ctx->pc = 0x1e6fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e6fac: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x1e6facu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e6fb0: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1e6fb0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e6fb4: 0x2b61818  mult        $v1, $s5, $s6
    ctx->pc = 0x1e6fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e6fb8: 0x2971018  mult        $v0, $s4, $s7
    ctx->pc = 0x1e6fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e6fbc: 0x62a023  subu        $s4, $v1, $v0
    ctx->pc = 0x1e6fbcu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e6fc0: 0x1a800008  blez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6FC0u;
    {
        const bool branch_taken_0x1e6fc0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x1e6fc0) {
            ctx->pc = 0x1E6FE4u;
            goto label_1e6fe4;
        }
    }
    ctx->pc = 0x1E6FC8u;
    // 0x1e6fc8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e6fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6fcc: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x1e6fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e6fd0: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1e6fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e6fd4: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1e6fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e6fd8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e6fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1e6fdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6FDCu;
    {
        const bool branch_taken_0x1e6fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6fdc) {
            ctx->pc = 0x1E6FF8u;
            goto label_1e6ff8;
        }
    }
    ctx->pc = 0x1E6FE4u;
label_1e6fe4:
    // 0x1e6fe4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e6fe8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1e6fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e6fec: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1e6fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e6ff0: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x1e6ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1e6ff4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_1e6ff8:
    // 0x1e6ff8: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e6ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6ffc: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1e6ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1e7000: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7004: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7004u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7008: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7008u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e700c: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x1e700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7010: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7010u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7014: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7014u;
    SET_GPR_U32(ctx, 31, 0x1E701Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E701Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E701Cu) { return; }
    ctx->pc = 0x1E701Cu;
label_1e701c:
    // 0x1e701c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e701cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7020: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1e7020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1e7024: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7028: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7028u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e702c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e702cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7030: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x1e7030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7034: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7034u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7038: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7038u;
    SET_GPR_U32(ctx, 31, 0x1E7040u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7040u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7040u) { return; }
    ctx->pc = 0x1E7040u;
label_1e7040:
    // 0x1e7040: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e7040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7044: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1e7044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1e7048: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e7048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e704c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e704cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7050: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7050u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7054: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e7054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7058: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7058u;
    SET_GPR_U32(ctx, 31, 0x1E7060u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7060u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7060u) { return; }
    ctx->pc = 0x1E7060u;
label_1e7060:
    // 0x1e7060: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7064: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7068: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1e7068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e706c: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1e706cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7070: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7074: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x1e7074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7078: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e7078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e707c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E707Cu;
    SET_GPR_U32(ctx, 31, 0x1E7084u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7084u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7084u) { return; }
    ctx->pc = 0x1E7084u;
label_1e7084:
    // 0x1e7084: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e7084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7088: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e708c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7090: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e7090u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7094: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x1e7094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e7098: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x1e7098u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e709c: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e709cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e70a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e70a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e70a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e70a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e70a8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E70A8u;
    {
        const bool branch_taken_0x1e70a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e70a8) {
            ctx->pc = 0x1E70C8u;
            goto label_1e70c8;
        }
    }
    ctx->pc = 0x1E70B0u;
    // 0x1e70b0: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x1e70b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e70b4: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1e70b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e70b8: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x1e70b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1e70bc: 0x90850220  lbu         $a1, 0x220($a0)
    ctx->pc = 0x1e70bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1e70c0: 0x14a00043  bnez        $a1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1E70C0u;
    {
        const bool branch_taken_0x1e70c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e70c0) {
            ctx->pc = 0x1E71D0u;
            goto label_1e71d0;
        }
    }
    ctx->pc = 0x1E70C8u;
label_1e70c8:
    // 0x1e70c8: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1e70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e70cc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e70ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e70d0: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x1e70d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e70d4: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x1e70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e70d8: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e70dc: 0x83a823  subu        $s5, $a0, $v1
    ctx->pc = 0x1e70dcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e70e0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1e70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1e70e4: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1e70e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e70e8: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e70ec: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x1e70ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x1e70f0: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x1e70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e70f4: 0x83b823  subu        $s7, $a0, $v1
    ctx->pc = 0x1e70f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e70f8: 0x2b62018  mult        $a0, $s5, $s6
    ctx->pc = 0x1e70f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1e70fc: 0x2971818  mult        $v1, $s4, $s7
    ctx->pc = 0x1e70fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e7100: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e7100u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7104: 0x6810008  bgez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7104u;
    {
        const bool branch_taken_0x1e7104 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1e7104) {
            ctx->pc = 0x1E7128u;
            goto label_1e7128;
        }
    }
    ctx->pc = 0x1E710Cu;
    // 0x1e710c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7110: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e7110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e7114: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x1e7114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7118: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e7118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e711c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e711cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e7120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7120u;
    {
        const bool branch_taken_0x1e7120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7120) {
            ctx->pc = 0x1E7140u;
            goto label_1e7140;
        }
    }
    ctx->pc = 0x1E7128u;
label_1e7128:
    // 0x1e7128: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e7128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e712c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1e712cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e7130: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1e7130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7134: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e7134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e7138: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1e7138u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1e713c: 0x0  nop
    ctx->pc = 0x1e713cu;
    // NOP
label_1e7140:
    // 0x1e7140: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e7140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7144: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e7144u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e7148: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e714c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e714cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7150: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1e7150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7154: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7154u;
    SET_GPR_U32(ctx, 31, 0x1E715Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E715Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E715Cu) { return; }
    ctx->pc = 0x1E715Cu;
label_1e715c:
    // 0x1e715c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e715cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7160: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e7160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7164: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e7164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e7168: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e716c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e716cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7170: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1e7170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7174: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7174u;
    SET_GPR_U32(ctx, 31, 0x1E717Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E717Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E717Cu) { return; }
    ctx->pc = 0x1E717Cu;
label_1e717c:
    // 0x1e717c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e717cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7180: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e7180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7184: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e7184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e7188: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e718c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e718cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7190: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1e7190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e7194: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7194u;
    SET_GPR_U32(ctx, 31, 0x1E719Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E719Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E719Cu) { return; }
    ctx->pc = 0x1E719Cu;
label_1e719c:
    // 0x1e719c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e719cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e71a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e71a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e71a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e71a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e71a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e71a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e71ac: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1e71acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e71b0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E71B0u;
    SET_GPR_U32(ctx, 31, 0x1E71B8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E71B8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E71B8u) { return; }
    ctx->pc = 0x1E71B8u;
label_1e71b8:
    // 0x1e71b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e71b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e71bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e71c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e71c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e71c4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e71c8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e71c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e71cc: 0x0  nop
    ctx->pc = 0x1e71ccu;
    // NOP
label_1e71d0:
    // 0x1e71d0: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e71d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e71d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e71d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e71d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e71d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e71dc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E71DCu;
    {
        const bool branch_taken_0x1e71dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e71dc) {
            ctx->pc = 0x1E7200u;
            goto label_1e7200;
        }
    }
    ctx->pc = 0x1E71E4u;
    // 0x1e71e4: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e71e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e71e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e71e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e71ec: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e71ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e71f0: 0x90630220  lbu         $v1, 0x220($v1)
    ctx->pc = 0x1e71f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x1e71f4: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1E71F4u;
    {
        const bool branch_taken_0x1e71f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e71f4) {
            ctx->pc = 0x1E7320u;
            goto label_1e7320;
        }
    }
    ctx->pc = 0x1E71FCu;
    // 0x1e71fc: 0x0  nop
    ctx->pc = 0x1e71fcu;
    // NOP
label_1e7200:
    // 0x1e7200: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e7200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7204: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7208: 0x83a023  subu        $s4, $a0, $v1
    ctx->pc = 0x1e7208u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e720c: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x1e720cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7210: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e7210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7214: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x1e7214u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7218: 0x70a0ae28  paddub      $s5, $a1, $zero
    ctx->pc = 0x1e7218u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e721c: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x1e721cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e7220: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x1e7220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1e7224: 0x83b023  subu        $s6, $a0, $v1
    ctx->pc = 0x1e7224u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7228: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x1e7228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1e722c: 0x8fa301d4  lw          $v1, 0x1D4($sp)
    ctx->pc = 0x1e722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1e7230: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1e7230u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e7234: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x1e7234u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7238: 0x2b62818  mult        $a1, $s5, $s6
    ctx->pc = 0x1e7238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e723c: 0x2973018  mult        $a2, $s4, $s7
    ctx->pc = 0x1e723cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1e7240: 0xa6a023  subu        $s4, $a1, $a2
    ctx->pc = 0x1e7240u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e7244: 0x6810008  bgez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7244u;
    {
        const bool branch_taken_0x1e7244 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1e7244) {
            ctx->pc = 0x1E7268u;
            goto label_1e7268;
        }
    }
    ctx->pc = 0x1E724Cu;
    // 0x1e724c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e7250: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1e7250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e7254: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1e7254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e7258: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1e7258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1e725c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e725cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1e7260: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7260u;
    {
        const bool branch_taken_0x1e7260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7260) {
            ctx->pc = 0x1E7280u;
            goto label_1e7280;
        }
    }
    ctx->pc = 0x1E7268u;
label_1e7268:
    // 0x1e7268: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e7268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e726c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x1e726cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e7270: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1e7270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e7274: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x1e7274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1e7278: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x1e7278u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x1e727c: 0x0  nop
    ctx->pc = 0x1e727cu;
    // NOP
label_1e7280:
    // 0x1e7280: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e7280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7284: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1e7284u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1e7288: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e7288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e728c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e728cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7290: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7290u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7294: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1e7294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7298: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7298u;
    SET_GPR_U32(ctx, 31, 0x1E72A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E72A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E72A0u) { return; }
    ctx->pc = 0x1E72A0u;
label_1e72a0:
    // 0x1e72a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e72a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72a4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1e72a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e72a8: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1e72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x1e72ac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e72acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e72b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e72b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e72b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e72b8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e72b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e72bc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E72BCu;
    SET_GPR_U32(ctx, 31, 0x1E72C4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E72C4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E72C4u) { return; }
    ctx->pc = 0x1E72C4u;
label_1e72c4:
    // 0x1e72c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e72c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72c8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1e72c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e72cc: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1e72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x1e72d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e72d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e72d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e72d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e72dc: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1e72dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e72e0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E72E0u;
    SET_GPR_U32(ctx, 31, 0x1E72E8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E72E8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E72E8u) { return; }
    ctx->pc = 0x1E72E8u;
label_1e72e8:
    // 0x1e72e8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e72e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72ec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e72ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e72f0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e72f4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e72f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e72f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e72f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e72fc: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1e72fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7300: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7300u;
    SET_GPR_U32(ctx, 31, 0x1E7308u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7308u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7308u) { return; }
    ctx->pc = 0x1E7308u;
label_1e7308:
    // 0x1e7308: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e730c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e730cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7310: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e7310u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7314: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e7314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e7318: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e7318u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e731c: 0x0  nop
    ctx->pc = 0x1e731cu;
    // NOP
label_1e7320:
    // 0x1e7320: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1e7320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e7324: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1e7324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7328: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1e7328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e732c: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E732Cu;
    {
        const bool branch_taken_0x1e732c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1e732c) {
            ctx->pc = 0x1E7350u;
            goto label_1e7350;
        }
    }
    ctx->pc = 0x1E7334u;
    // 0x1e7334: 0x9626000c  lhu         $a2, 0xC($s1)
    ctx->pc = 0x1e7334u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e7338: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x1e7338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1e733c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1e733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e7340: 0x90850220  lbu         $a1, 0x220($a0)
    ctx->pc = 0x1e7340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1e7344: 0x14a0004c  bnez        $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1E7344u;
    {
        const bool branch_taken_0x1e7344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7344) {
            ctx->pc = 0x1E7478u;
            goto label_1e7478;
        }
    }
    ctx->pc = 0x1E734Cu;
    // 0x1e734c: 0x0  nop
    ctx->pc = 0x1e734cu;
    // NOP
label_1e7350:
    // 0x1e7350: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x1e7350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1e7354: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e7354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7358: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1e7358u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e735c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1e735cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7360: 0x8fa501c4  lw          $a1, 0x1C4($sp)
    ctx->pc = 0x1e7360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1e7364: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1e7364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7368: 0xa2a823  subu        $s5, $a1, $v0
    ctx->pc = 0x1e7368u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e736c: 0x8fa50210  lw          $a1, 0x210($sp)
    ctx->pc = 0x1e736cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1e7370: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x1e7370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1e7374: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x1e7374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e7378: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1e7378u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e737c: 0x8fa50214  lw          $a1, 0x214($sp)
    ctx->pc = 0x1e737cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x1e7380: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x1e7380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1e7384: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x1e7384u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e7388: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x1e7388u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e738c: 0x2b61018  mult        $v0, $s5, $s6
    ctx->pc = 0x1e738cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e7390: 0x2972818  mult        $a1, $s4, $s7
    ctx->pc = 0x1e7390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e7394: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x1e7394u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7398: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x1e7398u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e739c: 0x6810008  bgez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E739Cu;
    {
        const bool branch_taken_0x1e739c = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1e739c) {
            ctx->pc = 0x1E73C0u;
            goto label_1e73c0;
        }
    }
    ctx->pc = 0x1E73A4u;
    // 0x1e73a4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e73a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1e73a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e73ac: 0x240400a1  addiu       $a0, $zero, 0xA1
    ctx->pc = 0x1e73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1e73b0: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x1e73b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1e73b4: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x1e73b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x1e73b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E73B8u;
    {
        const bool branch_taken_0x1e73b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e73b8) {
            ctx->pc = 0x1E73D8u;
            goto label_1e73d8;
        }
    }
    ctx->pc = 0x1E73C0u;
label_1e73c0:
    // 0x1e73c0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e73c4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1e73c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e73c8: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x1e73c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1e73cc: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x1e73ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1e73d0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1e73d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1e73d4: 0x0  nop
    ctx->pc = 0x1e73d4u;
    // NOP
label_1e73d8:
    // 0x1e73d8: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e73d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e73dc: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1e73dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1e73e0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e73e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e73e4: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e73e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e73e8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e73e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e73ec: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1e73ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e73f0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e73f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e73f4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E73F4u;
    SET_GPR_U32(ctx, 31, 0x1E73FCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E73FCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E73FCu) { return; }
    ctx->pc = 0x1E73FCu;
label_1e73fc:
    // 0x1e73fc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e73fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7400: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x1e7400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x1e7404: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1e7404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7408: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1e7408u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e740c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e740cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7410: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x1e7410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7414: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e7414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7418: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7418u;
    SET_GPR_U32(ctx, 31, 0x1E7420u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7420u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7420u) { return; }
    ctx->pc = 0x1E7420u;
label_1e7420:
    // 0x1e7420: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e7420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7424: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1e7424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1e7428: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e742c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e742cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7430: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7430u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7434: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x1e7434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7438: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e7438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e743c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E743Cu;
    SET_GPR_U32(ctx, 31, 0x1E7444u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7444u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7444u) { return; }
    ctx->pc = 0x1E7444u;
label_1e7444:
    // 0x1e7444: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7448: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e7448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e744c: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1e744cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7450: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7454: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1e7454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e7458: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7458u;
    SET_GPR_U32(ctx, 31, 0x1E7460u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7460u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7460u) { return; }
    ctx->pc = 0x1E7460u;
label_1e7460:
    // 0x1e7460: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e7460u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7464: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7468: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e746c: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e746cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7470: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x1e7470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e7474: 0x70809e28  paddub      $s3, $a0, $zero
    ctx->pc = 0x1e7474u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1e7478:
    // 0x1e7478: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1e7478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e747c: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1e747cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1e7480:
    // 0x1e7480: 0x27c6ffff  addiu       $a2, $fp, -0x1
    ctx->pc = 0x1e7480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1e7484: 0x70c0f628  paddub      $fp, $a2, $zero
    ctx->pc = 0x1e7484u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7488: 0x14c0fdcd  bnez        $a2, . + 4 + (-0x233 << 2)
    ctx->pc = 0x1E7488u;
    {
        const bool branch_taken_0x1e7488 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7488) {
            ctx->pc = 0x1E6BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6bc0;
        }
    }
    ctx->pc = 0x1E7490u;
    // 0x1e7490: 0x1260001d  beqz        $s3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E7490u;
    {
        const bool branch_taken_0x1e7490 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7490) {
            ctx->pc = 0x1E7508u;
            goto label_1e7508;
        }
    }
    ctx->pc = 0x1E7498u;
    // 0x1e7498: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x1e7498u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e749c: 0xd32021  addu        $a0, $a2, $s3
    ctx->pc = 0x1e749cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1e74a0: 0x24850006  addiu       $a1, $a0, 0x6
    ctx->pc = 0x1e74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x1e74a4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e74a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e74a8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1e74a8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1e74ac: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1e74acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1e74b0: 0xa62025  or          $a0, $a1, $a2
    ctx->pc = 0x1e74b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e74b4: 0x8fa30a28  lw          $v1, 0xA28($sp)
    ctx->pc = 0x1e74b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e74b8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1e74b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1e74bc: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1e74bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1e74c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e74c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e74c4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1e74c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1e74c8: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x1e74c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x1e74cc: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1e74ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1e74d0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1e74d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1e74d4: 0x8fa50a48  lw          $a1, 0xA48($sp)
    ctx->pc = 0x1e74d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2632)));
    // 0x1e74d8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1e74d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1e74dc: 0x8fa30a28  lw          $v1, 0xA28($sp)
    ctx->pc = 0x1e74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e74e0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e74e4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1e74e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1e74e8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1e74e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1e74ec: 0x24650006  addiu       $a1, $v1, 0x6
    ctx->pc = 0x1e74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x1e74f0: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x1e74f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x1e74f4: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x1e74f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1e74f8: 0x8fa50a28  lw          $a1, 0xA28($sp)
    ctx->pc = 0x1e74f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e74fc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x1e74fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1e7500: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7500u;
    {
        const bool branch_taken_0x1e7500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7500) {
            ctx->pc = 0x1E7524u;
            goto label_1e7524;
        }
    }
    ctx->pc = 0x1E7508u;
label_1e7508:
    // 0x1e7508: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e7508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e750c: 0x8fa50a28  lw          $a1, 0xA28($sp)
    ctx->pc = 0x1e750cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e7510: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x1e7510u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x1e7514: 0x8fa30a28  lw          $v1, 0xA28($sp)
    ctx->pc = 0x1e7514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e7518: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e7518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e751c: 0x8fa30a28  lw          $v1, 0xA28($sp)
    ctx->pc = 0x1e751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2600)));
    // 0x1e7520: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e7520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1e7524:
    // 0x1e7524: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e7524u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7528: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e7528u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e752c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e752cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7530: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e7530u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7534: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e7534u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e7538: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e7538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e753c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e753cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e7540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e7544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e754c: 0x27bd0a60  addiu       $sp, $sp, 0xA60
    ctx->pc = 0x1e754cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2656));
    // 0x1e7550: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7558u;
}
