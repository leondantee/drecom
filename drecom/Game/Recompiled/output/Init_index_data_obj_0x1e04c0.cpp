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

// Function: Init_index_data_obj
// Address: 0x1e04c0 - 0x1e0914
void Init_index_data_obj_0x1e04c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init_index_data_obj_0x1e04c0");
#endif

    switch (ctx->pc) {
        case 0x1e055cu: goto label_1e055c;
        case 0x1e0584u: goto label_1e0584;
        case 0x1e0660u: goto label_1e0660;
        case 0x1e0688u: goto label_1e0688;
        case 0x1e06b0u: goto label_1e06b0;
        case 0x1e06e8u: goto label_1e06e8;
        case 0x1e071cu: goto label_1e071c;
        case 0x1e0758u: goto label_1e0758;
        case 0x1e0790u: goto label_1e0790;
        case 0x1e088cu: goto label_1e088c;
        case 0x1e0898u: goto label_1e0898;
        case 0x1e08a4u: goto label_1e08a4;
        case 0x1e08b8u: goto label_1e08b8;
        default: break;
    }

    ctx->pc = 0x1e04c0u;

    // 0x1e04c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e04c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e04c4: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1e04c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1e04c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1e04c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1e04cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1e04ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1e04d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e04d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e04d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e04d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e04d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e04d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e04dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e04dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e04e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e04e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e04e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e04e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e04e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e04e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e04ec: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1e04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1e04f0: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1e04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x1e04f4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e04f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e04f8: 0x8c700078  lw          $s0, 0x78($v1)
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1e04fc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e04fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0500: 0x8c710028  lw          $s1, 0x28($v1)
    ctx->pc = 0x1e0500u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1e0504: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e0504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0508: 0x8c770030  lw          $s7, 0x30($v1)
    ctx->pc = 0x1e0508u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e050c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e050cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0510: 0x8c730038  lw          $s3, 0x38($v1)
    ctx->pc = 0x1e0510u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1e0514: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e0514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0518: 0x8c7e0050  lw          $fp, 0x50($v1)
    ctx->pc = 0x1e0518u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1e051c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0520: 0x8c740040  lw          $s4, 0x40($v1)
    ctx->pc = 0x1e0520u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1e0524: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e0524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0528: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1e052c: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x1e052cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1e0530: 0x26f70018  addiu       $s7, $s7, 0x18
    ctx->pc = 0x1e0530u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x1e0534: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1e0534u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1e0538: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1e0538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x1e053c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1e053cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e0540: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e0540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0544: 0x8c720048  lw          $s2, 0x48($v1)
    ctx->pc = 0x1e0544u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1e0548: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1e0548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1e054c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1e054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0550: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x1e0550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e0554: 0x2475fffe  addiu       $s5, $v1, -0x2
    ctx->pc = 0x1e0554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1e0558: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x1e0558u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e055c:
    // 0x1e055c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1e055cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e0560: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e0560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e0564: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1e0564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e0568: 0x146000d5  bnez        $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1E0568u;
    {
        const bool branch_taken_0x1e0568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0568) {
            ctx->pc = 0x1E08C0u;
            goto label_1e08c0;
        }
    }
    ctx->pc = 0x1E0570u;
    // 0x1e0570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0574: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x1e0574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x1e0578: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e0578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e057c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E057Cu;
    SET_GPR_U32(ctx, 31, 0x1E0584u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E0584u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E0584u) { return; }
    ctx->pc = 0x1E0584u;
