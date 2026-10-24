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

// Function: SyukanCameraMove
// Address: 0x26a410 - 0x26a8dc
void SyukanCameraMove_0x26a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SyukanCameraMove_0x26a410");
#endif

    switch (ctx->pc) {
        case 0x26a510u: goto label_26a510;
        case 0x26a570u: goto label_26a570;
        case 0x26a710u: goto label_26a710;
        case 0x26a724u: goto label_26a724;
        case 0x26a738u: goto label_26a738;
        case 0x26a744u: goto label_26a744;
        case 0x26a754u: goto label_26a754;
        case 0x26a784u: goto label_26a784;
        case 0x26a7dcu: goto label_26a7dc;
        case 0x26a8a4u: goto label_26a8a4;
        default: break;
    }

    ctx->pc = 0x26a410u;

    // 0x26a410: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26a414: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x26a414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x26a418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a420: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x26a420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x26a424: 0x2450fd20  addiu       $s0, $v0, -0x2E0
    ctx->pc = 0x26a424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x26a428: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a42c: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x26a42cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x26a430: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26a430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26a434: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x26a434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x26a438: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A438u;
    {
        const bool branch_taken_0x26a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a438) {
            ctx->pc = 0x26A45Cu;
            goto label_26a45c;
        }
    }
    ctx->pc = 0x26A440u;
    // 0x26a440: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a444: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x26a444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x26a448: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26a448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26a44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a450: 0x0  nop
    ctx->pc = 0x26a450u;
    // NOP
    // 0x26a454: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a458: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_26a45c:
    // 0x26a45c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a460: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x26a460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x26a464: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26a468: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26a46c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A46Cu;
    {
        const bool branch_taken_0x26a46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a46c) {
            ctx->pc = 0x26A490u;
            goto label_26a490;
        }
    }
    ctx->pc = 0x26A474u;
    // 0x26a474: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a478: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x26a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x26a47c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26a480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a484: 0x0  nop
    ctx->pc = 0x26a484u;
    // NOP
    // 0x26a488: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26a488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a48c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_26a490:
    // 0x26a490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a494: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x26a494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x26a498: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26a498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26a49c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x26a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x26a4a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A4A0u;
    {
        const bool branch_taken_0x26a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4a0) {
            ctx->pc = 0x26A4C4u;
            goto label_26a4c4;
        }
    }
    ctx->pc = 0x26A4A8u;
    // 0x26a4a8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x26a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a4ac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x26a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x26a4b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26a4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26a4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a4b8: 0x0  nop
    ctx->pc = 0x26a4b8u;
    // NOP
    // 0x26a4bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a4c0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_26a4c4:
    // 0x26a4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a4c8: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x26a4c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x26a4cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26a4d0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x26a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x26a4d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A4D4u;
    {
        const bool branch_taken_0x26a4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4d4) {
            ctx->pc = 0x26A4F8u;
            goto label_26a4f8;
        }
    }
    ctx->pc = 0x26A4DCu;
    // 0x26a4dc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x26a4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a4e0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x26a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x26a4e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26a4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26a4e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a4ec: 0x0  nop
    ctx->pc = 0x26a4ecu;
    // NOP
    // 0x26a4f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26a4f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a4f4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_26a4f8:
    // 0x26a4f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a4fc: 0x902200b8  lbu         $v0, 0xB8($at)
    ctx->pc = 0x26a4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D00B8u));
    // 0x26a500: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a504: 0x2444ff80  addiu       $a0, $v0, -0x80
    ctx->pc = 0x26a504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x26a508: 0xc045676  jal         func_1159D8
    ctx->pc = 0x26A508u;
    SET_GPR_U32(ctx, 31, 0x26A510u);
    ctx->pc = 0x1159D8u;
    {
        ctx->pc = 0x26A510u;
        ps2_stubs::abs(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A510u) { return; }
    ctx->pc = 0x26A510u;
label_26a510:
    // 0x26a510: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x26a510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x26a514: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x26A514u;
    {
        const bool branch_taken_0x26a514 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a514) {
            ctx->pc = 0x26A558u;
            goto label_26a558;
        }
    }
    ctx->pc = 0x26A51Cu;
    // 0x26a51c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a520: 0x902200b8  lbu         $v0, 0xB8($at)
    ctx->pc = 0x26a520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D00B8u));
    // 0x26a524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a528: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x26a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x26a52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a530: 0x0  nop
    ctx->pc = 0x26a530u;
    // NOP
    // 0x26a534: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26a534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26a538: 0x3c02391d  lui         $v0, 0x391D
    ctx->pc = 0x26a538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14621 << 16));
    // 0x26a53c: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x26a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x26a540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a544: 0x0  nop
    ctx->pc = 0x26a544u;
    // NOP
    // 0x26a548: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26a548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a54c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x26a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a550: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26a550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a554: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_26a558:
    // 0x26a558: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a55c: 0x902200b9  lbu         $v0, 0xB9($at)
    ctx->pc = 0x26a55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D00B9u));
    // 0x26a560: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a564: 0x2444ff80  addiu       $a0, $v0, -0x80
    ctx->pc = 0x26a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x26a568: 0xc045676  jal         func_1159D8
    ctx->pc = 0x26A568u;
    SET_GPR_U32(ctx, 31, 0x26A570u);
    ctx->pc = 0x1159D8u;
    {
        ctx->pc = 0x26A570u;
        ps2_stubs::abs(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A570u) { return; }
    ctx->pc = 0x26A570u;
label_26a570:
    // 0x26a570: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x26a570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x26a574: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x26A574u;
    {
        const bool branch_taken_0x26a574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a574) {
            ctx->pc = 0x26A5B8u;
            goto label_26a5b8;
        }
    }
    ctx->pc = 0x26A57Cu;
    // 0x26a57c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a580: 0x902200b9  lbu         $v0, 0xB9($at)
    ctx->pc = 0x26a580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D00B9u));
    // 0x26a584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a588: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x26a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x26a58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a590: 0x0  nop
    ctx->pc = 0x26a590u;
    // NOP
    // 0x26a594: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26a594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26a598: 0x3c02391d  lui         $v0, 0x391D
    ctx->pc = 0x26a598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14621 << 16));
    // 0x26a59c: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x26a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x26a5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a5a4: 0x0  nop
    ctx->pc = 0x26a5a4u;
    // NOP
    // 0x26a5a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26a5a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a5ac: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x26a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a5b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26a5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a5b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_26a5b8:
    // 0x26a5b8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a5bc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x26a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x26a5c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a5c8: 0x0  nop
    ctx->pc = 0x26a5c8u;
    // NOP
    // 0x26a5cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26a5ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a5d0: 0x0  nop
    ctx->pc = 0x26a5d0u;
    // NOP
    // 0x26a5d4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x26A5D4u;
    {
        const bool branch_taken_0x26a5d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a5d4) {
            ctx->pc = 0x26A5F8u;
            goto label_26a5f8;
        }
    }
    ctx->pc = 0x26A5DCu;
    // 0x26a5dc: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a5e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x26a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x26a5e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a5ec: 0x0  nop
    ctx->pc = 0x26a5ecu;
    // NOP
    // 0x26a5f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a5f4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_26a5f8:
    // 0x26a5f8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a5fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26a600: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a608: 0x0  nop
    ctx->pc = 0x26a608u;
    // NOP
    // 0x26a60c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26a60cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a610: 0x0  nop
    ctx->pc = 0x26a610u;
    // NOP
    // 0x26a614: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x26A614u;
    {
        const bool branch_taken_0x26a614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a614) {
            ctx->pc = 0x26A638u;
            goto label_26a638;
        }
    }
    ctx->pc = 0x26A61Cu;
    // 0x26a61c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a620: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x26a620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x26a624: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a62c: 0x0  nop
    ctx->pc = 0x26a62cu;
    // NOP
    // 0x26a630: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26a630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a634: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_26a638:
    // 0x26a638: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x26a638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a63c: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x26a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x26a640: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a648: 0x0  nop
    ctx->pc = 0x26a648u;
    // NOP
    // 0x26a64c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26a64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a650: 0x0  nop
    ctx->pc = 0x26a650u;
    // NOP
    // 0x26a654: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x26A654u;
    {
        const bool branch_taken_0x26a654 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a654) {
            ctx->pc = 0x26A670u;
            goto label_26a670;
        }
    }
    ctx->pc = 0x26A65Cu;
    // 0x26a65c: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x26a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x26a660: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a668: 0x0  nop
    ctx->pc = 0x26a668u;
    // NOP
    // 0x26a66c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_26a670:
    // 0x26a670: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x26a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a674: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26a674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26a678: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a67c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a67cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a680: 0x0  nop
    ctx->pc = 0x26a680u;
    // NOP
    // 0x26a684: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26a684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a688: 0x0  nop
    ctx->pc = 0x26a688u;
    // NOP
    // 0x26a68c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x26A68Cu;
    {
        const bool branch_taken_0x26a68c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a68c) {
            ctx->pc = 0x26A6A8u;
            goto label_26a6a8;
        }
    }
    ctx->pc = 0x26A694u;
    // 0x26a694: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26a694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26a698: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26a698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26a69c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a6a0: 0x0  nop
    ctx->pc = 0x26a6a0u;
    // NOP
    // 0x26a6a4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_26a6a8:
    // 0x26a6a8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x26a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a6b0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a6b4: 0xe4400190  swc1        $f0, 0x190($v0)
    ctx->pc = 0x26a6b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 400), bits); }
    // 0x26a6b8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x26a6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a6c0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a6c4: 0xe4400194  swc1        $f0, 0x194($v0)
    ctx->pc = 0x26a6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 404), bits); }
    // 0x26a6c8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x26a6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a6d0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a6d4: 0xe4400198  swc1        $f0, 0x198($v0)
    ctx->pc = 0x26a6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 408), bits); }
    // 0x26a6d8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x26a6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6dc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x26a6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x26a6e0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x26a6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a6e4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x26a6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x26a6e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26a6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a6ec: 0x0  nop
    ctx->pc = 0x26a6ecu;
    // NOP
    // 0x26a6f0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x26a6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x26a6f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x26a6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a6fc: 0x0  nop
    ctx->pc = 0x26a6fcu;
    // NOP
    // 0x26a700: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x26a700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x26a704: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26a704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a708: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x26A708u;
    SET_GPR_U32(ctx, 31, 0x26A710u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x26A710u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A710u) { return; }
    ctx->pc = 0x26A710u;
