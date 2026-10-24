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

// Function: Em06_R1_run_fly
// Address: 0x198870 - 0x198b9c
void Em06_R1_run_fly_0x198870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_run_fly_0x198870");
#endif

    switch (ctx->pc) {
        case 0x1988dcu: goto label_1988dc;
        case 0x198924u: goto label_198924;
        case 0x198944u: goto label_198944;
        case 0x198950u: goto label_198950;
        case 0x1989ecu: goto label_1989ec;
        case 0x198a04u: goto label_198a04;
        case 0x198a10u: goto label_198a10;
        case 0x198a50u: goto label_198a50;
        case 0x198a90u: goto label_198a90;
        case 0x198ab0u: goto label_198ab0;
        case 0x198abcu: goto label_198abc;
        case 0x198b40u: goto label_198b40;
        case 0x198b4cu: goto label_198b4c;
        default: break;
    }

    ctx->pc = 0x198870u;

    // 0x198870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198874: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x198874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x198878: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x198878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19887c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19887cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198880: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x198880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198884: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x198884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x198888: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x198888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19888c: 0x1083007c  beq         $a0, $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x19888Cu;
    {
        const bool branch_taken_0x19888c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19888c) {
            ctx->pc = 0x198A80u;
            goto label_198a80;
        }
    }
    ctx->pc = 0x198894u;
    // 0x198894: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198898: 0x10830065  beq         $a0, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x198898u;
    {
        const bool branch_taken_0x198898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x198898) {
            ctx->pc = 0x198A30u;
            goto label_198a30;
        }
    }
    ctx->pc = 0x1988A0u;
    // 0x1988a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1988a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1988a4: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1988A4u;
    {
        const bool branch_taken_0x1988a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1988a4) {
            ctx->pc = 0x198914u;
            goto label_198914;
        }
    }
    ctx->pc = 0x1988ACu;
    // 0x1988ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1988ACu;
    {
        const bool branch_taken_0x1988ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1988ac) {
            ctx->pc = 0x1988BCu;
            goto label_1988bc;
        }
    }
    ctx->pc = 0x1988B4u;
    // 0x1988b4: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1988B4u;
    {
        const bool branch_taken_0x1988b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1988b4) {
            ctx->pc = 0x198B8Cu;
            goto label_198b8c;
        }
    }
    ctx->pc = 0x1988BCu;
label_1988bc:
    // 0x1988bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1988bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1988c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1988c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1988c8: 0x24065a27  addiu       $a2, $zero, 0x5A27
    ctx->pc = 0x1988c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23079));
    // 0x1988cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1988ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1988d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1988d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1988d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1988D4u;
    SET_GPR_U32(ctx, 31, 0x1988DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1988D4u, 0x1988DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988DCu;
label_1988dc:
    // 0x1988dc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1988dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1988e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1988e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1988e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1988e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988e8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1988e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x1988ec: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1988ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1988f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1988f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1988f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1988f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1988f8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1988f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1988fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1988fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198900: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x198900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x198904: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198908: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x198908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19890c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x19890Cu;
    {
        const bool branch_taken_0x19890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19890c) {
            ctx->pc = 0x198B8Cu;
            goto label_198b8c;
        }
    }
    ctx->pc = 0x198914u;
label_198914:
    // 0x198914: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x198918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19891c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19891Cu;
    SET_GPR_U32(ctx, 31, 0x198924u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19891Cu, 0x198924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198924u;
label_198924:
    // 0x198924: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198928: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19892c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198930: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x198930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x198934: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x198934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x198938: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x198938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19893c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19893Cu;
    SET_GPR_U32(ctx, 31, 0x198944u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x198944u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x198944u) { return; }
    ctx->pc = 0x198944u;
label_198944:
    // 0x198944: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198948: 0xc05cd10  jal         func_173440
    ctx->pc = 0x198948u;
    SET_GPR_U32(ctx, 31, 0x198950u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x198948u, 0x198950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198950u;
label_198950:
    // 0x198950: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198954: 0x904209de  lbu         $v0, 0x9DE($v0)
    ctx->pc = 0x198954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2526)));
    // 0x198958: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x198958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19895c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19895cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x198960: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x198960u;
    {
        const bool branch_taken_0x198960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198960) {
            ctx->pc = 0x1989F4u;
            goto label_1989f4;
        }
    }
    ctx->pc = 0x198968u;
    // 0x198968: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19896c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198970: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198974: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x198974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198978: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19897c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19897cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x198980: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198984: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x198984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198988: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19898c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198990: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x198994: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x198994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x198998: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19899c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x19899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1989a0: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1989a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1989a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1989a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1989a8: 0x0  nop
    ctx->pc = 0x1989a8u;
    // NOP
    // 0x1989ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1989acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1989b0: 0x0  nop
    ctx->pc = 0x1989b0u;
    // NOP
    // 0x1989b4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1989B4u;
    {
        const bool branch_taken_0x1989b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1989b4) {
            ctx->pc = 0x1989DCu;
            goto label_1989dc;
        }
    }
    ctx->pc = 0x1989BCu;
    // 0x1989bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1989bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1989c0: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1989c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1989c4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x1989c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x1989c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1989c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1989cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1989ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1989d0: 0x0  nop
    ctx->pc = 0x1989d0u;
    // NOP
    // 0x1989d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1989d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1989d8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1989d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_1989dc:
    // 0x1989dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1989dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1989e0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1989e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1989e4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1989E4u;
    SET_GPR_U32(ctx, 31, 0x1989ECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1989E4u, 0x1989ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989ECu;
label_1989ec:
    // 0x1989ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1989ECu;
    {
        const bool branch_taken_0x1989ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989ec) {
            ctx->pc = 0x198A04u;
            goto label_198a04;
        }
    }
    ctx->pc = 0x1989F4u;
