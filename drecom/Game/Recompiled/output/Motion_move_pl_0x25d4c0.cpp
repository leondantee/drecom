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

// Function: Motion_move_pl
// Address: 0x25d4c0 - 0x25e6fc
void Motion_move_pl_0x25d4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Motion_move_pl_0x25d4c0");
#endif

    switch (ctx->pc) {
        case 0x25d5a4u: goto label_25d5a4;
        case 0x25d67cu: goto label_25d67c;
        case 0x25d758u: goto label_25d758;
        case 0x25d794u: goto label_25d794;
        case 0x25d7c0u: goto label_25d7c0;
        case 0x25d7d4u: goto label_25d7d4;
        case 0x25d7e8u: goto label_25d7e8;
        case 0x25d800u: goto label_25d800;
        case 0x25d810u: goto label_25d810;
        case 0x25d840u: goto label_25d840;
        case 0x25d8dcu: goto label_25d8dc;
        case 0x25d908u: goto label_25d908;
        case 0x25d940u: goto label_25d940;
        case 0x25d970u: goto label_25d970;
        case 0x25da9cu: goto label_25da9c;
        case 0x25db14u: goto label_25db14;
        case 0x25dbe4u: goto label_25dbe4;
        case 0x25dc5cu: goto label_25dc5c;
        case 0x25dcb8u: goto label_25dcb8;
        case 0x25dd54u: goto label_25dd54;
        case 0x25ddbcu: goto label_25ddbc;
        case 0x25de90u: goto label_25de90;
        case 0x25dea4u: goto label_25dea4;
        case 0x25debcu: goto label_25debc;
        case 0x25dedcu: goto label_25dedc;
        case 0x25df14u: goto label_25df14;
        case 0x25df28u: goto label_25df28;
        case 0x25df3cu: goto label_25df3c;
        case 0x25df60u: goto label_25df60;
        case 0x25df78u: goto label_25df78;
        case 0x25dfa8u: goto label_25dfa8;
        case 0x25dfc4u: goto label_25dfc4;
        case 0x25dfd4u: goto label_25dfd4;
        case 0x25dff8u: goto label_25dff8;
        case 0x25e008u: goto label_25e008;
        case 0x25e07cu: goto label_25e07c;
        case 0x25e1c0u: goto label_25e1c0;
        case 0x25e310u: goto label_25e310;
        case 0x25e390u: goto label_25e390;
        case 0x25e3acu: goto label_25e3ac;
        case 0x25e3d8u: goto label_25e3d8;
        case 0x25e418u: goto label_25e418;
        case 0x25e42cu: goto label_25e42c;
        case 0x25e440u: goto label_25e440;
        case 0x25e458u: goto label_25e458;
        case 0x25e470u: goto label_25e470;
        case 0x25e674u: goto label_25e674;
        case 0x25e6b0u: goto label_25e6b0;
        case 0x25e6bcu: goto label_25e6bc;
        case 0x25e6ccu: goto label_25e6cc;
        default: break;
    }

    ctx->pc = 0x25d4c0u;

    // 0x25d4c0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x25d4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
    // 0x25d4c4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x25d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x25d4c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x25d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x25d4cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x25d4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x25d4d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x25d4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25d4d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25d4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x25d4d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25d4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25d4dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25d4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25d4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d4e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25d4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25d4e8: 0xafa40228  sw          $a0, 0x228($sp)
    ctx->pc = 0x25d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 4));
    // 0x25d4ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x25d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x25d4f0: 0x2485dbc0  addiu       $a1, $a0, -0x2440
    ctx->pc = 0x25d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958016));
    // 0x25d4f4: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x25d4f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25d4f8: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x25d4f8u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25d4fc: 0x8e0209f8  lw          $v0, 0x9F8($s0)
    ctx->pc = 0x25d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2552)));
    // 0x25d500: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x25d500u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25d504: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D504u;
    {
        const bool branch_taken_0x25d504 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x25d504) {
            ctx->pc = 0x25D520u;
            goto label_25d520;
        }
    }
    ctx->pc = 0x25D50Cu;
    // 0x25d50c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25d50cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d510: 0x0  nop
    ctx->pc = 0x25d510u;
    // NOP
    // 0x25d514: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25d514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d518: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D518u;
    {
        const bool branch_taken_0x25d518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d518) {
            ctx->pc = 0x25D53Cu;
            goto label_25d53c;
        }
    }
    ctx->pc = 0x25D520u;
label_25d520:
    // 0x25d520: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x25d520u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x25d524: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x25d524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x25d528: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x25d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x25d52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d530: 0x0  nop
    ctx->pc = 0x25d530u;
    // NOP
    // 0x25d534: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25d534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d538: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25d538u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25d53c:
    // 0x25d53c: 0x8e0609f8  lw          $a2, 0x9F8($s0)
    ctx->pc = 0x25d53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2552)));
    // 0x25d540: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x25d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25d544: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D544u;
    {
        const bool branch_taken_0x25d544 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25d544) {
            ctx->pc = 0x25D560u;
            goto label_25d560;
        }
    }
    ctx->pc = 0x25D54Cu;
    // 0x25d54c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d550: 0x0  nop
    ctx->pc = 0x25d550u;
    // NOP
    // 0x25d554: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25d554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d558: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D558u;
    {
        const bool branch_taken_0x25d558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d558) {
            ctx->pc = 0x25D57Cu;
            goto label_25d57c;
        }
    }
    ctx->pc = 0x25D560u;
label_25d560:
    // 0x25d560: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25d560u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25d564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25d564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25d568: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25d568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25d56c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d56cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d570: 0x0  nop
    ctx->pc = 0x25d570u;
    // NOP
    // 0x25d574: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25d574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d578: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25d578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25d57c:
    // 0x25d57c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x25d580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d584: 0x0  nop
    ctx->pc = 0x25d584u;
    // NOP
    // 0x25d588: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25d588u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25d58c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25d58cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25d590: 0xe60009d0  swc1        $f0, 0x9D0($s0)
    ctx->pc = 0x25d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2512), bits); }
    // 0x25d594: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x25d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x25d598: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x25d598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x25d59c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D59Cu;
    SET_GPR_U32(ctx, 31, 0x25D5A4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D5A4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D5A4u) { return; }
    ctx->pc = 0x25D5A4u;
label_25d5a4:
    // 0x25d5a4: 0xc60009d0  lwc1        $f0, 0x9D0($s0)
    ctx->pc = 0x25d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d5a8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x25d5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25d5ac: 0xc60009d4  lwc1        $f0, 0x9D4($s0)
    ctx->pc = 0x25d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d5b0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x25d5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x25d5b4: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25d5b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25d5b8: 0xa7a200d8  sh          $v0, 0xD8($sp)
    ctx->pc = 0x25d5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 216), (uint16_t)GPR_U32(ctx, 2));
    // 0x25d5bc: 0x92040012  lbu         $a0, 0x12($s0)
    ctx->pc = 0x25d5bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x25d5c0: 0xa3a400f0  sb          $a0, 0xF0($sp)
    ctx->pc = 0x25d5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 4));
    // 0x25d5c4: 0x8fa50228  lw          $a1, 0x228($sp)
    ctx->pc = 0x25d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25d5c8: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x25d5c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25d5cc: 0x10c00033  beqz        $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x25D5CCu;
    {
        const bool branch_taken_0x25d5cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5cc) {
            ctx->pc = 0x25D69Cu;
            goto label_25d69c;
        }
    }
    ctx->pc = 0x25D5D4u;
    // 0x25d5d4: 0x8e021098  lw          $v0, 0x1098($s0)
    ctx->pc = 0x25d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4248)));
    // 0x25d5d8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x25d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x25d5dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D5DCu;
    {
        const bool branch_taken_0x25d5dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25d5dc) {
            ctx->pc = 0x25D5F8u;
            goto label_25d5f8;
        }
    }
    ctx->pc = 0x25D5E4u;
    // 0x25d5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d5e8: 0x0  nop
    ctx->pc = 0x25d5e8u;
    // NOP
    // 0x25d5ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25d5ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d5f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D5F0u;
    {
        const bool branch_taken_0x25d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d5f0) {
            ctx->pc = 0x25D614u;
            goto label_25d614;
        }
    }
    ctx->pc = 0x25D5F8u;
label_25d5f8:
    // 0x25d5f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x25d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25d5fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25d5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25d600: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25d600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25d604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d608: 0x0  nop
    ctx->pc = 0x25d608u;
    // NOP
    // 0x25d60c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25d60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d610: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25d610u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25d614:
    // 0x25d614: 0x8e021098  lw          $v0, 0x1098($s0)
    ctx->pc = 0x25d614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4248)));
    // 0x25d618: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25d618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d61c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D61Cu;
    {
        const bool branch_taken_0x25d61c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x25d61c) {
            ctx->pc = 0x25D638u;
            goto label_25d638;
        }
    }
    ctx->pc = 0x25D624u;
    // 0x25d624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d628: 0x0  nop
    ctx->pc = 0x25d628u;
    // NOP
    // 0x25d62c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25d62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d630: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25D630u;
    {
        const bool branch_taken_0x25d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d630) {
            ctx->pc = 0x25D654u;
            goto label_25d654;
        }
    }
    ctx->pc = 0x25D638u;
