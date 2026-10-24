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

// Function: Em1b_atk_move
// Address: 0x36d690 - 0x36dc88
void Em1b_atk_move_0x36d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_atk_move_0x36d690");
#endif

    switch (ctx->pc) {
        case 0x36d6bcu: goto label_36d6bc;
        case 0x36d834u: goto label_36d834;
        case 0x36d844u: goto label_36d844;
        case 0x36d858u: goto label_36d858;
        case 0x36d86cu: goto label_36d86c;
        case 0x36d880u: goto label_36d880;
        case 0x36d890u: goto label_36d890;
        case 0x36d8a4u: goto label_36d8a4;
        case 0x36d910u: goto label_36d910;
        case 0x36d91cu: goto label_36d91c;
        case 0x36d9a8u: goto label_36d9a8;
        case 0x36d9bcu: goto label_36d9bc;
        case 0x36d9e0u: goto label_36d9e0;
        case 0x36d9f4u: goto label_36d9f4;
        case 0x36da08u: goto label_36da08;
        case 0x36da14u: goto label_36da14;
        case 0x36da50u: goto label_36da50;
        case 0x36da70u: goto label_36da70;
        case 0x36da84u: goto label_36da84;
        case 0x36daa8u: goto label_36daa8;
        case 0x36dabcu: goto label_36dabc;
        case 0x36dad0u: goto label_36dad0;
        case 0x36dadcu: goto label_36dadc;
        case 0x36db18u: goto label_36db18;
        case 0x36db38u: goto label_36db38;
        case 0x36db4cu: goto label_36db4c;
        case 0x36db70u: goto label_36db70;
        case 0x36db84u: goto label_36db84;
        case 0x36db98u: goto label_36db98;
        case 0x36dbacu: goto label_36dbac;
        case 0x36dbb8u: goto label_36dbb8;
        case 0x36dbf4u: goto label_36dbf4;
        case 0x36dc14u: goto label_36dc14;
        default: break;
    }

    ctx->pc = 0x36d690u;

    // 0x36d690: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x36d690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x36d694: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x36d694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x36d698: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36d698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36d69c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36d69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36d6a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36d6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36d6a4: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x36d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x36d6a8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x36d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x36d6ac: 0x24718e60  addiu       $s1, $v1, -0x71A0
    ctx->pc = 0x36d6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938208));
    // 0x36d6b0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x36d6b0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36d6b4: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x36D6B4u;
    {
        const bool branch_taken_0x36d6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6b4) {
            ctx->pc = 0x36DC60u;
            goto label_36dc60;
        }
    }
    ctx->pc = 0x36D6BCu;
label_36d6bc:
    // 0x36d6bc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x36d6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36d6c0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x36d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36d6c4: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x36d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x36d6c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x36d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x36d6cc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x36d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x36d6d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x36d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36d6d4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x36d6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36d6d8: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x36d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x36d6dc: 0x1060015e  beqz        $v1, . + 4 + (0x15E << 2)
    ctx->pc = 0x36D6DCu;
    {
        const bool branch_taken_0x36d6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6dc) {
            ctx->pc = 0x36DC58u;
            goto label_36dc58;
        }
    }
    ctx->pc = 0x36D6E4u;
    // 0x36d6e4: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x36d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36d6e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D6E8u;
    {
        const bool branch_taken_0x36d6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6e8) {
            ctx->pc = 0x36D6F8u;
            goto label_36d6f8;
        }
    }
    ctx->pc = 0x36D6F0u;
    // 0x36d6f0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x36D6F0u;
    {
        const bool branch_taken_0x36d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d6f0) {
            ctx->pc = 0x36D848u;
            goto label_36d848;
        }
    }
    ctx->pc = 0x36D6F8u;
