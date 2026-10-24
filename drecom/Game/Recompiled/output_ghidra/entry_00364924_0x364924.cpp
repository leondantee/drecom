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

// Function: entry_00364924
// Address: 0x364924 - 0x364a00
void entry_00364924_0x364924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364924_0x364924");
#endif

    switch (ctx->pc) {
        case 0x36495cu: goto label_36495c;
        case 0x364974u: goto label_364974;
        default: break;
    }

    ctx->pc = 0x364924u;

    // 0x364924: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364928: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x364928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36492c: 0x3c0344b5  lui         $v1, 0x44B5
    ctx->pc = 0x36492cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17589 << 16));
    // 0x364930: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x364930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x364934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364938: 0x0  nop
    ctx->pc = 0x364938u;
    // NOP
    // 0x36493c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36493cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364940: 0x0  nop
    ctx->pc = 0x364940u;
    // NOP
    // 0x364944: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x364944u;
    {
        const bool branch_taken_0x364944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364944) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x36494Cu;
    // 0x36494c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x36494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364950: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x364950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364954: 0xc0455e6  jal         func_115798
    ctx->pc = 0x364954u;
    SET_GPR_U32(ctx, 31, 0x36495Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x364954u, 0x36495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36495Cu;
label_36495c:
    // 0x36495c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x36495cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x364960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364964: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x364964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364968: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x364968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36496c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x36496Cu;
    SET_GPR_U32(ctx, 31, 0x364974u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x36496Cu, 0x364974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364974u;
label_364974:
    // 0x364974: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x364978: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36497c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36497cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364980: 0x0  nop
    ctx->pc = 0x364980u;
    // NOP
    // 0x364984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364988: 0x0  nop
    ctx->pc = 0x364988u;
    // NOP
    // 0x36498c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x36498Cu;
    {
        const bool branch_taken_0x36498c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36498c) {
            ctx->pc = 0x364A08u;
            return;
        }
    }
    ctx->pc = 0x364994u;
    // 0x364994: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x364994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364998: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x364998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x36499c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x36499cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3649a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3649a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3649a4: 0x0  nop
    ctx->pc = 0x3649a4u;
    // NOP
    // 0x3649a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3649a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3649ac: 0x0  nop
    ctx->pc = 0x3649acu;
    // NOP
    // 0x3649b0: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x3649B0u;
    {
        const bool branch_taken_0x3649b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3649b0) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x3649B8u;
    // 0x3649b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649bc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3649bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3649c0: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3649c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3649c4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3649c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3649c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3649C8u;
    {
        const bool branch_taken_0x3649c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3649c8) {
            ctx->pc = 0x364A00u;
            return;
        }
    }
    ctx->pc = 0x3649D0u;
    // 0x3649d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3649d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3649d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3649d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3649dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3649dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3649e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3649e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3649e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3649ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3649f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3649f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3649f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3649f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3649fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3649fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x364a00u;
}