label_25d638:
    // 0x25d638: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x25d638u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25d63c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25d63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25d640: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25d640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x25d644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d648: 0x0  nop
    ctx->pc = 0x25d648u;
    // NOP
    // 0x25d64c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x25d64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d650: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x25d650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_25d654:
    // 0x25d654: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x25d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x25d658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d65c: 0x0  nop
    ctx->pc = 0x25d65cu;
    // NOP
    // 0x25d660: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25d660u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25d664: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25d664u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25d668: 0xe6001070  swc1        $f0, 0x1070($s0)
    ctx->pc = 0x25d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4208), bits); }
    // 0x25d66c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x25d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x25d670: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x25d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x25d674: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D674u;
    SET_GPR_U32(ctx, 31, 0x25D67Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D67Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D67Cu) { return; }
    ctx->pc = 0x25D67Cu;
label_25d67c:
    // 0x25d67c: 0xc6001070  lwc1        $f0, 0x1070($s0)
    ctx->pc = 0x25d67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d680: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x25d680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x25d684: 0xc6001074  lwc1        $f0, 0x1074($s0)
    ctx->pc = 0x25d684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d688: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x25d688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x25d68c: 0x96051080  lhu         $a1, 0x1080($s0)
    ctx->pc = 0x25d68cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4224)));
    // 0x25d690: 0xa7a50108  sh          $a1, 0x108($sp)
    ctx->pc = 0x25d690u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 5));
    // 0x25d694: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x25d694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x25d698: 0xa3a20120  sb          $v0, 0x120($sp)
    ctx->pc = 0x25d698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 2));
label_25d69c:
    // 0x25d69c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x25d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25d6a0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25d6a4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x25D6A4u;
    {
        const bool branch_taken_0x25d6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d6a4) {
            ctx->pc = 0x25D7B4u;
            goto label_25d7b4;
        }
    }
    ctx->pc = 0x25D6ACu;
    // 0x25d6ac: 0xc6011564  lwc1        $f1, 0x1564($s0)
    ctx->pc = 0x25d6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d6b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25d6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d6b4: 0x0  nop
    ctx->pc = 0x25d6b4u;
    // NOP
    // 0x25d6b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d6b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d6bc: 0x0  nop
    ctx->pc = 0x25d6bcu;
    // NOP
    // 0x25d6c0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x25D6C0u;
    {
        const bool branch_taken_0x25d6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d6c0) {
            ctx->pc = 0x25D708u;
            goto label_25d708;
        }
    }
    ctx->pc = 0x25D6C8u;
    // 0x25d6c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d6cc: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x25d6ccu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d6d0: 0x3c023fb7  lui         $v0, 0x3FB7
    ctx->pc = 0x25d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16311 << 16));
    // 0x25d6d4: 0x344258b3  ori         $v0, $v0, 0x58B3
    ctx->pc = 0x25d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22707);
    // 0x25d6d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d6dc: 0xc6001564  lwc1        $f0, 0x1564($s0)
    ctx->pc = 0x25d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25d6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25d6e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x25d6e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x25d6e8: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x25d6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x25d6ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d6f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d6f4: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d6f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25d6f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25d6fc: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x25d6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x25d700: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x25D700u;
    {
        const bool branch_taken_0x25d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d700) {
            ctx->pc = 0x25D738u;
            goto label_25d738;
        }
    }
    ctx->pc = 0x25D708u;
label_25d708:
    // 0x25d708: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x25d708u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25d70c: 0x3c023f8e  lui         $v0, 0x3F8E
    ctx->pc = 0x25d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16270 << 16));
    // 0x25d710: 0x34449a53  ori         $a0, $v0, 0x9A53
    ctx->pc = 0x25d710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39507);
    // 0x25d714: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25d714u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d718: 0xc6001564  lwc1        $f0, 0x1564($s0)
    ctx->pc = 0x25d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d71c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25d71cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25d720: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x25d720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x25d724: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x25d724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x25d728: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25d728u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d72c: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25d72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d730: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25d730u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25d734: 0xe7a00218  swc1        $f0, 0x218($sp)
    ctx->pc = 0x25d734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_25d738:
    // 0x25d738: 0x8fa50228  lw          $a1, 0x228($sp)
    ctx->pc = 0x25d738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25d73c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x25d73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x25d740: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25D740u;
    {
        const bool branch_taken_0x25d740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d740) {
            ctx->pc = 0x25D780u;
            goto label_25d780;
        }
    }
    ctx->pc = 0x25D748u;
    // 0x25d748: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x25d748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25d74c: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x25d74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x25d750: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D750u;
    SET_GPR_U32(ctx, 31, 0x25D758u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D758u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D758u) { return; }
    ctx->pc = 0x25D758u;
label_25d758:
    // 0x25d758: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x25d758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d75c: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x25d75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25d760: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x25d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d764: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x25d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x25d768: 0x97a30108  lhu         $v1, 0x108($sp)
    ctx->pc = 0x25d768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25d76c: 0xa7a30138  sh          $v1, 0x138($sp)
    ctx->pc = 0x25d76cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 312), (uint16_t)GPR_U32(ctx, 3));
    // 0x25d770: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x25d770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25d774: 0xa3a20150  sb          $v0, 0x150($sp)
    ctx->pc = 0x25d774u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 2));
    // 0x25d778: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25D778u;
    {
        const bool branch_taken_0x25d778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d778) {
            ctx->pc = 0x25D7B4u;
            goto label_25d7b4;
        }
    }
    ctx->pc = 0x25D780u;
label_25d780:
    // 0x25d780: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x25d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x25d784: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25d784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d788: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x25d788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x25d78c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D78Cu;
    SET_GPR_U32(ctx, 31, 0x25D794u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D794u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D794u) { return; }
    ctx->pc = 0x25D794u;
label_25d794:
    // 0x25d794: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x25d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d798: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x25d798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x25d79c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x25d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d7a0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x25d7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x25d7a4: 0x97a200d8  lhu         $v0, 0xD8($sp)
    ctx->pc = 0x25d7a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x25d7a8: 0xa7a20138  sh          $v0, 0x138($sp)
    ctx->pc = 0x25d7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 312), (uint16_t)GPR_U32(ctx, 2));
    // 0x25d7ac: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x25d7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25d7b0: 0xa3a20150  sb          $v0, 0x150($sp)
    ctx->pc = 0x25d7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 2));
label_25d7b4:
    // 0x25d7b4: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7b8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25D7B8u;
    SET_GPR_U32(ctx, 31, 0x25D7C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25D7C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D7C0u) { return; }
    ctx->pc = 0x25D7C0u;
label_25d7c0:
    // 0x25d7c0: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7c4: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x25d7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7c8: 0xc60c00d0  lwc1        $f12, 0xD0($s0)
    ctx->pc = 0x25d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d7cc: 0xc040d0e  jal         func_103438
    ctx->pc = 0x25D7CCu;
    SET_GPR_U32(ctx, 31, 0x25D7D4u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25D7D4u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D7D4u) { return; }
    ctx->pc = 0x25D7D4u;
label_25d7d4:
    // 0x25d7d4: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7d8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x25d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7dc: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x25d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d7e0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x25D7E0u;
    SET_GPR_U32(ctx, 31, 0x25D7E8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25D7E8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D7E8u) { return; }
    ctx->pc = 0x25D7E8u;
label_25d7e8:
    // 0x25d7e8: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x25d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7ec: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x25d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d7f0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x25d7f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x25d7f4: 0xc60c00d8  lwc1        $f12, 0xD8($s0)
    ctx->pc = 0x25d7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25d7f8: 0xc040ce4  jal         func_103390
    ctx->pc = 0x25D7F8u;
    SET_GPR_U32(ctx, 31, 0x25D800u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25D800u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D800u) { return; }
    ctx->pc = 0x25D800u;
label_25d800:
    // 0x25d800: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x25d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25d804: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x25d804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x25d808: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25D808u;
    SET_GPR_U32(ctx, 31, 0x25D810u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25D810u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D810u) { return; }
    ctx->pc = 0x25D810u;