label_1989f4:
    // 0x1989f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1989f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1989f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1989f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1989fc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1989FCu;
    SET_GPR_U32(ctx, 31, 0x198A04u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1989FCu, 0x198A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A04u;
label_198a04:
    // 0x198a04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a08: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x198A08u;
    SET_GPR_U32(ctx, 31, 0x198A10u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x198A08u, 0x198A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A10u;
label_198a10:
    // 0x198a10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a14: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x198a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x198a18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x198A18u;
    {
        const bool branch_taken_0x198a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198a18) {
            ctx->pc = 0x198A30u;
            goto label_198a30;
        }
    }
    ctx->pc = 0x198A20u;
    // 0x198a20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a24: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x198a24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x198a28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198a2c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x198a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_198a30:
    // 0x198a30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a38: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x198a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x198a3c: 0x24065a09  addiu       $a2, $zero, 0x5A09
    ctx->pc = 0x198a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23049));
    // 0x198a40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x198a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198a44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x198a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x198a48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x198A48u;
    SET_GPR_U32(ctx, 31, 0x198A50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x198A48u, 0x198A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A50u;
label_198a50:
    // 0x198a50: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a54: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x198a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x198a58: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x198a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x198a5c: 0xac831344  sw          $v1, 0x1344($a0)
    ctx->pc = 0x198a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 3));
    // 0x198a60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a64: 0xac601338  sw          $zero, 0x1338($v1)
    ctx->pc = 0x198a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 0));
    // 0x198a68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a6c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x198a6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x198a70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198a74: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x198a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x198a78: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x198A78u;
    {
        const bool branch_taken_0x198a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198a78) {
            ctx->pc = 0x198B8Cu;
            goto label_198b8c;
        }
    }
    ctx->pc = 0x198A80u;
label_198a80:
    // 0x198a80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x198a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x198a88: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x198A88u;
    SET_GPR_U32(ctx, 31, 0x198A90u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x198A88u, 0x198A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A90u;
label_198a90:
    // 0x198a90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198a9c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x198a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x198aa0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x198aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x198aa4: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x198aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198aa8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x198AA8u;
    SET_GPR_U32(ctx, 31, 0x198AB0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x198AB0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x198AB0u) { return; }
    ctx->pc = 0x198AB0u;
label_198ab0:
    // 0x198ab0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ab4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x198AB4u;
    SET_GPR_U32(ctx, 31, 0x198ABCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x198AB4u, 0x198ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198ABCu;
label_198abc:
    // 0x198abc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ac0: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x198ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198ac4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ac8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x198ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x198ad0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x198ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x198ad4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ad8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x198ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198adc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198ae0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x198ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198ae4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x198ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x198ae8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x198ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x198aec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x198aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198af0: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x198af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198af4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x198af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x198af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198afc: 0x0  nop
    ctx->pc = 0x198afcu;
    // NOP
    // 0x198b00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198b00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198b04: 0x0  nop
    ctx->pc = 0x198b04u;
    // NOP
    // 0x198b08: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x198B08u;
    {
        const bool branch_taken_0x198b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198b08) {
            ctx->pc = 0x198B30u;
            goto label_198b30;
        }
    }
    ctx->pc = 0x198B10u;
    // 0x198b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b14: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x198b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198b18: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x198b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x198b1c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x198b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x198b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198b24: 0x0  nop
    ctx->pc = 0x198b24u;
    // NOP
    // 0x198b28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x198b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x198b2c: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x198b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_198b30:
    // 0x198b30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b34: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x198b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x198b38: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x198B38u;
    SET_GPR_U32(ctx, 31, 0x198B40u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x198B38u, 0x198B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B40u;
label_198b40:
    // 0x198b40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x198b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b44: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x198B44u;
    SET_GPR_U32(ctx, 31, 0x198B4Cu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x198B44u, 0x198B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198B4Cu;
label_198b4c:
    // 0x198b4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b50: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x198b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x198b54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x198B54u;
    {
        const bool branch_taken_0x198b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198b54) {
            ctx->pc = 0x198B8Cu;
            goto label_198b8c;
        }
    }
    ctx->pc = 0x198B5Cu;
    // 0x198b5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198b60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198b64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198b68: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x198b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198b6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198b70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198b74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198b78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198b80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198b84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x198b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198b88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_198b8c:
    // 0x198b8c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x198b8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198b90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x198b94: 0x3e00008  jr          $ra
    ctx->pc = 0x198B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198B9Cu;
}
