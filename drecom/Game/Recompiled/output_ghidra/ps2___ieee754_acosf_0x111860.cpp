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

// Function: __ieee754_acosf
// Address: 0x111860 - 0x111c90
void ps2___ieee754_acosf_0x111860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_acosf_0x111860");
#endif

    switch (ctx->pc) {
        case 0x111b00u: goto label_111b00;
        case 0x111b60u: goto label_111b60;
        default: break;
    }

    ctx->pc = 0x111860u;

    // 0x111860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111864: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x111864u;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
    // 0x111868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11186c: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x11186cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x111870: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x111870u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x111874: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x111874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x111878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x111878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11187c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x111880: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x111884: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x111884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x111888: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x111888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x11188c: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x11188Cu;
    {
        const bool branch_taken_0x11188c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x111890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11188Cu;
        // 0x111890: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11188c) {
            ctx->pc = 0x1118B8u;
            goto label_1118b8;
        }
    }
    ctx->pc = 0x111894u;
    // 0x111894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x111894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111898: 0x1c8000f8  bgtz        $a0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x111898u;
    {
        const bool branch_taken_0x111898 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x11189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111898u;
        // 0x11189c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111898) {
            ctx->pc = 0x111C7Cu;
            goto label_111c7c;
        }
    }
    ctx->pc = 0x1118A0u;
    // 0x1118a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1118a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1118a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1118a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1118a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1118a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1118ac: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x1118ACu;
    {
        const bool branch_taken_0x1118ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118ACu;
        // 0x1118b0: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118ac) {
            ctx->pc = 0x111C80u;
            goto label_111c80;
        }
    }
    ctx->pc = 0x1118B4u;
    // 0x1118b4: 0x0  nop
    ctx->pc = 0x1118b4u;
    // NOP
label_1118b8:
    // 0x1118b8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1118b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1118bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1118BCu;
    {
        const bool branch_taken_0x1118bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118BCu;
        // 0x1118c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118bc) {
            ctx->pc = 0x1118DCu;
            goto label_1118dc;
        }
    }
    ctx->pc = 0x1118C4u;
    // 0x1118c4: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x1118c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
    // 0x1118c8: 0x0  nop
    ctx->pc = 0x1118c8u;
    // NOP
    // 0x1118cc: 0x0  nop
    ctx->pc = 0x1118ccu;
    // NOP
    // 0x1118d0: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1118d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x1118d4: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1118D4u;
    {
        const bool branch_taken_0x1118d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1118D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118D4u;
        // 0x1118d8: 0xc7b60020  lwc1        $f22, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118d4) {
            ctx->pc = 0x111C80u;
            goto label_111c80;
        }
    }
    ctx->pc = 0x1118DCu;
label_1118dc:
    // 0x1118dc: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x1118dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x1118e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1118e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1118e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1118e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1118e8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1118E8u;
    {
        const bool branch_taken_0x1118e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1118ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118E8u;
        // 0x1118ec: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118e8) {
            ctx->pc = 0x111A14u;
            goto label_111a14;
        }
    }
    ctx->pc = 0x1118F0u;
    // 0x1118f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1118f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1118f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1118F4u;
    {
        const bool branch_taken_0x1118f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1118f4) {
            ctx->pc = 0x1118F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1118F4u;
            // 0x1118f8: 0x460b5d42  mul.s       $f21, $f11, $f11 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x111910u;
            goto label_111910;
        }
    }
    ctx->pc = 0x1118FCu;
    // 0x1118fc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1118fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x111900: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x111900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x111904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111908: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x111908u;
    {
        const bool branch_taken_0x111908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111908u;
        // 0x11190c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111908) {
            ctx->pc = 0x111C7Cu;
            goto label_111c7c;
        }
    }
    ctx->pc = 0x111910u;
label_111910:
    // 0x111910: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111914: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111914u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11191c: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x11191cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111920: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111924: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111928: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x11192c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x11192cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111930: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111934: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111938: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x11193c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x11193cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111940: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111944: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111948: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111948u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x11194c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11194cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111950: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x111950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x111954: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111958: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x11195c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x11195cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111960: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111964: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111968: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x11196c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x11196cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111970: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111974: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111978: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x111978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x11197c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11197cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x111980: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111984: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111988: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11198c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x11198cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111990: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111994: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111998: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x11199c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11199cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1119a0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1119a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1119a4: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1119a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1119a8: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1119a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x1119ac: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1119acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x1119b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1119b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1119b4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1119b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x1119b8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1119b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1119bc: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1119bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1119c0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1119c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1119c4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1119c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1119c8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1119c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1119cc: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1119ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1119d0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1119d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1119d4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1119d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1119d8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1119d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1119dc: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1119dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x1119e0: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1119e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1119e4: 0x46051580  add.s       $f22, $f2, $f5
    ctx->pc = 0x1119e4u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1119e8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1119e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1119ec: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1119ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x1119f0: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x1119f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1119f4: 0x0  nop
    ctx->pc = 0x1119f4u;
    // NOP
    // 0x1119f8: 0x0  nop
    ctx->pc = 0x1119f8u;
    // NOP
    // 0x1119fc: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1119fcu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x111a00: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x111a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    // 0x111a04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x111a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x111a08: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x111a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x111a0c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x111A0Cu;
    {
        const bool branch_taken_0x111a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A0Cu;
        // 0x111a10: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a0c) {
            ctx->pc = 0x111C78u;
            goto label_111c78;
        }
    }
    ctx->pc = 0x111A14u;