label_25d810:
    // 0x25d810: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x25d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x25d814: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x25D814u;
    {
        const bool branch_taken_0x25d814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d814) {
            ctx->pc = 0x25D908u;
            goto label_25d908;
        }
    }
    ctx->pc = 0x25D81Cu;
    // 0x25d81c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x25d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25d820: 0xa7a400da  sh          $a0, 0xDA($sp)
    ctx->pc = 0x25d820u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 4));
    // 0x25d824: 0x8e0505f4  lw          $a1, 0x5F4($s0)
    ctx->pc = 0x25d824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x25d828: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x25d828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x25d82c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25d830: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x25d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x25d834: 0x26060602  addiu       $a2, $s0, 0x602
    ctx->pc = 0x25d834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1538));
    // 0x25d838: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25D838u;
    SET_GPR_U32(ctx, 31, 0x25D840u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25D838u, 0x25D840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D840u;
label_25d840:
    // 0x25d840: 0x960509e0  lhu         $a1, 0x9E0($s0)
    ctx->pc = 0x25d840u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25d844: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x25d844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x25d848: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x25d848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25d84c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25D84Cu;
    {
        const bool branch_taken_0x25d84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d84c) {
            ctx->pc = 0x25D868u;
            goto label_25d868;
        }
    }
    ctx->pc = 0x25D854u;
    // 0x25d854: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x25d854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x25d858: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x25d858u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d85c: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d860: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d864: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25d864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_25d868:
    // 0x25d868: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d86c: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d870: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d874: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x25d878: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d87c: 0xe60009cc  swc1        $f0, 0x9CC($s0)
    ctx->pc = 0x25d87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2508), bits); }
    // 0x25d880: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d884: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25d884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d888: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x25d888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x25d88c: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d890: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d894: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x25d894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x25d898: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d89c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8a0: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x25d8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x25d8a4: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8a8: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d8ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d8b0: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8b4: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d8b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25d8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25d8bc: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x25d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8c0: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d8c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25d8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25d8c8: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25d8cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25d8ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d8d0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25d8d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25d8d4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25D8D4u;
    SET_GPR_U32(ctx, 31, 0x25D8DCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25D8DCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D8DCu) { return; }
    ctx->pc = 0x25D8DCu;
label_25d8dc:
    // 0x25d8dc: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25d8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8e0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x25d8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x25d8e4: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8e8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x25d8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x25d8ec: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x25d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8f0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x25d8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x25d8f4: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x25d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25d8f8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x25d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d8fc: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x25d8fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25d900: 0xc040c00  jal         func_103000
    ctx->pc = 0x25D900u;
    SET_GPR_U32(ctx, 31, 0x25D908u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25D908u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D908u) { return; }
    ctx->pc = 0x25D908u;
label_25d908:
    // 0x25d908: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25d908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25d90c: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x25d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x25d910: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D910u;
    {
        const bool branch_taken_0x25d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d910) {
            ctx->pc = 0x25D928u;
            goto label_25d928;
        }
    }
    ctx->pc = 0x25D918u;
    // 0x25d918: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x25d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d91c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x25d91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x25d920: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25D920u;
    {
        const bool branch_taken_0x25d920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d920) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D928u;
label_25d928:
    // 0x25d928: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x25d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25d92c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x25d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x25d930: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25d930u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d934: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x25d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x25d938: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x25D938u;
    SET_GPR_U32(ctx, 31, 0x25D940u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x25D938u, 0x25D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D940u;
label_25d940:
    // 0x25d940: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x25d940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x25d944: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x25d944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d948: 0x3c06c974  lui         $a2, 0xC974
    ctx->pc = 0x25d948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51572 << 16));
    // 0x25d94c: 0x34c52400  ori         $a1, $a2, 0x2400
    ctx->pc = 0x25d94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9216);
    // 0x25d950: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25d950u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d954: 0x0  nop
    ctx->pc = 0x25d954u;
    // NOP
    // 0x25d958: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x25d958u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d95c: 0x0  nop
    ctx->pc = 0x25d95cu;
    // NOP
    // 0x25d960: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x25D960u;
    {
        const bool branch_taken_0x25d960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d960) {
            ctx->pc = 0x25D970u;
            goto label_25d970;
        }
    }
    ctx->pc = 0x25D968u;
    // 0x25d968: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x25d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d96c: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x25d96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_25d970:
    // 0x25d970: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x25d970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x25d974: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x25d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25d978: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25d978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d97c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x25d97cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d980: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x25d980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25d984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d988: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x25d988u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d98c: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x25d98cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25d990: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25d990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25d994: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25d994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25d998: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25d998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25d99c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25d9a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25d9a4: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25d9a8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x25d9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25d9ac: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x25d9acu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25d9b0: 0x960309e0  lhu         $v1, 0x9E0($s0)
    ctx->pc = 0x25d9b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25d9b4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x25d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25d9b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25d9bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25D9BCu;
    {
        const bool branch_taken_0x25d9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d9bc) {
            ctx->pc = 0x25DA00u;
            goto label_25da00;
        }
    }
    ctx->pc = 0x25D9C4u;
    // 0x25d9c4: 0x8e030354  lw          $v1, 0x354($s0)
    ctx->pc = 0x25d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25d9c8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25D9C8u;
    {
        const bool branch_taken_0x25d9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d9c8) {
            ctx->pc = 0x25DA00u;
            goto label_25da00;
        }
    }
    ctx->pc = 0x25D9D0u;
    // 0x25d9d0: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x25d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25d9d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25d9d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25d9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d9dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d9e0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25d9e0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d9e4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25d9e8: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25d9ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25d9f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25d9f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25d9f8: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25d9fc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x25d9fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25da00:
    // 0x25da00: 0x32c300c0  andi        $v1, $s6, 0xC0
    ctx->pc = 0x25da00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)192);
    // 0x25da04: 0x14600182  bnez        $v1, . + 4 + (0x182 << 2)
    ctx->pc = 0x25DA04u;
    {
        const bool branch_taken_0x25da04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25da04) {
            ctx->pc = 0x25E010u;
            goto label_25e010;
        }
    }
    ctx->pc = 0x25DA0Cu;
    // 0x25da0c: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25da0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25da10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25da10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25da14: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x25da14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25da18: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x25DA18u;
    {
        const bool branch_taken_0x25da18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da18) {
            ctx->pc = 0x25DB68u;
            goto label_25db68;
        }
    }
    ctx->pc = 0x25DA20u;
    // 0x25da20: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x25da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25da24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25da28: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x25DA28u;
    {
        const bool branch_taken_0x25da28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da28) {
            ctx->pc = 0x25DAC4u;
            goto label_25dac4;
        }
    }
    ctx->pc = 0x25DA30u;
    // 0x25da30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25da34: 0x2821804  sllv        $v1, $v0, $s4
    ctx->pc = 0x25da34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25da38: 0x3c023007  lui         $v0, 0x3007
    ctx->pc = 0x25da38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12295 << 16));
    // 0x25da3c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x25da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x25da40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25da40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25da44: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25DA44u;
    {
        const bool branch_taken_0x25da44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da44) {
            ctx->pc = 0x25DAC4u;
            goto label_25dac4;
        }
    }
    ctx->pc = 0x25DA4Cu;
    // 0x25da4c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25da50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25da50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25da54: 0x8c420a18  lw          $v0, 0xA18($v0)
    ctx->pc = 0x25da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x25da58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DA58u;
    {
        const bool branch_taken_0x25da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da58) {
            ctx->pc = 0x25DAA4u;
            goto label_25daa4;
        }
    }
    ctx->pc = 0x25DA60u;
    // 0x25da60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25da64: 0xa7a2010a  sh          $v0, 0x10A($sp)
    ctx->pc = 0x25da64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 266), (uint16_t)GPR_U32(ctx, 2));
    // 0x25da68: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25da68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25da6c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25da70: 0x8c440a18  lw          $a0, 0xA18($v0)
    ctx->pc = 0x25da70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x25da74: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x25da74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x25da78: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x25da78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25da7c: 0xb23021  addu        $a2, $a1, $s2
    ctx->pc = 0x25da7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x25da80: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25da80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x25da84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25da88: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x25da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25da8c: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25da90: 0x24460cb0  addiu       $a2, $v0, 0xCB0
    ctx->pc = 0x25da90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x25da94: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DA94u;
    SET_GPR_U32(ctx, 31, 0x25DA9Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DA94u, 0x25DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA9Cu;
label_25da9c:
    // 0x25da9c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25DA9Cu;
    {
        const bool branch_taken_0x25da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da9c) {
            ctx->pc = 0x25DB38u;
            goto label_25db38;
        }
    }
    ctx->pc = 0x25DAA4u;
label_25daa4:
    // 0x25daa4: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25daa8: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25daa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25daac: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dab0: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25dab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25dab4: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dab8: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25dab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25dabc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25DABCu;
    {
        const bool branch_taken_0x25dabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dabc) {
            ctx->pc = 0x25DB38u;
            goto label_25db38;
        }
    }
    ctx->pc = 0x25DAC4u;
label_25dac4:
    // 0x25dac4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dac8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dacc: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25dad0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DAD0u;
    {
        const bool branch_taken_0x25dad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dad0) {
            ctx->pc = 0x25DB1Cu;
            goto label_25db1c;
        }
    }
    ctx->pc = 0x25DAD8u;
    // 0x25dad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dadc: 0xa7a200da  sh          $v0, 0xDA($sp)
    ctx->pc = 0x25dadcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25dae0: 0x12b080  sll         $s6, $s2, 2
    ctx->pc = 0x25dae0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dae4: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x25dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x25dae8: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25daec: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25daecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25daf0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25daf4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25daf8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25dafc: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x25dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25db00: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25db04: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25db04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25db08: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25db08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x25db0c: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DB0Cu;
    SET_GPR_U32(ctx, 31, 0x25DB14u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DB0Cu, 0x25DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB14u;
label_25db14:
    // 0x25db14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25DB14u;
    {
        const bool branch_taken_0x25db14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db14) {
            ctx->pc = 0x25DB38u;
            goto label_25db38;
        }
    }
    ctx->pc = 0x25DB1Cu;