label_36d6f8:
    // 0x36d6f8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x36d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x36d6fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d700: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x36D700u;
    {
        const bool branch_taken_0x36d700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d700) {
            ctx->pc = 0x36D810u;
            goto label_36d810;
        }
    }
    ctx->pc = 0x36D708u;
    // 0x36d708: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36d708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d70c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x36D70Cu;
    {
        const bool branch_taken_0x36d70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d70c) {
            ctx->pc = 0x36D790u;
            goto label_36d790;
        }
    }
    ctx->pc = 0x36D714u;
    // 0x36d714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d718: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36D718u;
    {
        const bool branch_taken_0x36d718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d718) {
            ctx->pc = 0x36D730u;
            goto label_36d730;
        }
    }
    ctx->pc = 0x36D720u;
    // 0x36d720: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x36D720u;
    {
        const bool branch_taken_0x36d720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d720) {
            ctx->pc = 0x36D848u;
            goto label_36d848;
        }
    }
    ctx->pc = 0x36D728u;
    // 0x36d728: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x36D728u;
    {
        const bool branch_taken_0x36d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d728) {
            ctx->pc = 0x36D848u;
            goto label_36d848;
        }
    }
    ctx->pc = 0x36D730u;
label_36d730:
    // 0x36d730: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x36d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x36d734: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36d738: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36d738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36d73c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x36d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x36d740: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36d744: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36d744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36d748: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x36d748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x36d74c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36d74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36d750: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x36d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x36d754: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x36d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x36d758: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x36d758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d75c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x36d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x36d760: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d768: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36d768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d76c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36d76cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d770: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x36d770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x36d774: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d77c: 0x0  nop
    ctx->pc = 0x36d77cu;
    // NOP
    // 0x36d780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d784: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36d784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36d788: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x36D788u;
    {
        const bool branch_taken_0x36d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d788) {
            ctx->pc = 0x36D848u;
            goto label_36d848;
        }
    }
    ctx->pc = 0x36D790u;
label_36d790:
    // 0x36d790: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x36d790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x36d794: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36d798: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36d798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36d79c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x36D79Cu;
    {
        const bool branch_taken_0x36d79c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x36d79c) {
            ctx->pc = 0x36D848u;
            goto label_36d848;
        }
    }
    ctx->pc = 0x36D7A4u;
    // 0x36d7a4: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x36d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x36d7a8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x36d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x36d7ac: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x36d7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d7b0: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x36d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x36d7b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d7bc: 0x0  nop
    ctx->pc = 0x36d7bcu;
    // NOP
    // 0x36d7c0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x36d7c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d7c4: 0x0  nop
    ctx->pc = 0x36d7c4u;
    // NOP
    // 0x36d7c8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x36D7C8u;
    {
        const bool branch_taken_0x36d7c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36d7c8) {
            ctx->pc = 0x36D7ECu;
            goto label_36d7ec;
        }
    }
    ctx->pc = 0x36D7D0u;
    // 0x36d7d0: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x36d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x36d7d4: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x36d7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x36d7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d7dc: 0x0  nop
    ctx->pc = 0x36d7dcu;
    // NOP
    // 0x36d7e0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x36d7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x36d7e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36D7E4u;
    {
        const bool branch_taken_0x36d7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d7e4) {
            ctx->pc = 0x36D800u;
            goto label_36d800;
        }
    }
    ctx->pc = 0x36D7ECu;
label_36d7ec:
    // 0x36d7ec: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x36d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x36d7f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x36d7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d7f8: 0x0  nop
    ctx->pc = 0x36d7f8u;
    // NOP
    // 0x36d7fc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x36d7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_36d800:
    // 0x36d800: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x36d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d804: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36d804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36d808: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x36D808u;
    {
        const bool branch_taken_0x36d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d808) {
            ctx->pc = 0x36D848u;
            goto label_36d848;
        }
    }
    ctx->pc = 0x36D810u;
