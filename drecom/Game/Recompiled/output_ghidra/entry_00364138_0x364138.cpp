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

// Function: entry_00364138
// Address: 0x364138 - 0x36421c
void entry_00364138_0x364138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364138_0x364138");
#endif

    switch (ctx->pc) {
        case 0x364170u: goto label_364170;
        case 0x364188u: goto label_364188;
        default: break;
    }

    ctx->pc = 0x364138u;

    // 0x364138: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36413c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x36413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364140: 0x3c0344b5  lui         $v1, 0x44B5
    ctx->pc = 0x364140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17589 << 16));
    // 0x364144: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x364144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x364148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x364148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36414c: 0x0  nop
    ctx->pc = 0x36414cu;
    // NOP
    // 0x364150: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x364154: 0x0  nop
    ctx->pc = 0x364154u;
    // NOP
    // 0x364158: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x364158u;
    {
        const bool branch_taken_0x364158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x364158) {
            ctx->pc = 0x364300u;
            return;
        }
    }
    ctx->pc = 0x364160u;
    // 0x364160: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x364160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x364164: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x364164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364168: 0xc0455e6  jal         func_115798
    ctx->pc = 0x364168u;
    SET_GPR_U32(ctx, 31, 0x364170u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x364168u, 0x364170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364170u;
label_364170:
    // 0x364170: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x364174: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364178: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x364178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36417c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x36417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x364180: 0xc058f20  jal         func_163C80
    ctx->pc = 0x364180u;
    SET_GPR_U32(ctx, 31, 0x364188u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x364180u, 0x364188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364188u;
label_364188:
    // 0x364188: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x364188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x36418c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x36418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x364190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x364194: 0x0  nop
    ctx->pc = 0x364194u;
    // NOP
    // 0x364198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x364198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36419c: 0x0  nop
    ctx->pc = 0x36419cu;
    // NOP
    // 0x3641a0: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x3641A0u;
    {
        const bool branch_taken_0x3641a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3641a0) {
            ctx->pc = 0x364254u;
            return;
        }
    }
    ctx->pc = 0x3641A8u;
    // 0x3641a8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x3641a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3641ac: 0x3c03bec9  lui         $v1, 0xBEC9
    ctx->pc = 0x3641acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48841 << 16));
    // 0x3641b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3641b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3641b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3641b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3641b8: 0x0  nop
    ctx->pc = 0x3641b8u;
    // NOP
    // 0x3641bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3641bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3641c0: 0x0  nop
    ctx->pc = 0x3641c0u;
    // NOP
    // 0x3641c4: 0x4501004e  bc1t        . + 4 + (0x4E << 2)
    ctx->pc = 0x3641C4u;
    {
        const bool branch_taken_0x3641c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3641c4) {
            ctx->pc = 0x364300u;
            return;
        }
    }
    ctx->pc = 0x3641CCu;
    // 0x3641cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3641ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3641d0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3641d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3641d4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3641d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x3641d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3641d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3641dc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3641DCu;
    {
        const bool branch_taken_0x3641dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3641dc) {
            ctx->pc = 0x36421Cu;
            return;
        }
    }
    ctx->pc = 0x3641E4u;
    // 0x3641e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3641e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3641e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3641e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3641ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3641ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3641f0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x3641f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3641f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3641f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3641f8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3641f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3641fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3641fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364200: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x364200u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x364204: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364208: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x364208u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36420c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364210: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x364210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x364214: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x364214u;
    {
        const bool branch_taken_0x364214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x364214) {
            ctx->pc = 0x36424Cu;
            return;
        }
    }
    ctx->pc = 0x36421Cu;
}