label_25db1c:
    // 0x25db1c: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db20: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25db20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25db24: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25db24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db28: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25db28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25db2c: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25db2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db30: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25db30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25db34: 0x0  nop
    ctx->pc = 0x25db34u;
    // NOP
label_25db38:
    // 0x25db38: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25db38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25db3c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25db3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25db40: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x25db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25db44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25db48: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25db48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25db4c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25db50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25db50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25db54: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x25db54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25db58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25db58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25db5c: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25db60: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x25DB60u;
    {
        const bool branch_taken_0x25db60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db60) {
            ctx->pc = 0x25DC80u;
            goto label_25dc80;
        }
    }
    ctx->pc = 0x25DB68u;
label_25db68:
    // 0x25db68: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x25db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25db6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25db70: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x25DB70u;
    {
        const bool branch_taken_0x25db70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db70) {
            ctx->pc = 0x25DC0Cu;
            goto label_25dc0c;
        }
    }
    ctx->pc = 0x25DB78u;
    // 0x25db78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25db7c: 0x2821804  sllv        $v1, $v0, $s4
    ctx->pc = 0x25db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25db80: 0x3c023007  lui         $v0, 0x3007
    ctx->pc = 0x25db80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12295 << 16));
    // 0x25db84: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x25db84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x25db88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25db88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25db8c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25DB8Cu;
    {
        const bool branch_taken_0x25db8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25db8c) {
            ctx->pc = 0x25DC0Cu;
            goto label_25dc0c;
        }
    }
    ctx->pc = 0x25DB94u;
    // 0x25db94: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25db94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25db98: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x25db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25db9c: 0x8c420a18  lw          $v0, 0xA18($v0)
    ctx->pc = 0x25db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x25dba0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DBA0u;
    {
        const bool branch_taken_0x25dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dba0) {
            ctx->pc = 0x25DBECu;
            goto label_25dbec;
        }
    }
    ctx->pc = 0x25DBA8u;
    // 0x25dba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dbac: 0xa7a3010a  sh          $v1, 0x10A($sp)
    ctx->pc = 0x25dbacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 266), (uint16_t)GPR_U32(ctx, 3));
    // 0x25dbb0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dbb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dbb8: 0x8c420a18  lw          $v0, 0xA18($v0)
    ctx->pc = 0x25dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2584)));
    // 0x25dbbc: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x25dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x25dbc0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25dbc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25dbc8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25dbcc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dbd0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x25dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x25dbd4: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25dbd8: 0x24460cb0  addiu       $a2, $v0, 0xCB0
    ctx->pc = 0x25dbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x25dbdc: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DBDCu;
    SET_GPR_U32(ctx, 31, 0x25DBE4u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DBDCu, 0x25DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBE4u;
label_25dbe4:
    // 0x25dbe4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25DBE4u;
    {
        const bool branch_taken_0x25dbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dbe4) {
            ctx->pc = 0x25DC80u;
            goto label_25dc80;
        }
    }
    ctx->pc = 0x25DBECu;
label_25dbec:
    // 0x25dbec: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dbf0: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25dbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25dbf4: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dbf8: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25dbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25dbfc: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc00: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25dc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25dc04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25DC04u;
    {
        const bool branch_taken_0x25dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc04) {
            ctx->pc = 0x25DC80u;
            goto label_25dc80;
        }
    }
    ctx->pc = 0x25DC0Cu;
label_25dc0c:
    // 0x25dc0c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dc10: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dc14: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x25dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25dc18: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DC18u;
    {
        const bool branch_taken_0x25dc18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc18) {
            ctx->pc = 0x25DC64u;
            goto label_25dc64;
        }
    }
    ctx->pc = 0x25DC20u;
    // 0x25dc20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dc24: 0xa7a500da  sh          $a1, 0xDA($sp)
    ctx->pc = 0x25dc24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 5));
    // 0x25dc28: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x25dc28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dc2c: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x25dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x25dc30: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25dc34: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25dc38: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25dc3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25dc40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25dc44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dc48: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25dc4c: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25dc50: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25dc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x25dc54: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DC54u;
    SET_GPR_U32(ctx, 31, 0x25DC5Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DC54u, 0x25DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC5Cu;
label_25dc5c:
    // 0x25dc5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25DC5Cu;
    {
        const bool branch_taken_0x25dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc5c) {
            ctx->pc = 0x25DC80u;
            goto label_25dc80;
        }
    }
    ctx->pc = 0x25DC64u;
label_25dc64:
    // 0x25dc64: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc68: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25dc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25dc6c: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25dc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc70: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25dc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25dc74: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dc78: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25dc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25dc7c: 0x0  nop
    ctx->pc = 0x25dc7cu;
    // NOP
label_25dc80:
    // 0x25dc80: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x25dc80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25dc84: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x25dc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x25dc88: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x25dc88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25dc8c: 0x96250140  lhu         $a1, 0x140($s1)
    ctx->pc = 0x25dc8cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25dc90: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x25dc90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x25dc94: 0x30a40004  andi        $a0, $a1, 0x4
    ctx->pc = 0x25dc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x25dc98: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25DC98u;
    {
        const bool branch_taken_0x25dc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc98) {
            ctx->pc = 0x25DCC0u;
            goto label_25dcc0;
        }
    }
    ctx->pc = 0x25DCA0u;
    // 0x25dca0: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x25dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25dca4: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x25dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25dca8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x25dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dcac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25dcacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25dcb0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x25DCB0u;
    SET_GPR_U32(ctx, 31, 0x25DCB8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x25DCB8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DCB8u) { return; }
    ctx->pc = 0x25DCB8u;
label_25dcb8:
    // 0x25dcb8: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x25DCB8u;
    {
        const bool branch_taken_0x25dcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dcb8) {
            ctx->pc = 0x25E3B0u;
            goto label_25e3b0;
        }
    }
    ctx->pc = 0x25DCC0u;
label_25dcc0:
    // 0x25dcc0: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x25dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x25dcc4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x25dcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25dcc8: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x25DCC8u;
    {
        const bool branch_taken_0x25dcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dcc8) {
            ctx->pc = 0x25DE80u;
            goto label_25de80;
        }
    }
    ctx->pc = 0x25DCD0u;
    // 0x25dcd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dcd4: 0x2821804  sllv        $v1, $v0, $s4
    ctx->pc = 0x25dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25dcd8: 0x3c023007  lui         $v0, 0x3007
    ctx->pc = 0x25dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12295 << 16));
    // 0x25dcdc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x25dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x25dce0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25dce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25dce4: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x25DCE4u;
    {
        const bool branch_taken_0x25dce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dce4) {
            ctx->pc = 0x25DE80u;
            goto label_25de80;
        }
    }
    ctx->pc = 0x25DCECu;
    // 0x25dcec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x25dcf0: 0x2442b890  addiu       $v0, $v0, -0x4770
    ctx->pc = 0x25dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949008));
    // 0x25dcf4: 0x27a40208  addiu       $a0, $sp, 0x208
    ctx->pc = 0x25dcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x25dcf8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25dcf8u;
    { uint32_t bits = FAST_READ32(0x38B890u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dcfc: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x25dcfcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x38B894u));
    // 0x25dd00: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25dd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25dd04: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x25dd04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x25dd08: 0x12e0001c  beqz        $s7, . + 4 + (0x1C << 2)
    ctx->pc = 0x25DD08u;
    {
        const bool branch_taken_0x25dd08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd08) {
            ctx->pc = 0x25DD7Cu;
            goto label_25dd7c;
        }
    }
    ctx->pc = 0x25DD10u;
    // 0x25dd10: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x25dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dd14: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x25dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x25dd18: 0x8ca21924  lw          $v0, 0x1924($a1)
    ctx->pc = 0x25dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6436)));
    // 0x25dd1c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25DD1Cu;
    {
        const bool branch_taken_0x25dd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd1c) {
            ctx->pc = 0x25DD5Cu;
            goto label_25dd5c;
        }
    }
    ctx->pc = 0x25DD24u;
    // 0x25dd24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dd28: 0xa7a4013a  sh          $a0, 0x13A($sp)
    ctx->pc = 0x25dd28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 314), (uint16_t)GPR_U32(ctx, 4));
    // 0x25dd2c: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x25dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dd30: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x25dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x25dd34: 0x8c441924  lw          $a0, 0x1924($v0)
    ctx->pc = 0x25dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6436)));
    // 0x25dd38: 0xafa4013c  sw          $a0, 0x13C($sp)
    ctx->pc = 0x25dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 4));
    // 0x25dd3c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x25dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25dd40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25dd40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dd44: 0x27a501f8  addiu       $a1, $sp, 0x1F8
    ctx->pc = 0x25dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x25dd48: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x25dd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x25dd4c: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DD4Cu;
    SET_GPR_U32(ctx, 31, 0x25DD54u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DD4Cu, 0x25DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD54u;
label_25dd54:
    // 0x25dd54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x25DD54u;
    {
        const bool branch_taken_0x25dd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd54) {
            ctx->pc = 0x25DDE0u;
            goto label_25dde0;
        }
    }
    ctx->pc = 0x25DD5Cu;