label_111a14:
    // 0x111a14: 0x481004a  bgez        $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x111A14u;
    {
        const bool branch_taken_0x111a14 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x111a14) {
            ctx->pc = 0x111B40u;
            goto label_111b40;
        }
    }
    ctx->pc = 0x111A1Cu;
    // 0x111a1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111a20: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x111a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x111a24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x111a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x111a28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111a2c: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x111a2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x111a30: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111a34: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111a34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111a3c: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x111a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111a40: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111a44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111a48: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x111a4c: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x111a4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111a50: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x111a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111a54: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x111a54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x111a58: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x111a5c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x111a5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111a64: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111a68: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x111a6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111a70: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111a74: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111a74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x111a78: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111a7c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111a80: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111a84: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x111a88: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111a8c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111a90: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111a94: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111a98: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x111a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x111a9c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111aa0: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111aa4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x111aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x111aa8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x111aa8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x111aac: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x111aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x111ab0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111ab4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111ab8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111abc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x111abcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x111ac0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111ac4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111ac8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x111ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x111acc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111accu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111ad0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111ad4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111ad8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x111ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x111adc: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x111adcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x111ae0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111ae4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111ae8: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x111ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x111aec: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x111aecu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x111af0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111af4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x111af4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x111af8: 0xc0449be  jal         func_1126F8
    ctx->pc = 0x111AF8u;
    SET_GPR_U32(ctx, 31, 0x111B00u);
    ctx->pc = 0x111AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111AF8u;
    // 0x111afc: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126F8u, 0x111AF8u, 0x111B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B00u;
label_111b00:
    // 0x111b00: 0x46000286  mov.s       $f10, $f0
    ctx->pc = 0x111b00u;
    ctx->f[10] = FPU_MOV_S(ctx->f[0]);
    // 0x111b04: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x111b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
    // 0x111b08: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x111b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x111b0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111b10: 0x0  nop
    ctx->pc = 0x111b10u;
    // NOP
    // 0x111b14: 0x0  nop
    ctx->pc = 0x111b14u;
    // NOP
    // 0x111b18: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x111b18u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x111b1c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x111b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x111b20: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x111b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x111b24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x111b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111b28: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x111b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x111b2c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x111b2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x111b30: 0x46005000  add.s       $f0, $f10, $f0
    ctx->pc = 0x111b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x111b34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x111b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x111b38: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x111B38u;
    {
        const bool branch_taken_0x111b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B38u;
        // 0x111b3c: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b38) {
            ctx->pc = 0x111C78u;
            goto label_111c78;
        }
    }
    ctx->pc = 0x111B40u;
label_111b40:
    // 0x111b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111b44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x111b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x111b48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x111b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x111b4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111b50: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x111b50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
    // 0x111b54: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x111b54u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x111b58: 0xc0449be  jal         func_1126F8
    ctx->pc = 0x111B58u;
    SET_GPR_U32(ctx, 31, 0x111B60u);
    ctx->pc = 0x111B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111B58u;
    // 0x111b5c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126F8u, 0x111B58u, 0x111B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111B60u;
label_111b60:
    // 0x111b60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x111b60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x111b64: 0x44835000  mtc1        $v1, $f10
    ctx->pc = 0x111b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x111b68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x111b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x111b6c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x111b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x111b70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x111b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x111b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x111b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111b78: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x111b78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x111b7c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x111b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
    // 0x111b80: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x111b80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
    // 0x111b84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111b88: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x111b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
    // 0x111b8c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x111b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
    // 0x111b90: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111b94: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111b98: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x111b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
    // 0x111b9c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x111b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
    // 0x111ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x111ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111ba4: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
    // 0x111ba8: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x111ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
    // 0x111bac: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x111bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x111bb0: 0x4602a881  sub.s       $f2, $f21, $f2
    ctx->pc = 0x111bb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    // 0x111bb4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111bb8: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x111bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
    // 0x111bbc: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x111bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
    // 0x111bc0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x111bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x111bc4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x111bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x111bc8: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x111bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
    // 0x111bcc: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x111bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
    // 0x111bd0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x111bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x111bd4: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x111bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111bd8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x111bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x111bdc: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x111bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
    // 0x111be0: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x111be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
    // 0x111be4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x111be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x111be8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111bec: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x111becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x111bf0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x111bf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x111bf4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x111bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x111bf8: 0x460650c0  add.s       $f3, $f10, $f6
    ctx->pc = 0x111bf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[6]);
    // 0x111bfc: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x111bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
    // 0x111c00: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x111c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
    // 0x111c04: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x111c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x111c08: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111c08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111c0c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x111c0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x111c10: 0x0  nop
    ctx->pc = 0x111c10u;
    // NOP
    // 0x111c14: 0x0  nop
    ctx->pc = 0x111c14u;
    // NOP
    // 0x111c18: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x111c18u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x111c1c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x111c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x111c20: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x111c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
    // 0x111c24: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x111c24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
    // 0x111c28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x111c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x111c2c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111c30: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111c30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111c34: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x111c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x111c38: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x111c38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x111c3c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111c3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111c40: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x111c40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x111c44: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x111c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x111c48: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x111c48u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x111c4c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x111c4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111c50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x111c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x111c54: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x111c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x111c58: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x111c58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x111c5c: 0x0  nop
    ctx->pc = 0x111c5cu;
    // NOP
    // 0x111c60: 0x0  nop
    ctx->pc = 0x111c60u;
    // NOP
    // 0x111c64: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x111c64u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
    // 0x111c68: 0x460a6002  mul.s       $f0, $f12, $f10
    ctx->pc = 0x111c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
    // 0x111c6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x111c6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x111c70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x111c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x111c74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x111c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_111c78:
    // 0x111c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111c7c:
    // 0x111c7c: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x111c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_111c80:
    // 0x111c80: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x111c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x111c84: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x111c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x111c88: 0x3e00008  jr          $ra
    ctx->pc = 0x111C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C88u;
        // 0x111c8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C90u;
}
