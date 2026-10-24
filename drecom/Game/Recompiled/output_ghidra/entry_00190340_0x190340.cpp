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

// Function: entry_00190340
// Address: 0x190340 - 0x1904dc
void entry_00190340_0x190340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190340_0x190340");
#endif

    switch (ctx->pc) {
        case 0x190398u: goto label_190398;
        case 0x1903b4u: goto label_1903b4;
        case 0x1903e0u: goto label_1903e0;
        case 0x1903f4u: goto label_1903f4;
        case 0x190428u: goto label_190428;
        case 0x190440u: goto label_190440;
        case 0x190468u: goto label_190468;
        case 0x19047cu: goto label_19047c;
        default: break;
    }

    ctx->pc = 0x190340u;

    // 0x190340: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x190340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190344: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x190344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x190348: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x190348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19034c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x19034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x190350: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x190350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190354: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x190354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x190358: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x190358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19035c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x19035cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x190360: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x190360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190364: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x190364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x190368: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x190368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19036c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x19036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x190370: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x190374: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x190374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x190378: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x190378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x19037c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190380: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190384: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x190384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190388: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x190388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x19038c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x19038cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190390: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x190390u;
    SET_GPR_U32(ctx, 31, 0x190398u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x190398u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190398u) { return; }
    ctx->pc = 0x190398u;
label_190398:
    // 0x190398: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x190398u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19039c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1903a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1903a4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1903a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1903a8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1903a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1903ac: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1903ACu;
    SET_GPR_U32(ctx, 31, 0x1903B4u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1903B4u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1903B4u) { return; }
    ctx->pc = 0x1903B4u;
label_1903b4:
    // 0x1903b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1903b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903b8: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1903b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1903bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1903bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1903c0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1903c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1903c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1903c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903c8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1903c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1903cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1903ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1903d0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1903d4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1903d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1903d8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x1903D8u;
    SET_GPR_U32(ctx, 31, 0x1903E0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x1903E0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1903E0u) { return; }
    ctx->pc = 0x1903E0u;
label_1903e0:
    // 0x1903e0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1903e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1903e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1903e8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1903e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1903ec: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1903ECu;
    SET_GPR_U32(ctx, 31, 0x1903F4u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1903F4u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1903F4u) { return; }
    ctx->pc = 0x1903F4u;
label_1903f4:
    // 0x1903f4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1903f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1903f8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1903f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1903fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190400: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x190400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190404: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190408: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x190408u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x19040c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19040cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190410: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190414: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x190414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190418: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x190418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x19041c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x19041cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190420: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x190420u;
    SET_GPR_U32(ctx, 31, 0x190428u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x190428u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190428u) { return; }
    ctx->pc = 0x190428u;
label_190428:
    // 0x190428: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19042c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19042cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190430: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x190434: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x190434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190438: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x190438u;
    SET_GPR_U32(ctx, 31, 0x190440u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x190440u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190440u) { return; }
    ctx->pc = 0x190440u;
label_190440:
    // 0x190440: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190444: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x190444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x190448: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19044c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x19044cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x190450: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190454: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190458: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x190458u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19045c: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x19045cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x190460: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x190460u;
    SET_GPR_U32(ctx, 31, 0x190468u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x190468u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190468u) { return; }
    ctx->pc = 0x190468u;
label_190468:
    // 0x190468: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19046c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19046cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190470: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x190470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190474: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x190474u;
    SET_GPR_U32(ctx, 31, 0x19047Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x19047Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19047Cu) { return; }
    ctx->pc = 0x19047Cu;
label_19047c:
    // 0x19047c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19047cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190480: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190484: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x190484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x190488: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x190488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19048c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x190490: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x190490u;
    {
        const bool branch_taken_0x190490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190490) {
            ctx->pc = 0x190514u;
            return;
        }
    }
    ctx->pc = 0x190498u;
    // 0x190498: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x19049c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x19049cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x1904a0: 0x2029823  subu        $s3, $s0, $v0
    ctx->pc = 0x1904a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1904a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1904a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1904a8: 0x138082  srl         $s0, $s3, 2
    ctx->pc = 0x1904a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 19), 2));
    // 0x1904ac: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1904acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1904b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1904b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1904b4: 0x8c23a600  lw          $v1, -0x5A00($at)
    ctx->pc = 0x1904b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A600u));
    // 0x1904b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1904b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1904bc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1904c0: 0x245025fc  addiu       $s0, $v0, 0x25FC
    ctx->pc = 0x1904c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9724));
    // 0x1904c4: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1904c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1904c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1904C8u;
    {
        const bool branch_taken_0x1904c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1904c8) {
            ctx->pc = 0x1904DCu;
            return;
        }
    }
    ctx->pc = 0x1904D0u;
    // 0x1904d0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1904d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1904d4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1904D4u;
    {
        const bool branch_taken_0x1904d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904d4) {
            ctx->pc = 0x190628u;
            return;
        }
    }
    ctx->pc = 0x1904DCu;
}