label_25dd5c:
    // 0x25dd5c: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd60: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x25dd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x25dd64: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25dd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd68: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x25dd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x25dd6c: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd70: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x25dd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x25dd74: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25DD74u;
    {
        const bool branch_taken_0x25dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd74) {
            ctx->pc = 0x25DDE0u;
            goto label_25dde0;
        }
    }
    ctx->pc = 0x25DD7Cu;
label_25dd7c:
    // 0x25dd7c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x25dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dd80: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x25dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25dd84: 0x8c421924  lw          $v0, 0x1924($v0)
    ctx->pc = 0x25dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6436)));
    // 0x25dd88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25DD88u;
    {
        const bool branch_taken_0x25dd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dd88) {
            ctx->pc = 0x25DDC4u;
            goto label_25ddc4;
        }
    }
    ctx->pc = 0x25DD90u;
    // 0x25dd90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dd94: 0xa7a4013a  sh          $a0, 0x13A($sp)
    ctx->pc = 0x25dd94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 314), (uint16_t)GPR_U32(ctx, 4));
    // 0x25dd98: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dd9c: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x25dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x25dda0: 0x8c421a24  lw          $v0, 0x1A24($v0)
    ctx->pc = 0x25dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6692)));
    // 0x25dda4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x25dda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    // 0x25dda8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x25dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x25ddac: 0x27a501f8  addiu       $a1, $sp, 0x1F8
    ctx->pc = 0x25ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x25ddb0: 0x27a60208  addiu       $a2, $sp, 0x208
    ctx->pc = 0x25ddb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
    // 0x25ddb4: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DDB4u;
    SET_GPR_U32(ctx, 31, 0x25DDBCu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DDB4u, 0x25DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DDBCu;
label_25ddbc:
    // 0x25ddbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25DDBCu;
    {
        const bool branch_taken_0x25ddbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ddbc) {
            ctx->pc = 0x25DDE0u;
            goto label_25dde0;
        }
    }
    ctx->pc = 0x25DDC4u;
label_25ddc4:
    // 0x25ddc4: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ddc8: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x25ddc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x25ddcc: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ddd0: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x25ddd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x25ddd4: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ddd8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x25ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x25dddc: 0x0  nop
    ctx->pc = 0x25dddcu;
    // NOP
label_25dde0:
    // 0x25dde0: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25dde0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25dde4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x25dde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25dde8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x25dde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25ddec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25DDECu;
    {
        const bool branch_taken_0x25ddec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ddec) {
            ctx->pc = 0x25DE20u;
            goto label_25de20;
        }
    }
    ctx->pc = 0x25DDF4u;
    // 0x25ddf4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25ddf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ddf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ddfc: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x25ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25de00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25de04: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x25de04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x25de08: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25de08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25de0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25de0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25de10: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x25de10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25de14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25de18: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x25de18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x25de1c: 0x0  nop
    ctx->pc = 0x25de1cu;
    // NOP
label_25de20:
    // 0x25de20: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x25de20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de24: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x25de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de28: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x25de28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de2c: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x25de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de30: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25de34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de38: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25de38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25de3c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25de3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25de40: 0xc6210108  lwc1        $f1, 0x108($s1)
    ctx->pc = 0x25de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de44: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x25de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de48: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x25de48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de4c: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x25de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de50: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25de54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de58: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25de58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25de5c: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25de5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25de60: 0xc621010c  lwc1        $f1, 0x10C($s1)
    ctx->pc = 0x25de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de64: 0xc7a00218  lwc1        $f0, 0x218($sp)
    ctx->pc = 0x25de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de68: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x25de68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de6c: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x25de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25de70: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x25de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25de74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25de74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25de78: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x25de78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25de7c: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25de7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
label_25de80:
    // 0x25de80: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25de80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25de84: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x25de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25de88: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25DE88u;
    SET_GPR_U32(ctx, 31, 0x25DE90u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25DE88u, 0x25DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DE90u;
label_25de90:
    // 0x25de90: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25de90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25de94: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25de94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25de98: 0xc62c0108  lwc1        $f12, 0x108($s1)
    ctx->pc = 0x25de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25de9c: 0xc067808  jal         func_19E020
    ctx->pc = 0x25DE9Cu;
    SET_GPR_U32(ctx, 31, 0x25DEA4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25DE9Cu, 0x25DEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEA4u;
label_25dea4:
    // 0x25dea4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25dea4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dea8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25dea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25deac: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25deacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25deb0: 0xc62c010c  lwc1        $f12, 0x10C($s1)
    ctx->pc = 0x25deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25deb4: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25DEB4u;
    SET_GPR_U32(ctx, 31, 0x25DEBCu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25DEB4u, 0x25DEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEBCu;
label_25debc:
    // 0x25debc: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x25debcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25dec0: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x25dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25dec4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x25dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x25dec8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25dec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25decc: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x25deccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x25ded0: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x25ded0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25ded4: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25DED4u;
    SET_GPR_U32(ctx, 31, 0x25DEDCu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25DED4u, 0x25DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DEDCu;
label_25dedc:
    // 0x25dedc: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25dedcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25dee0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25dee4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x25dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x25dee8: 0x10400131  beqz        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x25DEE8u;
    {
        const bool branch_taken_0x25dee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dee8) {
            ctx->pc = 0x25E3B0u;
            goto label_25e3b0;
        }
    }
    ctx->pc = 0x25DEF0u;
    // 0x25def0: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25def0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25def4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25def4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25def8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25def8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25defc: 0x1440012c  bnez        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x25DEFCu;
    {
        const bool branch_taken_0x25defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25defc) {
            ctx->pc = 0x25E3B0u;
            goto label_25e3b0;
        }
    }
    ctx->pc = 0x25DF04u;
    // 0x25df04: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x25df04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df08: 0xc62c011c  lwc1        $f12, 0x11C($s1)
    ctx->pc = 0x25df08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25df0c: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25DF0Cu;
    SET_GPR_U32(ctx, 31, 0x25DF14u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25DF0Cu, 0x25DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF14u;
label_25df14:
    // 0x25df14: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x25df14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df18: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25df18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df1c: 0xc62c0120  lwc1        $f12, 0x120($s1)
    ctx->pc = 0x25df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25df20: 0xc067808  jal         func_19E020
    ctx->pc = 0x25DF20u;
    SET_GPR_U32(ctx, 31, 0x25DF28u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25DF20u, 0x25DF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF28u;
label_25df28:
    // 0x25df28: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x25df28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df2c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df30: 0xc62c0124  lwc1        $f12, 0x124($s1)
    ctx->pc = 0x25df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25df34: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25DF34u;
    SET_GPR_U32(ctx, 31, 0x25DF3Cu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25DF34u, 0x25DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF3Cu;
label_25df3c:
    // 0x25df3c: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x25df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25df40: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x25df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25df44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25df44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25df48: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x25df48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x25df4c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25df4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25df50: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x25df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x25df54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25df54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25df58: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25DF58u;
    SET_GPR_U32(ctx, 31, 0x25DF60u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25DF60u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DF60u) { return; }
    ctx->pc = 0x25DF60u;
label_25df60:
    // 0x25df60: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x25df60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25df64: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x25df64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25df68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x25df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25df6c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x25df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x25df70: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x25DF70u;
    SET_GPR_U32(ctx, 31, 0x25DF78u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x25DF70u, 0x25DF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DF78u;
label_25df78:
    // 0x25df78: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25df78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25df7c: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x25df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25df80: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x25df80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25df84: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x25df84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25df88: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x25df88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25df8c: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x25df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25df90: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x25df90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25df94: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25df94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25df98: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x25df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25df9c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25df9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dfa0: 0xc040c00  jal         func_103000
    ctx->pc = 0x25DFA0u;
    SET_GPR_U32(ctx, 31, 0x25DFA8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25DFA8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DFA8u) { return; }
    ctx->pc = 0x25DFA8u;
label_25dfa8:
    // 0x25dfa8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25dfa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dfac: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25dfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25dfb0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25dfb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25dfb4: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x25dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x25dfb8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25dfb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dfbc: 0xc040c44  jal         func_103110
    ctx->pc = 0x25DFBCu;
    SET_GPR_U32(ctx, 31, 0x25DFC4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x25DFC4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DFC4u) { return; }
    ctx->pc = 0x25DFC4u;
label_25dfc4:
    // 0x25dfc4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x25dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x25dfc8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x25dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25dfcc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25DFCCu;
    SET_GPR_U32(ctx, 31, 0x25DFD4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25DFD4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DFD4u) { return; }
    ctx->pc = 0x25DFD4u;
label_25dfd4:
    // 0x25dfd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25dfd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dfd8: 0x142980  sll         $a1, $s4, 6
    ctx->pc = 0x25dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x25dfdc: 0x8e060130  lw          $a2, 0x130($s0)
    ctx->pc = 0x25dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25dfe0: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25dfe4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25dfe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25dfe8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x25dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x25dfec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x25dfecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25dff0: 0xc040c00  jal         func_103000
    ctx->pc = 0x25DFF0u;
    SET_GPR_U32(ctx, 31, 0x25DFF8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25DFF8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25DFF8u) { return; }
    ctx->pc = 0x25DFF8u;
label_25dff8:
    // 0x25dff8: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x25dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x25dffc: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x25dffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x25e000: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25E000u;
    SET_GPR_U32(ctx, 31, 0x25E008u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25E008u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E008u) { return; }
    ctx->pc = 0x25E008u;
label_25e008:
    // 0x25e008: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x25E008u;
    {
        const bool branch_taken_0x25e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e008) {
            ctx->pc = 0x25E3B0u;
            goto label_25e3b0;
        }
    }
    ctx->pc = 0x25E010u;
label_25e010:
    // 0x25e010: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25e014: 0x12c200e6  beq         $s6, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x25E014u;
    {
        const bool branch_taken_0x25e014 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e014) {
            ctx->pc = 0x25E3B0u;
            goto label_25e3b0;
        }
    }
    ctx->pc = 0x25E01Cu;
    // 0x25e01c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x25e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25e020: 0x12c200e3  beq         $s6, $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x25E020u;
    {
        const bool branch_taken_0x25e020 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e020) {
            ctx->pc = 0x25E3B0u;
            goto label_25e3b0;
        }
    }
    ctx->pc = 0x25E028u;
    // 0x25e028: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e02c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e030: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25e034: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25E034u;
    {
        const bool branch_taken_0x25e034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e034) {
            ctx->pc = 0x25E084u;
            goto label_25e084;
        }
    }
    ctx->pc = 0x25E03Cu;
    // 0x25e03c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e040: 0xa7a200da  sh          $v0, 0xDA($sp)
    ctx->pc = 0x25e040u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e044: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e048: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x25e048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e04c: 0x8c8504b0  lw          $a1, 0x4B0($a0)
    ctx->pc = 0x25e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1200)));
    // 0x25e050: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x25e050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x25e054: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25e054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25e058: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25e058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e05c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25e060: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e064: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x25e064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25e068: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x25e068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x25e06c: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x25e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x25e070: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25e074: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25E074u;
    SET_GPR_U32(ctx, 31, 0x25E07Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25E074u, 0x25E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E07Cu;
label_25e07c:
    // 0x25e07c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25E07Cu;
    {
        const bool branch_taken_0x25e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e07c) {
            ctx->pc = 0x25E0A0u;
            goto label_25e0a0;
        }
    }
    ctx->pc = 0x25E084u;