label_36d810:
    // 0x36d810: 0x3c023ccc  lui         $v0, 0x3CCC
    ctx->pc = 0x36d810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15564 << 16));
    // 0x36d814: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x36d814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x36d818: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36d818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36d81c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36d81cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36d820: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d824: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x36d828: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x36d828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36d82c: 0xc05c848  jal         func_172120
    ctx->pc = 0x36D82Cu;
    SET_GPR_U32(ctx, 31, 0x36D834u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x36D82Cu, 0x36D834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D834u;
label_36d834:
    // 0x36d834: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x36d834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d838: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x36d838u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d83c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x36D83Cu;
    SET_GPR_U32(ctx, 31, 0x36D844u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x36D83Cu, 0x36D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D844u;
label_36d844:
    // 0x36d844: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_36d848:
    // 0x36d848: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d84c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x36d84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d850: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x36D850u;
    SET_GPR_U32(ctx, 31, 0x36D858u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x36D850u, 0x36D858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D858u;
label_36d858:
    // 0x36d858: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36d858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d85c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d860: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d864: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x36D864u;
    SET_GPR_U32(ctx, 31, 0x36D86Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x36D86Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D86Cu) { return; }
    ctx->pc = 0x36D86Cu;
label_36d86c:
    // 0x36d86c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d870: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36d870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d874: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x36d874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d878: 0xc040ce4  jal         func_103390
    ctx->pc = 0x36D878u;
    SET_GPR_U32(ctx, 31, 0x36D880u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x36D880u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D880u) { return; }
    ctx->pc = 0x36D880u;
label_36d880:
    // 0x36d880: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36d880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36d884: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x36d884u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36d888: 0xc040c9e  jal         func_103278
    ctx->pc = 0x36D888u;
    SET_GPR_U32(ctx, 31, 0x36D890u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x36D890u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D890u) { return; }
    ctx->pc = 0x36D890u;
label_36d890:
    // 0x36d890: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36d890u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36d894: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x36d894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36d898: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x36d898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x36d89c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36D89Cu;
    SET_GPR_U32(ctx, 31, 0x36D8A4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36D8A4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D8A4u) { return; }
    ctx->pc = 0x36D8A4u;
label_36d8a4:
    // 0x36d8a4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x36d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36d8a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d8ac: 0x106200a4  beq         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x36D8ACu;
    {
        const bool branch_taken_0x36d8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d8ac) {
            ctx->pc = 0x36DB40u;
            goto label_36db40;
        }
    }
    ctx->pc = 0x36D8B4u;
    // 0x36d8b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d8b8: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x36D8B8u;
    {
        const bool branch_taken_0x36d8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d8b8) {
            ctx->pc = 0x36DA78u;
            goto label_36da78;
        }
    }
    ctx->pc = 0x36D8C0u;
    // 0x36d8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d8c4: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x36D8C4u;
    {
        const bool branch_taken_0x36d8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36d8c4) {
            ctx->pc = 0x36D9B0u;
            goto label_36d9b0;
        }
    }
    ctx->pc = 0x36D8CCu;
    // 0x36d8cc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x36D8CCu;
    {
        const bool branch_taken_0x36d8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d8cc) {
            ctx->pc = 0x36D924u;
            goto label_36d924;
        }
    }
    ctx->pc = 0x36D8D4u;
    // 0x36d8d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x36D8D4u;
    {
        const bool branch_taken_0x36d8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d8d4) {
            ctx->pc = 0x36D8DCu;
            goto label_36d8dc;
        }
    }
    ctx->pc = 0x36D8DCu;
