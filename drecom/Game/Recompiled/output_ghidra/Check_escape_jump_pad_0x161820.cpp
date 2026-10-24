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

// Function: Check_escape_jump_pad
// Address: 0x161820 - 0x161ab8
void Check_escape_jump_pad_0x161820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_escape_jump_pad_0x161820");
#endif

    switch (ctx->pc) {
        case 0x161890u: goto label_161890;
        case 0x161930u: goto label_161930;
        case 0x161964u: goto label_161964;
        case 0x1619f8u: goto label_1619f8;
        case 0x161a2cu: goto label_161a2c;
        default: break;
    }

    ctx->pc = 0x161820u;

    // 0x161820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x161820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x161824: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x161824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x161828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x161828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16182c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16182cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x161830: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x161830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x161834: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x161834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x161838: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x161838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16183c: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x16183cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x161840: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x161840u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x161844: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x161844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x161848: 0x10600095  beqz        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x161848u;
    {
        const bool branch_taken_0x161848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161848) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161850u;
    // 0x161850: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x161850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x161854: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x161854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x161858: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x161858u;
    {
        const bool branch_taken_0x161858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161858) {
            ctx->pc = 0x161A58u;
            goto label_161a58;
        }
    }
    ctx->pc = 0x161860u;
    // 0x161860: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161864: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x161864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x161868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16186c: 0x0  nop
    ctx->pc = 0x16186cu;
    // NOP
    // 0x161870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161874: 0x0  nop
    ctx->pc = 0x161874u;
    // NOP
    // 0x161878: 0x45010071  bc1t        . + 4 + (0x71 << 2)
    ctx->pc = 0x161878u;
    {
        const bool branch_taken_0x161878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161878) {
            ctx->pc = 0x161A40u;
            goto label_161a40;
        }
    }
    ctx->pc = 0x161880u;
    // 0x161880: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x161880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161884: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x161884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x161888: 0xc058f20  jal         func_163C80
    ctx->pc = 0x161888u;
    SET_GPR_U32(ctx, 31, 0x161890u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x161888u, 0x161890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161890u;
label_161890:
    // 0x161890: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x161890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x161894: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x161894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x161898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16189c: 0x0  nop
    ctx->pc = 0x16189cu;
    // NOP
    // 0x1618a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1618a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1618a4: 0x0  nop
    ctx->pc = 0x1618a4u;
    // NOP
    // 0x1618a8: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x1618A8u;
    {
        const bool branch_taken_0x1618a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1618a8) {
            ctx->pc = 0x161978u;
            goto label_161978;
        }
    }
    ctx->pc = 0x1618B0u;
    // 0x1618b0: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1618b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1618b4: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x1618b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x1618b8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1618b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1618bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1618bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1618c0: 0x0  nop
    ctx->pc = 0x1618c0u;
    // NOP
    // 0x1618c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1618c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1618c8: 0x0  nop
    ctx->pc = 0x1618c8u;
    // NOP
    // 0x1618cc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1618CCu;
    {
        const bool branch_taken_0x1618cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1618cc) {
            ctx->pc = 0x1618ECu;
            goto label_1618ec;
        }
    }
    ctx->pc = 0x1618D4u;
    // 0x1618d4: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x1618d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1618d8: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x1618d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x1618dc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1618dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1618e0: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x1618e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x1618e4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1618E4u;
    {
        const bool branch_taken_0x1618e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1618e4) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x1618ECu;