label_25e084:
    // 0x25e084: 0xc6600110  lwc1        $f0, 0x110($s3)
    ctx->pc = 0x25e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e088: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x25e088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x25e08c: 0xc6600114  lwc1        $f0, 0x114($s3)
    ctx->pc = 0x25e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e090: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x25e090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x25e094: 0xc6600118  lwc1        $f0, 0x118($s3)
    ctx->pc = 0x25e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e098: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x25e098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x25e09c: 0x0  nop
    ctx->pc = 0x25e09cu;
    // NOP
label_25e0a0:
    // 0x25e0a0: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e0a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e0a8: 0x30560004  andi        $s6, $v0, 0x4
    ctx->pc = 0x25e0a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e0ac: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E0ACu;
    {
        const bool branch_taken_0x25e0ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e0ac) {
            ctx->pc = 0x25E0C8u;
            goto label_25e0c8;
        }
    }
    ctx->pc = 0x25E0B4u;
    // 0x25e0b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25e0b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25e0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e0bc: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x25e0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e0c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e0c4: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x25e0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_25e0c8:
    // 0x25e0c8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x25e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25e0cc: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x25e0ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e0d0: 0x8e120350  lw          $s2, 0x350($s0)
    ctx->pc = 0x25e0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x25e0d4: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x25e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x25e0d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25e0d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e0dc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e0e0: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x25e0e0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e0e4: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x25e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25e0e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25e0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e0ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e0f0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25e0f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e0f4: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x25e0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e0f8: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x25e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x25e0fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e100: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e104: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25e104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e108: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e110: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25e110u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e114: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x25e114u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25e118: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e11c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e120: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25e120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e124: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25E124u;
    {
        const bool branch_taken_0x25e124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e124) {
            ctx->pc = 0x25E170u;
            goto label_25e170;
        }
    }
    ctx->pc = 0x25E12Cu;
    // 0x25e12c: 0x8e030354  lw          $v1, 0x354($s0)
    ctx->pc = 0x25e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25e130: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x25E130u;
    {
        const bool branch_taken_0x25e130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e130) {
            ctx->pc = 0x25E170u;
            goto label_25e170;
        }
    }
    ctx->pc = 0x25E138u;
    // 0x25e138: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x25e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25e13c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e140: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x25e140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e144: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e148: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25e148u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e14c: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x25e14cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e150: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x25e150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x25e154: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e158: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25e158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e15c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e160: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e168: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x25e168u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e16c: 0x0  nop
    ctx->pc = 0x25e16cu;
    // NOP
label_25e170:
    // 0x25e170: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e174: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x25e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e178: 0x8c620370  lw          $v0, 0x370($v1)
    ctx->pc = 0x25e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x25e17c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25E17Cu;
    {
        const bool branch_taken_0x25e17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e17c) {
            ctx->pc = 0x25E1C8u;
            goto label_25e1c8;
        }
    }
    ctx->pc = 0x25E184u;
    // 0x25e184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e188: 0xa7a200da  sh          $v0, 0xDA($sp)
    ctx->pc = 0x25e188u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e18c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e190: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e194: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25e198: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25e198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25e19c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25e1a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e1a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25e1a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e1ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25e1b0: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25e1b4: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x25e1b8: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25E1B8u;
    SET_GPR_U32(ctx, 31, 0x25E1C0u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25E1B8u, 0x25E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1C0u;
label_25e1c0:
    // 0x25e1c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E1C0u;
    {
        const bool branch_taken_0x25e1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e1c0) {
            ctx->pc = 0x25E1E0u;
            goto label_25e1e0;
        }
    }
    ctx->pc = 0x25E1C8u;
label_25e1c8:
    // 0x25e1c8: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x25e1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e1cc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x25e1ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x25e1d0: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x25e1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e1d4: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25e1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25e1d8: 0xc660010c  lwc1        $f0, 0x10C($s3)
    ctx->pc = 0x25e1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e1dc: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25e1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
label_25e1e0:
    // 0x25e1e0: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e1e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e1e4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25e1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e1e8: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x25e1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x25e1ec: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x25E1ECu;
    {
        const bool branch_taken_0x25e1ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e1ec) {
            ctx->pc = 0x25E220u;
            goto label_25e220;
        }
    }
    ctx->pc = 0x25E1F4u;
    // 0x25e1f4: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x25e1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x25e1f8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x25e1f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e1fc: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x25e1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e204: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x25e204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x25e208: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25e208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25e20c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25e20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e210: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x25e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e214: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e218: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x25e218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
    // 0x25e21c: 0x0  nop
    ctx->pc = 0x25e21cu;
    // NOP
label_25e220:
    // 0x25e220: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x25e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25e224: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x25e224u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e228: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x25e228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x25e22c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x25e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25e230: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25e230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e234: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x25e234u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e238: 0x32c2003f  andi        $v0, $s6, 0x3F
    ctx->pc = 0x25e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)63);
    // 0x25e23c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e244: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25e244u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e248: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e24c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e250: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e254: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x25e254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e258: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x25e258u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25e25c: 0x8e0602d0  lw          $a2, 0x2D0($s0)
    ctx->pc = 0x25e25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e260: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x25e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25e264: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25e264u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e268: 0x72209e28  paddub      $s3, $s1, $zero
    ctx->pc = 0x25e268u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25e26c: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e26cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e270: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e274: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e278: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25E278u;
    {
        const bool branch_taken_0x25e278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e278) {
            ctx->pc = 0x25E2C0u;
            goto label_25e2c0;
        }
    }
    ctx->pc = 0x25E280u;
    // 0x25e280: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x25e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25e284: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25E284u;
    {
        const bool branch_taken_0x25e284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e284) {
            ctx->pc = 0x25E2C0u;
            goto label_25e2c0;
        }
    }
    ctx->pc = 0x25E28Cu;
    // 0x25e28c: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x25e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x25e290: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25e290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e294: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x25e294u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e298: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e29c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x25e29cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e2a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e2a4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x25e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25e2a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e2ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e2b0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25e2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e2b4: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e2b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e2bc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x25e2bcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25e2c0:
    // 0x25e2c0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e2c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e2c8: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25e2cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25E2CCu;
    {
        const bool branch_taken_0x25e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e2cc) {
            ctx->pc = 0x25E318u;
            goto label_25e318;
        }
    }
    ctx->pc = 0x25E2D4u;
    // 0x25e2d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e2d8: 0xa7a200da  sh          $v0, 0xDA($sp)
    ctx->pc = 0x25e2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e2dc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e2e0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x25e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e2e4: 0x8c8504b0  lw          $a1, 0x4B0($a0)
    ctx->pc = 0x25e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1200)));
    // 0x25e2e8: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x25e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x25e2ec: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x25e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25e2f0: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x25e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x25e2f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25e2f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e2fc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25e300: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x25e300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x25e304: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25e304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25e308: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25E308u;
    SET_GPR_U32(ctx, 31, 0x25E310u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25E308u, 0x25E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E310u;
label_25e310:
    // 0x25e310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E310u;
    {
        const bool branch_taken_0x25e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e310) {
            ctx->pc = 0x25E330u;
            goto label_25e330;
        }
    }
    ctx->pc = 0x25E318u;
