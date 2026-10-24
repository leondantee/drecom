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

// Function: entry_002a7764
// Address: 0x2a7764 - 0x2a7960
void entry_002a7764_0x2a7764(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7764_0x2a7764");
#endif

    switch (ctx->pc) {
        case 0x2a77a8u: goto label_2a77a8;
        case 0x2a77c4u: goto label_2a77c4;
        case 0x2a77f8u: goto label_2a77f8;
        case 0x2a7818u: goto label_2a7818;
        case 0x2a7828u: goto label_2a7828;
        case 0x2a7834u: goto label_2a7834;
        case 0x2a7840u: goto label_2a7840;
        case 0x2a78e4u: goto label_2a78e4;
        case 0x2a7950u: goto label_2a7950;
        default: break;
    }

    ctx->pc = 0x2a7764u;

    // 0x2a7764: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7768: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2a7768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a776c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a776cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a7770: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a7770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a7774: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a7774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a7778: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a7778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2a777c: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2a777cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2a7780: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a7780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a7784: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7788: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a778c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7790: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a7790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a7794: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a7794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7798: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a7798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a779c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a779cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a77a0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A77A0u;
    SET_GPR_U32(ctx, 31, 0x2A77A8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A77A0u, 0x2A77A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77A8u;
label_2a77a8:
    // 0x2a77a8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a77a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2a77ac: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a77acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a77b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a77b4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a77b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a77b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a77b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a77bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A77BCu;
    SET_GPR_U32(ctx, 31, 0x2A77C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A77BCu, 0x2A77C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77C4u;
label_2a77c4:
    // 0x2a77c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a77c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a77c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a77cc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a77ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77d0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2a77d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a77d4: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2a77d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2a77d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a77d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a77dc: 0x0  nop
    ctx->pc = 0x2a77dcu;
    // NOP
    // 0x2a77e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a77e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a77e4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a77e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2a77e8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a77e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a77ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a77f0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A77F0u;
    SET_GPR_U32(ctx, 31, 0x2A77F8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A77F0u, 0x2A77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77F8u;
label_2a77f8:
    // 0x2a77f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a77f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a77fc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a77fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7800: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7804: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a7804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a7808: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a7808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a780c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a7810: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A7810u;
    SET_GPR_U32(ctx, 31, 0x2A7818u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A7810u, 0x2A7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7818u;
label_2a7818:
    // 0x2a7818: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a781c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a781cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7820: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A7820u;
    SET_GPR_U32(ctx, 31, 0x2A7828u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A7820u, 0x2A7828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7828u;
label_2a7828:
    // 0x2a7828: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a782c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A782Cu;
    SET_GPR_U32(ctx, 31, 0x2A7834u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A782Cu, 0x2A7834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7834u;
label_2a7834:
    // 0x2a7834: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7838: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A7838u;
    SET_GPR_U32(ctx, 31, 0x2A7840u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A7838u, 0x2A7840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7840u;
label_2a7840:
    // 0x2a7840: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7844: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x2a7844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x2a7848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a784c: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x2a784cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a7850: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7854: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2a7854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7858: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2a7858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2a785c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a785cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7860: 0x0  nop
    ctx->pc = 0x2a7860u;
    // NOP
    // 0x2a7864: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7868: 0x0  nop
    ctx->pc = 0x2a7868u;
    // NOP
    // 0x2a786c: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x2A786Cu;
    {
        const bool branch_taken_0x2a786c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a786c) {
            ctx->pc = 0x2A7960u;
            return;
        }
    }
    ctx->pc = 0x2A7874u;
    // 0x2a7874: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7878: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2a7878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a787c: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2a787cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2a7880: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a7880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7884: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a7884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a7888: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2a7888u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a788c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a788cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a7890: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a7890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7894: 0x0  nop
    ctx->pc = 0x2a7894u;
    // NOP
    // 0x2a7898: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x2A7898u;
    {
        const bool branch_taken_0x2a7898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7898) {
            ctx->pc = 0x2A7960u;
            return;
        }
    }
    ctx->pc = 0x2A78A0u;
    // 0x2a78a0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a78a4: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2a78a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2a78a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a78a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a78ac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a78acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a78b0: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2a78b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a78b4: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A78B4u;
    {
        const bool branch_taken_0x2a78b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a78b4) {
            ctx->pc = 0x2A7960u;
            return;
        }
    }
    ctx->pc = 0x2A78BCu;
    // 0x2a78bc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a78c0: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2a78c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2a78c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a78c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a78c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a78c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a78cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a78ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a78d0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A78D0u;
    {
        const bool branch_taken_0x2a78d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a78d0) {
            ctx->pc = 0x2A7960u;
            return;
        }
    }
    ctx->pc = 0x2A78D8u;
    // 0x2a78d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a78d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a78dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A78DCu;
    SET_GPR_U32(ctx, 31, 0x2A78E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A78DCu, 0x2A78E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A78E4u;
label_2a78e4:
    // 0x2a78e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a78e8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a78ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a78ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a78f0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a78f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a78f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a78f8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2a78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2a78fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a78fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a7900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7904: 0x0  nop
    ctx->pc = 0x2a7904u;
    // NOP
    // 0x2a7908: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a7908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a790c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7910: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a7910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a7914: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a7914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a7918: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a7918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a791c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a7920: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a7920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a7924: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a7924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a7928: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a7928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a792c: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2a792cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2a7930: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7934: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a7934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a7938: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a7938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a793c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a793cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a7940: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x2a7940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a7944: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a7944u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a7948: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A7948u;
    SET_GPR_U32(ctx, 31, 0x2A7950u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A7948u, 0x2A7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7950u;
label_2a7950:
    // 0x2a7950: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a7950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7954: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2a7954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2a7958: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a795c: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x2a795cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2a7960u;
}