label_26a710:
    // 0x26a710: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a714: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a718: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x26a718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a71c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x26A71Cu;
    SET_GPR_U32(ctx, 31, 0x26A724u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x26A724u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A724u) { return; }
    ctx->pc = 0x26A724u;
label_26a724:
    // 0x26a724: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x26a724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a728: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x26a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26a72c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x26a72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a730: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x26A730u;
    SET_GPR_U32(ctx, 31, 0x26A738u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x26A738u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A738u) { return; }
    ctx->pc = 0x26A738u;
label_26a738:
    // 0x26a738: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x26a738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a73c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x26A73Cu;
    SET_GPR_U32(ctx, 31, 0x26A744u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x26A73Cu, 0x26A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A744u;
label_26a744:
    // 0x26a744: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x26a744u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26a748: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x26a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26a74c: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x26A74Cu;
    SET_GPR_U32(ctx, 31, 0x26A754u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x26A74Cu, 0x26A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A754u;
label_26a754:
    // 0x26a754: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x26a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x26a758: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x26a758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26a75c: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x26a75cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26a760: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26a760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x26a764: 0x34630a0a  ori         $v1, $v1, 0xA0A
    ctx->pc = 0x26a764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2570);
    // 0x26a768: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x26a768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26a76c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x26a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x26a770: 0x24651470  addiu       $a1, $v1, 0x1470
    ctx->pc = 0x26a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5232));
    // 0x26a774: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x26a774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x26a778: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x26a778u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26a77c: 0xc059b14  jal         func_166C50
    ctx->pc = 0x26A77Cu;
    SET_GPR_U32(ctx, 31, 0x26A784u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x26A77Cu, 0x26A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A784u;
label_26a784:
    // 0x26a784: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x26a784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a788: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a78c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a790: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a794: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a794u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a798: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x26a798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x26a79c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x26a79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a7a0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x26a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a7a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a7a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a7ac: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a7b0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x26a7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x26a7b4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x26a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a7b8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a7bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a7bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a7c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a7c4: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x26a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a7c8: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x26a7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x26a7cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a7d0: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x26a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a7d4: 0xc056518  jal         func_159460
    ctx->pc = 0x26A7D4u;
    SET_GPR_U32(ctx, 31, 0x26A7DCu);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x26A7D4u, 0x26A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A7DCu;
label_26a7dc:
    // 0x26a7dc: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x26a7dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x26a7e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26a7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26a7e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26a7e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26a7e8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26A7E8u;
    {
        const bool branch_taken_0x26a7e8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x26a7e8) {
            ctx->pc = 0x26A804u;
            goto label_26a804;
        }
    }
    ctx->pc = 0x26A7F0u;
    // 0x26a7f0: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x26a7f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x26a7f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26a7f8: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x26a7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x26a7fc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26A7FCu;
    {
        const bool branch_taken_0x26a7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a7fc) {
            ctx->pc = 0x26A8C4u;
            goto label_26a8c4;
        }
    }
    ctx->pc = 0x26A804u;