label_25e318:
    // 0x25e318: 0xc6600110  lwc1        $f0, 0x110($s3)
    ctx->pc = 0x25e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e31c: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x25e31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x25e320: 0xc6600114  lwc1        $f0, 0x114($s3)
    ctx->pc = 0x25e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e324: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x25e324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x25e328: 0xc6600118  lwc1        $f0, 0x118($s3)
    ctx->pc = 0x25e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e32c: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x25e32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
label_25e330:
    // 0x25e330: 0x960209e0  lhu         $v0, 0x9E0($s0)
    ctx->pc = 0x25e330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e334: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e338: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x25e338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x25e33c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E33Cu;
    {
        const bool branch_taken_0x25e33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e33c) {
            ctx->pc = 0x25E358u;
            goto label_25e358;
        }
    }
    ctx->pc = 0x25E344u;
    // 0x25e344: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25e344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25e348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25e348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e34c: 0xc6200110  lwc1        $f0, 0x110($s1)
    ctx->pc = 0x25e34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e350: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25e350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25e354: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x25e354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_25e358:
    // 0x25e358: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25e358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25e35c: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x25e35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x25e360: 0xa6240140  sh          $a0, 0x140($s1)
    ctx->pc = 0x25e360u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x25e364: 0x8e05034c  lw          $a1, 0x34C($s0)
    ctx->pc = 0x25e364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x25e368: 0xb43021  addu        $a2, $a1, $s4
    ctx->pc = 0x25e368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x25e36c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x25e36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25e370: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25e370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e374: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25e378: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25E378u;
    {
        const bool branch_taken_0x25e378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e378) {
            ctx->pc = 0x25E39Cu;
            goto label_25e39c;
        }
    }
    ctx->pc = 0x25E380u;
    // 0x25e380: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x25e380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25e384: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e388: 0xc0986d8  jal         func_261B60
    ctx->pc = 0x25E388u;
    SET_GPR_U32(ctx, 31, 0x25E390u);
    ctx->pc = 0x261B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261B60u, 0x25E388u, 0x25E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E390u;
label_25e390:
    // 0x25e390: 0xe60015e4  swc1        $f0, 0x15E4($s0)
    ctx->pc = 0x25e390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5604), bits); }
    // 0x25e394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25E394u;
    {
        const bool branch_taken_0x25e394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e394) {
            ctx->pc = 0x25E3B0u;
            goto label_25e3b0;
        }
    }
    ctx->pc = 0x25E39Cu;
label_25e39c:
    // 0x25e39c: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x25e39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25e3a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e3a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e3a4: 0xc098440  jal         func_261100
    ctx->pc = 0x25E3A4u;
    SET_GPR_U32(ctx, 31, 0x25E3ACu);
    ctx->pc = 0x261100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261100u, 0x25E3A4u, 0x25E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E3ACu;
label_25e3ac:
    // 0x25e3ac: 0xe60015e8  swc1        $f0, 0x15E8($s0)
    ctx->pc = 0x25e3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5608), bits); }
label_25e3b0:
    // 0x25e3b0: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x25e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25e3b4: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x25e3b4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x25e3b8: 0x920309e4  lbu         $v1, 0x9E4($s0)
    ctx->pc = 0x25e3b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2532)));
    // 0x25e3bc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e3c0: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x25e3c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25e3c4: 0x1480fd6a  bnez        $a0, . + 4 + (-0x296 << 2)
    ctx->pc = 0x25E3C4u;
    {
        const bool branch_taken_0x25e3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e3c4) {
            ctx->pc = 0x25D970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d970;
        }
    }
    ctx->pc = 0x25E3CCu;
    // 0x25e3cc: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x25e3ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25e3d0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x25E3D0u;
    {
        const bool branch_taken_0x25e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e3d0) {
            ctx->pc = 0x25E488u;
            goto label_25e488;
        }
    }
    ctx->pc = 0x25E3D8u;
label_25e3d8:
    // 0x25e3d8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x25e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x25e3dc: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x25e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x25e3e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25e3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e3e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25e3e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25e3ec: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25e3f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e3f4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25e3f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e3f8: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25e3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25e3fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25e3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25e400: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25e404: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25E404u;
    {
        const bool branch_taken_0x25e404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e404) {
            ctx->pc = 0x25E480u;
            goto label_25e480;
        }
    }
    ctx->pc = 0x25E40Cu;
    // 0x25e40c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25e40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e410: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25E410u;
    SET_GPR_U32(ctx, 31, 0x25E418u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25E418u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E418u) { return; }
    ctx->pc = 0x25E418u;
label_25e418:
    // 0x25e418: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25e418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e41c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e420: 0xc62c011c  lwc1        $f12, 0x11C($s1)
    ctx->pc = 0x25e420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e424: 0xc040d0e  jal         func_103438
    ctx->pc = 0x25E424u;
    SET_GPR_U32(ctx, 31, 0x25E42Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x25E42Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E42Cu) { return; }
    ctx->pc = 0x25E42Cu;
label_25e42c:
    // 0x25e42c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e430: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25e430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e434: 0xc62c0120  lwc1        $f12, 0x120($s1)
    ctx->pc = 0x25e434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e438: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x25E438u;
    SET_GPR_U32(ctx, 31, 0x25E440u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x25E440u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E440u) { return; }
    ctx->pc = 0x25E440u;
label_25e440:
    // 0x25e440: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e444: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x25e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e448: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25e448u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e44c: 0xc62c0124  lwc1        $f12, 0x124($s1)
    ctx->pc = 0x25e44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e450: 0xc040ce4  jal         func_103390
    ctx->pc = 0x25E450u;
    SET_GPR_U32(ctx, 31, 0x25E458u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x25E458u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25E458u) { return; }
    ctx->pc = 0x25E458u;
label_25e458:
    // 0x25e458: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x25e458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e45c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25e45cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25e460: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x25e460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25e464: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x25e464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25e468: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25E468u;
    SET_GPR_U32(ctx, 31, 0x25E470u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25E468u, 0x25E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E470u;
label_25e470:
    // 0x25e470: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x25e470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25e474: 0x3062ffbf  andi        $v0, $v1, 0xFFBF
    ctx->pc = 0x25e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x25e478: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x25e478u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e47c: 0x0  nop
    ctx->pc = 0x25e47cu;
    // NOP
label_25e480:
    // 0x25e480: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x25e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x25e484: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x25e484u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_25e488:
    // 0x25e488: 0x96040050  lhu         $a0, 0x50($s0)
    ctx->pc = 0x25e488u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x25e48c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x25e48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x25e490: 0x2a5102a  slt         $v0, $s5, $a1
    ctx->pc = 0x25e490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25e494: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x25E494u;
    {
        const bool branch_taken_0x25e494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e494) {
            ctx->pc = 0x25E3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e3d8;
        }
    }
    ctx->pc = 0x25E49Cu;
    // 0x25e49c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25e49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25e4a0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x25e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x25e4a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x25e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x25e4a8: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x25e4a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x25e4ac: 0x14a00065  bnez        $a1, . + 4 + (0x65 << 2)
    ctx->pc = 0x25E4ACu;
    {
        const bool branch_taken_0x25e4ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e4ac) {
            ctx->pc = 0x25E644u;
            goto label_25e644;
        }
    }
    ctx->pc = 0x25E4B4u;
    // 0x25e4b4: 0x960609e0  lhu         $a2, 0x9E0($s0)
    ctx->pc = 0x25e4b4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2528)));
    // 0x25e4b8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x25e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x25e4bc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25e4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25e4c0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E4C0u;
    {
        const bool branch_taken_0x25e4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e4c0) {
            ctx->pc = 0x25E4DCu;
            goto label_25e4dc;
        }
    }
    ctx->pc = 0x25E4C8u;
    // 0x25e4c8: 0x920309da  lbu         $v1, 0x9DA($s0)
    ctx->pc = 0x25e4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2522)));
    // 0x25e4cc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x25e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25e4d0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x25e4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x25e4d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25E4D4u;
    {
        const bool branch_taken_0x25e4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4d4) {
            ctx->pc = 0x25E4F0u;
            goto label_25e4f0;
        }
    }
    ctx->pc = 0x25E4DCu;
label_25e4dc:
    // 0x25e4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25e4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e4e0: 0x0  nop
    ctx->pc = 0x25e4e0u;
    // NOP
    // 0x25e4e4: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x25e4e8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x25E4E8u;
    {
        const bool branch_taken_0x25e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4e8) {
            ctx->pc = 0x25E584u;
            goto label_25e584;
        }
    }
    ctx->pc = 0x25E4F0u;
