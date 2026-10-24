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

// Function: entry_001e6500
// Address: 0x1e6500 - 0x1e66a0
void entry_001e6500_0x1e6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6500_0x1e6500");
#endif

    switch (ctx->pc) {
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
        default: break;
    }

    ctx->pc = 0x1e6500u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1E66A0u;
}
