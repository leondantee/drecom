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

// Function: entry_0024736c
// Address: 0x24736c - 0x247414
void entry_0024736c_0x24736c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024736c_0x24736c");
#endif

    ctx->pc = 0x24736cu;

    // 0x24736c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x24736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247370: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247374: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x247374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x247378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24737c: 0x0  nop
    ctx->pc = 0x24737cu;
    // NOP
    // 0x247380: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x247380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247384: 0x0  nop
    ctx->pc = 0x247384u;
    // NOP
    // 0x247388: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x247388u;
    {
        const bool branch_taken_0x247388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247388) {
            ctx->pc = 0x24746Cu;
            return;
        }
    }
    ctx->pc = 0x247390u;
    // 0x247390: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247394: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247398: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x247398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24739c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24739cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2473a0: 0x0  nop
    ctx->pc = 0x2473a0u;
    // NOP
    // 0x2473a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2473a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2473a8: 0x0  nop
    ctx->pc = 0x2473a8u;
    // NOP
    // 0x2473ac: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2473ACu;
    {
        const bool branch_taken_0x2473ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2473ac) {
            ctx->pc = 0x247414u;
            return;
        }
    }
    ctx->pc = 0x2473B4u;
    // 0x2473b4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2473b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2473b8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2473b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2473bc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2473bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2473c0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2473c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2473c4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2473c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2473c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2473c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2473cc: 0x0  nop
    ctx->pc = 0x2473ccu;
    // NOP
    // 0x2473d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2473d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2473d4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2473d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2473d8: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2473d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2473dc: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x2473dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2473e0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2473e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2473e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2473e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2473e8: 0x0  nop
    ctx->pc = 0x2473e8u;
    // NOP
    // 0x2473ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2473ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2473f0: 0x0  nop
    ctx->pc = 0x2473f0u;
    // NOP
    // 0x2473f4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2473F4u;
    {
        const bool branch_taken_0x2473f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2473f4) {
            ctx->pc = 0x24746Cu;
            return;
        }
    }
    ctx->pc = 0x2473FCu;
    // 0x2473fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2473fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247400: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x247400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x247404: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x247404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247408: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x247408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24740c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x24740Cu;
    {
        const bool branch_taken_0x24740c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24740c) {
            ctx->pc = 0x24746Cu;
            return;
        }
    }
    ctx->pc = 0x247414u;
}