label_25e4f0:
    // 0x25e4f0: 0xc60015e4  lwc1        $f0, 0x15E4($s0)
    ctx->pc = 0x25e4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e4f4: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x25e4f8: 0xc60115e8  lwc1        $f1, 0x15E8($s0)
    ctx->pc = 0x25e4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e4fc: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e500: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25e500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e504: 0x0  nop
    ctx->pc = 0x25e504u;
    // NOP
    // 0x25e508: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25E508u;
    {
        const bool branch_taken_0x25e508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e508) {
            ctx->pc = 0x25E518u;
            goto label_25e518;
        }
    }
    ctx->pc = 0x25E510u;
    // 0x25e510: 0xc60015e8  lwc1        $f0, 0x15E8($s0)
    ctx->pc = 0x25e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e514: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_25e518:
    // 0x25e518: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x25e518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e51c: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e520: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e524: 0x0  nop
    ctx->pc = 0x25e524u;
    // NOP
    // 0x25e528: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x25E528u;
    {
        const bool branch_taken_0x25e528 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e528) {
            ctx->pc = 0x25E578u;
            goto label_25e578;
        }
    }
    ctx->pc = 0x25E530u;
    // 0x25e530: 0xc60102d8  lwc1        $f1, 0x2D8($s0)
    ctx->pc = 0x25e530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e534: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e538: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25e538u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25e53c: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x25e540: 0xc7a1021c  lwc1        $f1, 0x21C($sp)
    ctx->pc = 0x25e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e544: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x25e544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x25e548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25e548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e54c: 0x0  nop
    ctx->pc = 0x25e54cu;
    // NOP
    // 0x25e550: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25e550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e554: 0x0  nop
    ctx->pc = 0x25e554u;
    // NOP
    // 0x25e558: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x25E558u;
    {
        const bool branch_taken_0x25e558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e558) {
            ctx->pc = 0x25E584u;
            goto label_25e584;
        }
    }
    ctx->pc = 0x25E560u;
    // 0x25e560: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x25e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x25e564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e568: 0x0  nop
    ctx->pc = 0x25e568u;
    // NOP
    // 0x25e56c: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x25e570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25E570u;
    {
        const bool branch_taken_0x25e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e570) {
            ctx->pc = 0x25E584u;
            goto label_25e584;
        }
    }
    ctx->pc = 0x25E578u;
label_25e578:
    // 0x25e578: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25e578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e57c: 0x0  nop
    ctx->pc = 0x25e57cu;
    // NOP
    // 0x25e580: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_25e584:
    // 0x25e584: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e588: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e58c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e590: 0x0  nop
    ctx->pc = 0x25e590u;
    // NOP
    // 0x25e594: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x25E594u;
    {
        const bool branch_taken_0x25e594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e594) {
            ctx->pc = 0x25E5F4u;
            goto label_25e5f4;
        }
    }
    ctx->pc = 0x25E59Cu;
    // 0x25e59c: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e5a0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x25e5a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25e5a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e5a8: 0x0  nop
    ctx->pc = 0x25e5a8u;
    // NOP
    // 0x25e5ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x25e5acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25e5b0: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e5b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25e5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e5b8: 0x0  nop
    ctx->pc = 0x25e5b8u;
    // NOP
    // 0x25e5bc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x25E5BCu;
    {
        const bool branch_taken_0x25e5bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e5bc) {
            ctx->pc = 0x25E5E4u;
            goto label_25e5e4;
        }
    }
    ctx->pc = 0x25E5C4u;
    // 0x25e5c4: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e5c8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x25e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25e5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25e5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e5d0: 0x0  nop
    ctx->pc = 0x25e5d0u;
    // NOP
    // 0x25e5d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25e5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25e5d8: 0xe60015e0  swc1        $f0, 0x15E0($s0)
    ctx->pc = 0x25e5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5600), bits); }
    // 0x25e5dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25E5DCu;
    {
        const bool branch_taken_0x25e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e5dc) {
            ctx->pc = 0x25E644u;
            goto label_25e644;
        }
    }
    ctx->pc = 0x25E5E4u;
label_25e5e4:
    // 0x25e5e4: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e5e8: 0xe60015e0  swc1        $f0, 0x15E0($s0)
    ctx->pc = 0x25e5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5600), bits); }
    // 0x25e5ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25E5ECu;
    {
        const bool branch_taken_0x25e5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e5ec) {
            ctx->pc = 0x25E644u;
            goto label_25e644;
        }
    }
    ctx->pc = 0x25E5F4u;
label_25e5f4:
    // 0x25e5f4: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e5f8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x25e5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x25e5fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x25e5fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e600: 0x0  nop
    ctx->pc = 0x25e600u;
    // NOP
    // 0x25e604: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x25e604u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25e608: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e60c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25e60cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e610: 0x0  nop
    ctx->pc = 0x25e610u;
    // NOP
    // 0x25e614: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x25E614u;
    {
        const bool branch_taken_0x25e614 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e614) {
            ctx->pc = 0x25E63Cu;
            goto label_25e63c;
        }
    }
    ctx->pc = 0x25E61Cu;
    // 0x25e61c: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e620: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x25e620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x25e624: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25e624u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e628: 0x0  nop
    ctx->pc = 0x25e628u;
    // NOP
    // 0x25e62c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25e62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25e630: 0xe60015e0  swc1        $f0, 0x15E0($s0)
    ctx->pc = 0x25e630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5600), bits); }
    // 0x25e634: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E634u;
    {
        const bool branch_taken_0x25e634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e634) {
            ctx->pc = 0x25E644u;
            goto label_25e644;
        }
    }
    ctx->pc = 0x25E63Cu;
label_25e63c:
    // 0x25e63c: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e640: 0xe60015e0  swc1        $f0, 0x15E0($s0)
    ctx->pc = 0x25e640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5600), bits); }
label_25e644:
    // 0x25e644: 0x920209e6  lbu         $v0, 0x9E6($s0)
    ctx->pc = 0x25e644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2534)));
    // 0x25e648: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E648u;
    {
        const bool branch_taken_0x25e648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e648) {
            ctx->pc = 0x25E668u;
            goto label_25e668;
        }
    }
    ctx->pc = 0x25E650u;
    // 0x25e650: 0xde050a08  ld          $a1, 0xA08($s0)
    ctx->pc = 0x25e650u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 2568)));
    // 0x25e654: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E654u;
    {
        const bool branch_taken_0x25e654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e654) {
            ctx->pc = 0x25E674u;
            goto label_25e674;
        }
    }
    ctx->pc = 0x25E65Cu;
    // 0x25e65c: 0x92021084  lbu         $v0, 0x1084($s0)
    ctx->pc = 0x25e65cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4228)));
    // 0x25e660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E660u;
    {
        const bool branch_taken_0x25e660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e660) {
            ctx->pc = 0x25E674u;
            goto label_25e674;
        }
    }
    ctx->pc = 0x25E668u;
label_25e668:
    // 0x25e668: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e668u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e66c: 0xc098a4c  jal         func_262930
    ctx->pc = 0x25E66Cu;
    SET_GPR_U32(ctx, 31, 0x25E674u);
    ctx->pc = 0x262930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262930u, 0x25E66Cu, 0x25E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E674u;
label_25e674:
    // 0x25e674: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x25e674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x25e678: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25E678u;
    {
        const bool branch_taken_0x25e678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e678) {
            ctx->pc = 0x25E6A4u;
            goto label_25e6a4;
        }
    }
    ctx->pc = 0x25E680u;
    // 0x25e680: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x25e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e684: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25e684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25e688: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25e688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25e68c: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x25e68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e690: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25e694: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25e694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25e698: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x25e698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e69c: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25e6a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_25e6a4:
    // 0x25e6a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e6a8: 0xc097a0c  jal         func_25E830
    ctx->pc = 0x25E6A8u;
    SET_GPR_U32(ctx, 31, 0x25E6B0u);
    ctx->pc = 0x25E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E830u, 0x25E6A8u, 0x25E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6B0u;
label_25e6b0:
    // 0x25e6b0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e6b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e6b4: 0xc097dc0  jal         func_25F700
    ctx->pc = 0x25E6B4u;
    SET_GPR_U32(ctx, 31, 0x25E6BCu);
    ctx->pc = 0x25F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F700u, 0x25E6B4u, 0x25E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6BCu;
label_25e6bc:
    // 0x25e6bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25e6bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e6c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e6c4: 0xc0979c0  jal         func_25E700
    ctx->pc = 0x25E6C4u;
    SET_GPR_U32(ctx, 31, 0x25E6CCu);
    ctx->pc = 0x25E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E700u, 0x25E6C4u, 0x25E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6CCu;
label_25e6cc:
    // 0x25e6cc: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x25e6ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25e6d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25e6d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e6d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25e6d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e6d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25e6d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e6dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25e6dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e6e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25e6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e6e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e6e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e6ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e6f0: 0x27bd0230  addiu       $sp, $sp, 0x230
    ctx->pc = 0x25e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x25e6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E6FCu;
}