label_36d8dc:
    // 0x36d8dc: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x36d8dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d8e0: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x36d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36d8e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36d8e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x36d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x36d8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d8f0: 0x0  nop
    ctx->pc = 0x36d8f0u;
    // NOP
    // 0x36d8f4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x36d8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x36d8f8: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x36d8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x36d8fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36d8fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36d900: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x36d900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36d904: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36d904u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36d908: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x36D908u;
    SET_GPR_U32(ctx, 31, 0x36D910u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x36D908u, 0x36D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D910u;
label_36d910:
    // 0x36d910: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36d910u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36d914: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x36D914u;
    SET_GPR_U32(ctx, 31, 0x36D91Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x36D914u, 0x36D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D91Cu;
label_36d91c:
    // 0x36d91c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x36D91Cu;
    {
        const bool branch_taken_0x36d91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d91c) {
            ctx->pc = 0x36DC18u;
            goto label_36dc18;
        }
    }
    ctx->pc = 0x36D924u;
label_36d924:
    // 0x36d924: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x36d924u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d928: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x36d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x36d92c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x36d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x36d930: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36d930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36d934: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x36d934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d938: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x36d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36d93c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36d940: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x36d940u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d944: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x36d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36d948: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36d948u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36d94c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x36d94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d950: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36d954: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36d954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36d958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d95c: 0x0  nop
    ctx->pc = 0x36d95cu;
    // NOP
    // 0x36d960: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36d960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d964: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x36d964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x36d968: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x36d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d96c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36d970: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36d970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36d974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d978: 0x0  nop
    ctx->pc = 0x36d978u;
    // NOP
    // 0x36d97c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36d97cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36d980: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x36d980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x36d984: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x36d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36d988: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36d988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36d98c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x36d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36d990: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36d990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x36d994: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x36d994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36d998: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x36d998u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36d99c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x36d99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36d9a0: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x36D9A0u;
    SET_GPR_U32(ctx, 31, 0x36D9A8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x36D9A0u, 0x36D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9A8u;
label_36d9a8:
    // 0x36d9a8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x36D9A8u;
    {
        const bool branch_taken_0x36d9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d9a8) {
            ctx->pc = 0x36DC18u;
            goto label_36dc18;
        }
    }
    ctx->pc = 0x36D9B0u;
label_36d9b0:
    // 0x36d9b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36d9b4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36D9B4u;
    SET_GPR_U32(ctx, 31, 0x36D9BCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36D9B4u, 0x36D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9BCu;
label_36d9bc:
    // 0x36d9bc: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x36d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x36d9c0: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x36d9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x36d9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d9c8: 0x0  nop
    ctx->pc = 0x36d9c8u;
    // NOP
    // 0x36d9cc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x36d9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36d9d0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36d9d4: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36d9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d9d8: 0xc067844  jal         func_19E110
    ctx->pc = 0x36D9D8u;
    SET_GPR_U32(ctx, 31, 0x36D9E0u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36D9D8u, 0x36D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9E0u;
label_36d9e0:
    // 0x36d9e0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36d9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36d9e4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36d9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36d9e8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x36d9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36d9ec: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36D9ECu;
    SET_GPR_U32(ctx, 31, 0x36D9F4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36D9F4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36D9F4u) { return; }
    ctx->pc = 0x36D9F4u;
label_36d9f4:
    // 0x36d9f4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36d9f8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36d9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36d9fc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36d9fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36da00: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36DA00u;
    SET_GPR_U32(ctx, 31, 0x36DA08u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36DA00u, 0x36DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA08u;
label_36da08:
    // 0x36da08: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36da0c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DA0Cu;
    SET_GPR_U32(ctx, 31, 0x36DA14u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DA0Cu, 0x36DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA14u;
label_36da14:
    // 0x36da14: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x36da14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x36da18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36da18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36da1c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x36da1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x36da20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36da20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36da24: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36da24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36da28: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36da28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36da2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da30: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36da30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36da34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36da34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36da38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da3c: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x36da3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36da40: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x36da40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36da44: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x36da44u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36da48: 0xc0de66c  jal         func_3799B0
    ctx->pc = 0x36DA48u;
    SET_GPR_U32(ctx, 31, 0x36DA50u);
    ctx->pc = 0x3799B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3799B0u, 0x36DA48u, 0x36DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA50u;
label_36da50:
    // 0x36da50: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x36da50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x36da54: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x36da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36da58: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36da58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x36da5c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x36da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36da60: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x36da60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36da64: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x36da64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36da68: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x36DA68u;
    SET_GPR_U32(ctx, 31, 0x36DA70u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x36DA68u, 0x36DA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA70u;
label_36da70:
    // 0x36da70: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x36DA70u;
    {
        const bool branch_taken_0x36da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da70) {
            ctx->pc = 0x36DC18u;
            goto label_36dc18;
        }
    }
    ctx->pc = 0x36DA78u;
label_36da78:
    // 0x36da78: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36da78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36da7c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DA7Cu;
    SET_GPR_U32(ctx, 31, 0x36DA84u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DA7Cu, 0x36DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA84u;
label_36da84:
    // 0x36da84: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36da84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36da88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36da88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36da8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36da8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36da90: 0x0  nop
    ctx->pc = 0x36da90u;
    // NOP
    // 0x36da94: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x36da94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36da98: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36da9c: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36da9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36daa0: 0xc067844  jal         func_19E110
    ctx->pc = 0x36DAA0u;
    SET_GPR_U32(ctx, 31, 0x36DAA8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36DAA0u, 0x36DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DAA8u;
label_36daa8:
    // 0x36daa8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36daac: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36daacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36dab0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x36dab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36dab4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36DAB4u;
    SET_GPR_U32(ctx, 31, 0x36DABCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36DABCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DABCu) { return; }
    ctx->pc = 0x36DABCu;
label_36dabc:
    // 0x36dabc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dac0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dac4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36dac4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36dac8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36DAC8u;
    SET_GPR_U32(ctx, 31, 0x36DAD0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36DAC8u, 0x36DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DAD0u;
label_36dad0:
    // 0x36dad0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36dad4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DAD4u;
    SET_GPR_U32(ctx, 31, 0x36DADCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DAD4u, 0x36DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DADCu;
label_36dadc:
    // 0x36dadc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36dadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36dae0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36dae4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36dae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36dae8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36dae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36daec: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x36daecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x36daf0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36daf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36daf4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36daf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36daf8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36daf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36dafc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36dafcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36db00: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36db00u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36db04: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x36db04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36db08: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x36db08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36db0c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x36db0cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36db10: 0xc0de66c  jal         func_3799B0
    ctx->pc = 0x36DB10u;
    SET_GPR_U32(ctx, 31, 0x36DB18u);
    ctx->pc = 0x3799B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3799B0u, 0x36DB10u, 0x36DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB18u;
label_36db18:
    // 0x36db18: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x36db18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x36db1c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x36db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36db20: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36db20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x36db24: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x36db24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36db28: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x36db28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36db2c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x36db2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36db30: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x36DB30u;
    SET_GPR_U32(ctx, 31, 0x36DB38u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x36DB30u, 0x36DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB38u;
label_36db38:
    // 0x36db38: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x36DB38u;
    {
        const bool branch_taken_0x36db38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36db38) {
            ctx->pc = 0x36DC18u;
            goto label_36dc18;
        }
    }
    ctx->pc = 0x36DB40u;
label_36db40:
    // 0x36db40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36db44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DB44u;
    SET_GPR_U32(ctx, 31, 0x36DB4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DB44u, 0x36DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB4Cu;
label_36db4c:
    // 0x36db4c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36db50: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36db54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36db54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36db58: 0x0  nop
    ctx->pc = 0x36db58u;
    // NOP
    // 0x36db5c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x36db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36db60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36db64: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36db68: 0xc067844  jal         func_19E110
    ctx->pc = 0x36DB68u;
    SET_GPR_U32(ctx, 31, 0x36DB70u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36DB68u, 0x36DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB70u;
label_36db70:
    // 0x36db70: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36db70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36db74: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36db74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36db78: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x36db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36db7c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x36DB7Cu;
    SET_GPR_U32(ctx, 31, 0x36DB84u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x36DB84u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DB84u) { return; }
    ctx->pc = 0x36DB84u;
label_36db84:
    // 0x36db84: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36db84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36db88: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36db88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36db8c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x36db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36db90: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36DB90u;
    SET_GPR_U32(ctx, 31, 0x36DB98u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36DB98u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DB98u) { return; }
    ctx->pc = 0x36DB98u;
label_36db98:
    // 0x36db98: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36db98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36db9c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dba0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36dba0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36dba4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36DBA4u;
    SET_GPR_U32(ctx, 31, 0x36DBACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36DBA4u, 0x36DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBACu;
label_36dbac:
    // 0x36dbac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36dbb0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DBB0u;
    SET_GPR_U32(ctx, 31, 0x36DBB8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DBB0u, 0x36DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBB8u;
label_36dbb8:
    // 0x36dbb8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x36dbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x36dbbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36dbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36dbc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36dbc4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36dbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36dbc8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36dbc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36dbcc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36dbccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36dbd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbd4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36dbd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36dbd8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36dbd8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbdc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36dbdcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbe0: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x36dbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dbe4: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x36dbe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36dbe8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x36dbe8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbec: 0xc0de66c  jal         func_3799B0
    ctx->pc = 0x36DBECu;
    SET_GPR_U32(ctx, 31, 0x36DBF4u);
    ctx->pc = 0x3799B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3799B0u, 0x36DBECu, 0x36DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBF4u;
label_36dbf4:
    // 0x36dbf4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x36dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x36dbf8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x36dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dbfc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x36dc00: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x36dc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36dc04: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x36dc04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36dc08: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x36dc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36dc0c: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x36DC0Cu;
    SET_GPR_U32(ctx, 31, 0x36DC14u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x36DC0Cu, 0x36DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC14u;
label_36dc14:
    // 0x36dc14: 0x0  nop
    ctx->pc = 0x36dc14u;
    // NOP
label_36dc18:
    // 0x36dc18: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x36dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x36dc1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36dc20: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x36dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x36dc24: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x36DC24u;
    {
        const bool branch_taken_0x36dc24 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x36dc24) {
            ctx->pc = 0x36DC58u;
            goto label_36dc58;
        }
    }
    ctx->pc = 0x36DC2Cu;
    // 0x36dc2c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x36dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x36dc30: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x36dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x36dc34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36DC34u;
    {
        const bool branch_taken_0x36dc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dc34) {
            ctx->pc = 0x36DC44u;
            goto label_36dc44;
        }
    }
    ctx->pc = 0x36DC3Cu;
    // 0x36dc3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x36DC3Cu;
    {
        const bool branch_taken_0x36dc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dc3c) {
            ctx->pc = 0x36DC58u;
            goto label_36dc58;
        }
    }
    ctx->pc = 0x36DC44u;
label_36dc44:
    // 0x36dc44: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x36dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x36dc48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36dc4c: 0x34640010  ori         $a0, $v1, 0x10
    ctx->pc = 0x36dc4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x36dc50: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x36dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x36dc54: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_36dc58:
    // 0x36dc58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36dc58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36dc5c: 0x0  nop
    ctx->pc = 0x36dc5cu;
    // NOP
label_36dc60:
    // 0x36dc60: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x36dc60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x36dc64: 0x1460fe95  bnez        $v1, . + 4 + (-0x16B << 2)
    ctx->pc = 0x36DC64u;
    {
        const bool branch_taken_0x36dc64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36dc64) {
            ctx->pc = 0x36D6BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d6bc;
        }
    }
    ctx->pc = 0x36DC6Cu;
    // 0x36dc6c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x36dc6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36dc70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36dc70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36dc74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36dc74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36dc78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36dc78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36dc7c: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x36dc7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x36dc80: 0x3e00008  jr          $ra
    ctx->pc = 0x36DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DC88u;
}
