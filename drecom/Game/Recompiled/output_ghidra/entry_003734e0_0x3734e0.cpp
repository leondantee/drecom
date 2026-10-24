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

// Function: entry_003734e0
// Address: 0x3734e0 - 0x373628
void entry_003734e0_0x3734e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003734e0_0x3734e0");
#endif

    switch (ctx->pc) {
        case 0x37355cu: goto label_37355c;
        case 0x373570u: goto label_373570;
        case 0x373584u: goto label_373584;
        case 0x373598u: goto label_373598;
        case 0x3735acu: goto label_3735ac;
        case 0x3735c0u: goto label_3735c0;
        case 0x3735d0u: goto label_3735d0;
        case 0x3735f4u: goto label_3735f4;
        case 0x373604u: goto label_373604;
        case 0x373624u: goto label_373624;
        default: break;
    }

    ctx->pc = 0x3734e0u;

    // 0x3734e0: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x3734e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3734e4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x3734e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3734e8: 0xc46002e0  lwc1        $f0, 0x2E0($v1)
    ctx->pc = 0x3734e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3734ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3734f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3734f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3734f4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x3734f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734f8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3734f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3734fc: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x3734fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373500: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373504: 0xc46002e8  lwc1        $f0, 0x2E8($v1)
    ctx->pc = 0x373504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373508: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x373508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37350c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x37350cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x373510: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x373510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x373514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x373514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373518: 0x0  nop
    ctx->pc = 0x373518u;
    // NOP
    // 0x37351c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x37351cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x373520: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373524: 0x948309e0  lhu         $v1, 0x9E0($a0)
    ctx->pc = 0x373524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2528)));
    // 0x373528: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x373528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37352c: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x37352cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x373530: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x373530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x373534: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x373534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x373538: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x373538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x37353c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x37353Cu;
    {
        const bool branch_taken_0x37353c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x37353c) {
            ctx->pc = 0x373628u;
            return;
        }
    }
    ctx->pc = 0x373544u;
    // 0x373544: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373548: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37354c: 0x244500e0  addiu       $a1, $v0, 0xE0
    ctx->pc = 0x37354cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x373550: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x373550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x373554: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x373554u;
    SET_GPR_U32(ctx, 31, 0x37355Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x37355Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37355Cu) { return; }
    ctx->pc = 0x37355Cu;
label_37355c:
    // 0x37355c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37355cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x373560: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x373560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373564: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x373564u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x373568: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x373568u;
    SET_GPR_U32(ctx, 31, 0x373570u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x373570u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373570u) { return; }
    ctx->pc = 0x373570u;
label_373570:
    // 0x373570: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x373570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373574: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x373574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373578: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x373578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37357c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x37357Cu;
    SET_GPR_U32(ctx, 31, 0x373584u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x373584u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373584u) { return; }
    ctx->pc = 0x373584u;
label_373584:
    // 0x373584: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x373584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373588: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x373588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37358c: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x37358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x373590: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x373590u;
    SET_GPR_U32(ctx, 31, 0x373598u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x373598u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373598u) { return; }
    ctx->pc = 0x373598u;
label_373598:
    // 0x373598: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x373598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37359c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x37359cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735a0: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x3735a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3735a4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x3735A4u;
    SET_GPR_U32(ctx, 31, 0x3735ACu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x3735ACu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3735ACu) { return; }
    ctx->pc = 0x3735ACu;
label_3735ac:
    // 0x3735ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3735acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735b0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x3735b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3735b4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3735b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735b8: 0xc040c00  jal         func_103000
    ctx->pc = 0x3735B8u;
    SET_GPR_U32(ctx, 31, 0x3735C0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x3735C0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3735C0u) { return; }
    ctx->pc = 0x3735C0u;
label_3735c0:
    // 0x3735c0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3735c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3735c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x3735c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3735c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3735C8u;
    SET_GPR_U32(ctx, 31, 0x3735D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3735D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3735D0u) { return; }
    ctx->pc = 0x3735D0u;
label_3735d0:
    // 0x3735d0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x3735d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3735d4: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x3735d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x3735d8: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x3735d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3735dc: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x3735dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3735e0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x3735e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3735e4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x3735e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3735e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3735ec: 0xc040ca2  jal         func_103288
    ctx->pc = 0x3735ECu;
    SET_GPR_U32(ctx, 31, 0x3735F4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x3735F4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3735F4u) { return; }
    ctx->pc = 0x3735F4u;
label_3735f4:
    // 0x3735f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3735f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3735f8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x3735f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3735fc: 0xc040c44  jal         func_103110
    ctx->pc = 0x3735FCu;
    SET_GPR_U32(ctx, 31, 0x373604u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x373604u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373604u) { return; }
    ctx->pc = 0x373604u;
label_373604:
    // 0x373604: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x373604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373608: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x373608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x37360c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x37360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x373610: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x373610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373614: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x373614u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373618: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x373618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x37361c: 0xc040c00  jal         func_103000
    ctx->pc = 0x37361Cu;
    SET_GPR_U32(ctx, 31, 0x373624u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x373624u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x373624u) { return; }
    ctx->pc = 0x373624u;
label_373624:
    // 0x373624: 0x0  nop
    ctx->pc = 0x373624u;
    // NOP
    ctx->pc = 0x373628u;
}