label_1e0584:
    // 0x1e0584: 0xc621ffe8  lwc1        $f1, -0x18($s1)
    ctx->pc = 0x1e0584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0588: 0xc620fff4  lwc1        $f0, -0xC($s1)
    ctx->pc = 0x1e0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e058c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e058cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0590: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0594: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e0594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0598: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e0598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e059c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e059cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e05a0: 0x0  nop
    ctx->pc = 0x1e05a0u;
    // NOP
    // 0x1e05a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e05a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e05a8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e05a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e05ac: 0xc621ffec  lwc1        $f1, -0x14($s1)
    ctx->pc = 0x1e05acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05b0: 0xc620fff8  lwc1        $f0, -0x8($s1)
    ctx->pc = 0x1e05b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e05b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e05b8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e05b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e05bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e05c0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e05c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e05c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e05c8: 0x0  nop
    ctx->pc = 0x1e05c8u;
    // NOP
    // 0x1e05cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e05ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e05d0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e05d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e05d4: 0xc621fff0  lwc1        $f1, -0x10($s1)
    ctx->pc = 0x1e05d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e05d8: 0xc620fffc  lwc1        $f0, -0x4($s1)
    ctx->pc = 0x1e05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e05dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e05e0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e05e4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1e05e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e05e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e05ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e05ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e05f0: 0x0  nop
    ctx->pc = 0x1e05f0u;
    // NOP
    // 0x1e05f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1e05f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e05f8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1e05f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1e05fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e05fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0604: 0x0  nop
    ctx->pc = 0x1e0604u;
    // NOP
    // 0x1e0608: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1e0608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1e060c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1e060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1e0610: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0614: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0618: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0618u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e061c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e061cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e0620: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1e0620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1e0624: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0628: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e0628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e062c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e062cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0630: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e0630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e0634: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1e0634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1e0638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e063c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0640: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0640u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0644: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e0644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e0648: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e064c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e064cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0650: 0x0  nop
    ctx->pc = 0x1e0650u;
    // NOP
    // 0x1e0654: 0xe60000cc  swc1        $f0, 0xCC($s0)
    ctx->pc = 0x1e0654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 204), bits); }
    // 0x1e0658: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0658u;
    SET_GPR_U32(ctx, 31, 0x1E0660u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0658u, 0x1E0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0660u;
label_1e0660:
    // 0x1e0660: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0664: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e0664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e0668: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e0668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e066c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e066cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0670: 0x24429be0  addiu       $v0, $v0, -0x6420
    ctx->pc = 0x1e0670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
    // 0x1e0674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0678: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e067c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1e0680: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0680u;
    SET_GPR_U32(ctx, 31, 0x1E0688u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0680u, 0x1E0688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0688u;
label_1e0688:
    // 0x1e0688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e068c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e0690: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e0690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0694: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e0694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e0698: 0x24429be0  addiu       $v0, $v0, -0x6420
    ctx->pc = 0x1e0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
    // 0x1e069c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e06a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e06a4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e06a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1e06a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E06A8u;
    SET_GPR_U32(ctx, 31, 0x1E06B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E06A8u, 0x1E06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06B0u;
label_1e06b0:
    // 0x1e06b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e06b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e06b4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1e06b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1e06b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e06bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e06c0: 0x24429be0  addiu       $v0, $v0, -0x6420
    ctx->pc = 0x1e06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941664));
    // 0x1e06c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e06c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e06c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e06cc: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x1e06ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x1e06d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e06d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e06d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e06d8: 0x0  nop
    ctx->pc = 0x1e06d8u;
    // NOP
    // 0x1e06dc: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x1e06dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x1e06e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E06E0u;
    SET_GPR_U32(ctx, 31, 0x1E06E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E06E0u, 0x1E06E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E06E8u;
label_1e06e8:
    // 0x1e06e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e06e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e06ec: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1e06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1e06f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e06f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e06f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e06f8: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e06f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e06fc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0700: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e0700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1e0704: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1e0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1e0708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e070c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E070Cu;
    {
        const bool branch_taken_0x1e070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e070c) {
            ctx->pc = 0x1E0738u;
            goto label_1e0738;
        }
    }
    ctx->pc = 0x1E0714u;
    // 0x1e0714: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0714u;
    SET_GPR_U32(ctx, 31, 0x1E071Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0714u, 0x1E071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E071Cu;
label_1e071c:
    // 0x1e071c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e071cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0720: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1e0720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1e0724: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1e0724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1e0728: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e0728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e072c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e072cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e0730: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e0730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e0734: 0x0  nop
    ctx->pc = 0x1e0734u;
    // NOP
label_1e0738:
    // 0x1e0738: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e073c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e073cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1e0740: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1e0740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1e0744: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e0748: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0748u;
    {
        const bool branch_taken_0x1e0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0748) {
            ctx->pc = 0x1E0770u;
            goto label_1e0770;
        }
    }
    ctx->pc = 0x1E0750u;
    // 0x1e0750: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0750u;
    SET_GPR_U32(ctx, 31, 0x1E0758u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0750u, 0x1E0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0758u;
label_1e0758:
    // 0x1e0758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e075c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1e075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1e0760: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e0760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e0764: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e0764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e0768: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e0768u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e076c: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e076cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
label_1e0770:
    // 0x1e0770: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0774: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e0774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1e0778: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1e0778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1e077c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e0780: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0780u;
    {
        const bool branch_taken_0x1e0780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0780) {
            ctx->pc = 0x1E07A8u;
            goto label_1e07a8;
        }
    }
    ctx->pc = 0x1E0788u;
    // 0x1e0788: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0788u;
    SET_GPR_U32(ctx, 31, 0x1E0790u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0788u, 0x1E0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0790u;
label_1e0790:
    // 0x1e0790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0794: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1e0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1e0798: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e0798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e079c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e07a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e07a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e07a4: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e07a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
label_1e07a8:
    // 0x1e07a8: 0xa6000104  sh          $zero, 0x104($s0)
    ctx->pc = 0x1e07a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 260), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e07ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e07acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e07b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07b4: 0x0  nop
    ctx->pc = 0x1e07b4u;
    // NOP
    // 0x1e07b8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e07b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e07bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e07c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07c4: 0x0  nop
    ctx->pc = 0x1e07c4u;
    // NOP
    // 0x1e07c8: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e07c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e07cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e07d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07d4: 0x0  nop
    ctx->pc = 0x1e07d4u;
    // NOP
    // 0x1e07d8: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1e07d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x1e07dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e07e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07e4: 0x0  nop
    ctx->pc = 0x1e07e4u;
    // NOP
    // 0x1e07e8: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x1e07e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1e07ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07f0: 0x0  nop
    ctx->pc = 0x1e07f0u;
    // NOP
    // 0x1e07f4: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1e07f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1e07f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07fc: 0x0  nop
    ctx->pc = 0x1e07fcu;
    // NOP
    // 0x1e0800: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x1e0800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x1e0804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0808: 0x0  nop
    ctx->pc = 0x1e0808u;
    // NOP
    // 0x1e080c: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x1e080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x1e0810: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0814: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0818: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e081c: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e081cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0820: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0824: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0828: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e082c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e082cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0830: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1e0830u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e0834: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e0834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0838: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e083c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0840: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e0840u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0844: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e0844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0848: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e084c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0850: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0854: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e0854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e0858: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1e0858u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e085c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0860: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0864: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0868: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e0868u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e086c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0870: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0874: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0878: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e087c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e087cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e0880: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x1e0880u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e0884: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1E0884u;
    SET_GPR_U32(ctx, 31, 0x1E088Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1E0884u, 0x1E088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E088Cu;
label_1e088c:
    // 0x1e088c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e088cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e0890: 0xc045522  jal         func_115488
    ctx->pc = 0x1E0890u;
    SET_GPR_U32(ctx, 31, 0x1E0898u);
    ctx->pc = 0x115488u;
    {
        ctx->pc = 0x1E0898u;
        ps2_stubs::sqrt(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E0898u) { return; }
    ctx->pc = 0x1E0898u;
label_1e0898:
    // 0x1e0898: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e0898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e089c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1E089Cu;
    SET_GPR_U32(ctx, 31, 0x1E08A4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1E089Cu, 0x1E08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08A4u;
label_1e08a4:
    // 0x1e08a4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x1e08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x1e08a8: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1e08a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e08ac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e08acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e08b0: 0xc040c44  jal         func_103110
    ctx->pc = 0x1E08B0u;
    SET_GPR_U32(ctx, 31, 0x1E08B8u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1E08B8u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E08B8u) { return; }
    ctx->pc = 0x1E08B8u;
label_1e08b8:
    // 0x1e08b8: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e08b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e08bc: 0x0  nop
    ctx->pc = 0x1e08bcu;
    // NOP
label_1e08c0:
    // 0x1e08c0: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1e08c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1e08c4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1e08c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1e08c8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e08c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1e08cc: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1e08ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1e08d0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1e08d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1e08d4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1e08d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1e08d8: 0x16a0ff20  bnez        $s5, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x1E08D8u;
    {
        const bool branch_taken_0x1e08d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e08d8) {
            ctx->pc = 0x1E055Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e055c;
        }
    }
    ctx->pc = 0x1E08E0u;
    // 0x1e08e0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1e08e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e08e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1e08e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e08e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1e08e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e08ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e08ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e08f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e08f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e08f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e08f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e08f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e08f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e08fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e08fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0900: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0908: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1e0908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e090c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E090Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E090Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0914u;
}
