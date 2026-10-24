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

// Function: default
// Address: 0x228630 - 0x2286d8
void ps2_default_0x228630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x228630");
#endif

    ctx->pc = 0x228630u;

    // 0x228630: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228634: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228638: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x228638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22863c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22863cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228640: 0x0  nop
    ctx->pc = 0x228640u;
    // NOP
    // 0x228644: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x228644u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228648: 0x0  nop
    ctx->pc = 0x228648u;
    // NOP
    // 0x22864c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22864Cu;
    {
        const bool branch_taken_0x22864c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22864c) {
            ctx->pc = 0x228730u;
            return;
        }
    }
    ctx->pc = 0x228654u;
    // 0x228654: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228658: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22865c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228660: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228664: 0x0  nop
    ctx->pc = 0x228664u;
    // NOP
    // 0x228668: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228668u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22866c: 0x0  nop
    ctx->pc = 0x22866cu;
    // NOP
    // 0x228670: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x228670u;
    {
        const bool branch_taken_0x228670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228670) {
            ctx->pc = 0x2286D8u;
            return;
        }
    }
    ctx->pc = 0x228678u;
    // 0x228678: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22867c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22867cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228680: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x228680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228684: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x228684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x228688: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x228688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22868c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22868cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228690: 0x0  nop
    ctx->pc = 0x228690u;
    // NOP
    // 0x228694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x228694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x228698: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x228698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22869c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22869cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2286a0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2286a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2286a4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2286a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2286a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2286a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2286ac: 0x0  nop
    ctx->pc = 0x2286acu;
    // NOP
    // 0x2286b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2286b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2286b4: 0x0  nop
    ctx->pc = 0x2286b4u;
    // NOP
    // 0x2286b8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2286B8u;
    {
        const bool branch_taken_0x2286b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2286b8) {
            ctx->pc = 0x228730u;
            return;
        }
    }
    ctx->pc = 0x2286C0u;
    // 0x2286c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2286c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2286c4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2286c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2286c8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2286c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2286cc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2286ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2286d0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2286D0u;
    {
        const bool branch_taken_0x2286d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2286d0) {
            ctx->pc = 0x228730u;
            return;
        }
    }
    ctx->pc = 0x2286D8u;
}
