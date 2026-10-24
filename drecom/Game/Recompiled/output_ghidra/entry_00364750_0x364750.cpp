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

// Function: entry_00364750
// Address: 0x364750 - 0x364878
void entry_00364750_0x364750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364750_0x364750");
#endif

    switch (ctx->pc) {
        case 0x364798u: goto label_364798;
        case 0x3647d0u: goto label_3647d0;
        case 0x3647e8u: goto label_3647e8;
        default: break;
    }

    ctx->pc = 0x364750u;

    // 0x364750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364754: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x364754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x364758: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x364758u;
    {
        const bool branch_taken_0x364758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x364758) {
            ctx->pc = 0x364924u;
            return;
        }
    }
    ctx->pc = 0x364760u;
    // 0x364760: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364764: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x364764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x364768: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x364768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x36476c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x364770: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x364770u;
    {
        const bool branch_taken_0x364770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364770) {
            ctx->pc = 0x3648D4u;
            return;
        }
    }
    ctx->pc = 0x364778u;
    // 0x364778: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36477c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x36477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x364780: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x364780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x364784: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x364784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x364788: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x364788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x36478c: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x36478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x364790: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x364790u;
    SET_GPR_U32(ctx, 31, 0x364798u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x364790u, 0x364798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364798u;
label_364798:
    // 0x364798: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36479c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x36479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3647a0: 0x3c034576  lui         $v1, 0x4576
    ctx->pc = 0x3647a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17782 << 16));
    // 0x3647a4: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x3647a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x3647a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3647a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3647ac: 0x0  nop
    ctx->pc = 0x3647acu;
    // NOP
    // 0x3647b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3647b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3647b4: 0x0  nop
    ctx->pc = 0x3647b4u;
    // NOP
    // 0x3647b8: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x3647B8u;
    {
        const bool branch_taken_0x3647b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3647b8) {
            ctx->pc = 0x364924u;
            return;
        }
    }
    ctx->pc = 0x3647C0u;
    // 0x3647c0: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x3647c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3647c4: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x3647c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3647c8: 0xc0455e6  jal         func_115798
    ctx->pc = 0x3647C8u;
    SET_GPR_U32(ctx, 31, 0x3647D0u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x3647C8u, 0x3647D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3647D0u;
label_3647d0:
    // 0x3647d0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3647d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3647d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3647d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3647d8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x3647d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3647dc: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x3647dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3647e0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x3647E0u;
    SET_GPR_U32(ctx, 31, 0x3647E8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x3647E0u, 0x3647E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3647E8u;
label_3647e8:
    // 0x3647e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3647e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3647ec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x3647ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3647f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3647f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3647f4: 0x0  nop
    ctx->pc = 0x3647f4u;
    // NOP
    // 0x3647f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3647f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3647fc: 0x0  nop
    ctx->pc = 0x3647fcu;
    // NOP
    // 0x364800: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x364800u;
    {
        const bool branch_taken_0x364800 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364800) {
            ctx->pc = 0x364878u;
            return;
        }
    }
    ctx->pc = 0x364808u;
    // 0x364808: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x364808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x36480c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x36480cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x364810: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x364810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364814: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x364814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x364818: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36481c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x36481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364820: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x364820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x364824: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x364824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x364828: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364828u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36482c: 0x0  nop
    ctx->pc = 0x36482cu;
    // NOP
    // 0x364830: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364834: 0x0  nop
    ctx->pc = 0x364834u;
    // NOP
    // 0x364838: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x364838u;
    {
        const bool branch_taken_0x364838 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364838) {
            ctx->pc = 0x364878u;
            return;
        }
    }
    ctx->pc = 0x364840u;
    // 0x364840: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364844: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364848: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36484c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x36484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x364850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364854: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x364854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x364858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36485c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36485cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364864: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x364868: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36486c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36486cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364870: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x364870u;
    {
        const bool branch_taken_0x364870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364870) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x364878u;
}