label_1618ec:
    // 0x1618ec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1618ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1618f0: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x1618f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x1618f4: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1618f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1618f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1618f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1618fc: 0x0  nop
    ctx->pc = 0x1618fcu;
    // NOP
    // 0x161900: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161904: 0x0  nop
    ctx->pc = 0x161904u;
    // NOP
    // 0x161908: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x161908u;
    {
        const bool branch_taken_0x161908 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161908) {
            ctx->pc = 0x161944u;
            goto label_161944;
        }
    }
    ctx->pc = 0x161910u;
    // 0x161910: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x161910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161914: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x161914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x161918: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x161918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x16191c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16191cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161920: 0x0  nop
    ctx->pc = 0x161920u;
    // NOP
    // 0x161924: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x161924u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161928: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x161928u;
    SET_GPR_U32(ctx, 31, 0x161930u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x161928u, 0x161930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161930u;
label_161930:
    // 0x161930: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161934: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x161934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x161938: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x16193c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x16193Cu;
    {
        const bool branch_taken_0x16193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16193c) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161944u;
label_161944:
    // 0x161944: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x161944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161948: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x16194c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16194cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x161950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161954: 0x0  nop
    ctx->pc = 0x161954u;
    // NOP
    // 0x161958: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x161958u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16195c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x16195Cu;
    SET_GPR_U32(ctx, 31, 0x161964u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x16195Cu, 0x161964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161964u;
label_161964:
    // 0x161964: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161968: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x161968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16196c: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x16196cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161970: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x161970u;
    {
        const bool branch_taken_0x161970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161970) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161978u;
label_161978:
    // 0x161978: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x161978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16197c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x16197cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x161980: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x161980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x161984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161988: 0x0  nop
    ctx->pc = 0x161988u;
    // NOP
    // 0x16198c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16198cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161990: 0x0  nop
    ctx->pc = 0x161990u;
    // NOP
    // 0x161994: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x161994u;
    {
        const bool branch_taken_0x161994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x161994) {
            ctx->pc = 0x1619B4u;
            goto label_1619b4;
        }
    }
    ctx->pc = 0x16199Cu;
    // 0x16199c: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x16199cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1619a0: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x1619a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x1619a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1619a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1619a8: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x1619a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x1619ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1619ACu;
    {
        const bool branch_taken_0x1619ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1619ac) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x1619B4u;
label_1619b4:
    // 0x1619b4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1619b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1619b8: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x1619b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x1619bc: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1619bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1619c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1619c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1619c4: 0x0  nop
    ctx->pc = 0x1619c4u;
    // NOP
    // 0x1619c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1619c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1619cc: 0x0  nop
    ctx->pc = 0x1619ccu;
    // NOP
    // 0x1619d0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1619D0u;
    {
        const bool branch_taken_0x1619d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1619d0) {
            ctx->pc = 0x161A0Cu;
            goto label_161a0c;
        }
    }
    ctx->pc = 0x1619D8u;
    // 0x1619d8: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x1619d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1619dc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1619e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1619e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1619e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1619e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1619e8: 0x0  nop
    ctx->pc = 0x1619e8u;
    // NOP
    // 0x1619ec: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1619ecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1619f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1619F0u;
    SET_GPR_U32(ctx, 31, 0x1619F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1619F0u, 0x1619F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1619F8u;
label_1619f8:
    // 0x1619f8: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x1619f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x1619fc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1619fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x161a00: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161a04: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x161A04u;
    {
        const bool branch_taken_0x161a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a04) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161A0Cu;
label_161a0c:
    // 0x161a0c: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x161a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161a10: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x161a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x161a14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x161a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x161a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161a1c: 0x0  nop
    ctx->pc = 0x161a1cu;
    // NOP
    // 0x161a20: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x161a20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161a24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x161A24u;
    SET_GPR_U32(ctx, 31, 0x161A2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x161A24u, 0x161A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161A2Cu;
label_161a2c:
    // 0x161a2c: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161a30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x161a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x161a34: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161a38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x161A38u;
    {
        const bool branch_taken_0x161a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a38) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161A40u;
label_161a40:
    // 0x161a40: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x161a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a44: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161a48: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x161a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161a4c: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161a50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x161A50u;
    {
        const bool branch_taken_0x161a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a50) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161A58u;
label_161a58:
    // 0x161a58: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x161a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161a5c: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x161a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161a64: 0x0  nop
    ctx->pc = 0x161a64u;
    // NOP
    // 0x161a68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x161a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x161a6c: 0x0  nop
    ctx->pc = 0x161a6cu;
    // NOP
    // 0x161a70: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x161A70u;
    {
        const bool branch_taken_0x161a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x161a70) {
            ctx->pc = 0x161A90u;
            goto label_161a90;
        }
    }
    ctx->pc = 0x161A78u;
    // 0x161a78: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x161a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a7c: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161a80: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161a84: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161a88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161A88u;
    {
        const bool branch_taken_0x161a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a88) {
            ctx->pc = 0x161AA0u;
            goto label_161aa0;
        }
    }
    ctx->pc = 0x161A90u;
label_161a90:
    // 0x161a90: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x161a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161a94: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161a98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x161a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x161a9c: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
label_161aa0:
    // 0x161aa0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x161aa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161aac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x161aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x161AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161AB8u;
}
