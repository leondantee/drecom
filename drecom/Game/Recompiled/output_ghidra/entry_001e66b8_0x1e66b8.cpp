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

// Function: entry_001e66b8
// Address: 0x1e66b8 - 0x1e6948
void entry_001e66b8_0x1e66b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e66b8_0x1e66b8");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x1e66b8u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1E6944u;
    // 0x1e6944: 0x0  nop
    ctx->pc = 0x1e6944u;
    // NOP
    ctx->pc = 0x1e6948u;
}