label_26a804:
    // 0x26a804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a808: 0x94230080  lhu         $v1, 0x80($at)
    ctx->pc = 0x26a808u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D0080u));
    // 0x26a80c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26a810: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x26a810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x26a814: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x26A814u;
    {
        const bool branch_taken_0x26a814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a814) {
            ctx->pc = 0x26A8C4u;
            goto label_26a8c4;
        }
    }
    ctx->pc = 0x26A81Cu;
    // 0x26a81c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26a820: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x26a820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x26a824: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x26a824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x26a828: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a82c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x26a82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a830: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a834: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26a834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26a838: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x26a838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x26a83c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a840: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x26a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a848: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26a848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26a84c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x26a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x26a850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26a850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a854: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x26a854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a858: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a85c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x26a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26a860: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a864: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x26a864u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a868: 0xc4610194  lwc1        $f1, 0x194($v1)
    ctx->pc = 0x26a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a86c: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x26a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
    // 0x26a870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a874: 0x0  nop
    ctx->pc = 0x26a874u;
    // NOP
    // 0x26a878: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26a878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a87c: 0xe4600194  swc1        $f0, 0x194($v1)
    ctx->pc = 0x26a87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
    // 0x26a880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a884: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x26a884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a888: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x26a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x26a88c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x26a88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a890: 0x24640190  addiu       $a0, $v1, 0x190
    ctx->pc = 0x26a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x26a894: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26a894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a898: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x26a898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26a89c: 0xc09a87c  jal         func_26A1F0
    ctx->pc = 0x26A89Cu;
    SET_GPR_U32(ctx, 31, 0x26A8A4u);
    ctx->pc = 0x26A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A1F0u, 0x26A89Cu, 0x26A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8A4u;
label_26a8a4:
    // 0x26a8a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a8a8: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x26a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x26a8ac: 0xc4810194  lwc1        $f1, 0x194($a0)
    ctx->pc = 0x26a8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a8b0: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x26a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x26a8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26a8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a8b8: 0x0  nop
    ctx->pc = 0x26a8b8u;
    // NOP
    // 0x26a8bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a8bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a8c0: 0xe4800194  swc1        $f0, 0x194($a0)
    ctx->pc = 0x26a8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 404), bits); }
label_26a8c4:
    // 0x26a8c4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x26a8c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a8c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a8d0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x26a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26a8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x26A8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A8DCu;
}
