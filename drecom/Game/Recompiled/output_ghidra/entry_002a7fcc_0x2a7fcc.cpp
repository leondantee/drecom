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

// Function: entry_002a7fcc
// Address: 0x2a7fcc - 0x2a81c8
void entry_002a7fcc_0x2a7fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a7fcc_0x2a7fcc");
#endif

    switch (ctx->pc) {
        case 0x2a8010u: goto label_2a8010;
        case 0x2a802cu: goto label_2a802c;
        case 0x2a8060u: goto label_2a8060;
        case 0x2a8080u: goto label_2a8080;
        case 0x2a8090u: goto label_2a8090;
        case 0x2a809cu: goto label_2a809c;
        case 0x2a80a8u: goto label_2a80a8;
        case 0x2a814cu: goto label_2a814c;
        case 0x2a81b8u: goto label_2a81b8;
        default: break;
    }

    ctx->pc = 0x2a7fccu;

    // 0x2a7fcc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7fd0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2a7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a7fd4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2a7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a7fd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2a7fdc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a7fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a7fe0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a7fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2a7fe4: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2a7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2a7fe8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a7fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a7fec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a7fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a7ff0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a7ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ff4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a7ff8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2a7ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a7ffc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2a7ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a8000: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a8000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a8004: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a8004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a8008: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A8008u;
    SET_GPR_U32(ctx, 31, 0x2A8010u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A8008u, 0x2A8010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8010u;
label_2a8010:
    // 0x2a8010: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a8010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2a8014: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8018: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a8018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a801c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2a801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8020: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a8020u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a8024: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A8024u;
    SET_GPR_U32(ctx, 31, 0x2A802Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A8024u, 0x2A802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A802Cu;
label_2a802c:
    // 0x2a802c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8030: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a8030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a8034: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8038: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2a8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a803c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2a803cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2a8040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a8044: 0x0  nop
    ctx->pc = 0x2a8044u;
    // NOP
    // 0x2a8048: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a8048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a804c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a804cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2a8050: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8054: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a8054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a8058: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A8058u;
    SET_GPR_U32(ctx, 31, 0x2A8060u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A8058u, 0x2A8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8060u;
label_2a8060:
    // 0x2a8060: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8064: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8068: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a806c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a8070: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a8070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a8074: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a8074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a8078: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A8078u;
    SET_GPR_U32(ctx, 31, 0x2A8080u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A8078u, 0x2A8080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8080u;
label_2a8080:
    // 0x2a8080: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a8084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a8088: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A8088u;
    SET_GPR_U32(ctx, 31, 0x2A8090u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A8088u, 0x2A8090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8090u;
label_2a8090:
    // 0x2a8090: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a8090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8094: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A8094u;
    SET_GPR_U32(ctx, 31, 0x2A809Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A8094u, 0x2A809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A809Cu;
label_2a809c:
    // 0x2a809c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a80a0: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A80A0u;
    SET_GPR_U32(ctx, 31, 0x2A80A8u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A80A0u, 0x2A80A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A80A8u;
label_2a80a8:
    // 0x2a80a8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a80ac: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x2a80acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x2a80b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a80b4: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x2a80b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a80b8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a80bc: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2a80bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a80c0: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2a80c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2a80c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a80c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a80c8: 0x0  nop
    ctx->pc = 0x2a80c8u;
    // NOP
    // 0x2a80cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a80ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a80d0: 0x0  nop
    ctx->pc = 0x2a80d0u;
    // NOP
    // 0x2a80d4: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x2A80D4u;
    {
        const bool branch_taken_0x2a80d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a80d4) {
            ctx->pc = 0x2A81C8u;
            return;
        }
    }
    ctx->pc = 0x2A80DCu;
    // 0x2a80dc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a80e0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2a80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a80e4: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2a80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2a80e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a80e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a80ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a80ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a80f0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2a80f0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a80f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a80f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a80f8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a80f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a80fc: 0x0  nop
    ctx->pc = 0x2a80fcu;
    // NOP
    // 0x2a8100: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x2A8100u;
    {
        const bool branch_taken_0x2a8100 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a8100) {
            ctx->pc = 0x2A81C8u;
            return;
        }
    }
    ctx->pc = 0x2A8108u;
    // 0x2a8108: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a810c: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2a810cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2a8110: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a8110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a8114: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a8114u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a8118: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2a8118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a811c: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A811Cu;
    {
        const bool branch_taken_0x2a811c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a811c) {
            ctx->pc = 0x2A81C8u;
            return;
        }
    }
    ctx->pc = 0x2A8124u;
    // 0x2a8124: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2a8124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8128: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x2a8128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x2a812c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a8130: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a8130u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a8134: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a8134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a8138: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A8138u;
    {
        const bool branch_taken_0x2a8138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8138) {
            ctx->pc = 0x2A81C8u;
            return;
        }
    }
    ctx->pc = 0x2A8140u;
    // 0x2a8140: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a8140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a8144: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8144u;
    SET_GPR_U32(ctx, 31, 0x2A814Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8144u, 0x2A814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A814Cu;
label_2a814c:
    // 0x2a814c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8150: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a8150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a8154: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a8154u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8158: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a8158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a815c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a815cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a8160: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2a8160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2a8164: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a8164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a8168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a8168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a816c: 0x0  nop
    ctx->pc = 0x2a816cu;
    // NOP
    // 0x2a8170: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a8170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a8174: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a8178: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a8178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a817c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a817cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a8180: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a8180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a8184: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a8188: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a8188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a818c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a8190: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a8190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a8194: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2a8194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2a8198: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2a8198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a819c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a819cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a81a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a81a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a81a4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a81a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a81a8: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x2a81a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2a81ac: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a81acu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a81b0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A81B0u;
    SET_GPR_U32(ctx, 31, 0x2A81B8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A81B0u, 0x2A81B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A81B8u;
label_2a81b8:
    // 0x2a81b8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2a81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2a81bc: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x2a81bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x2a81c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a81c4: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x2a81c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2a81c8u;
}
