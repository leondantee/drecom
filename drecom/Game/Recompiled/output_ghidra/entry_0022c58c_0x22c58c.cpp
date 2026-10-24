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

// Function: entry_0022c58c
// Address: 0x22c58c - 0x22c634
void entry_0022c58c_0x22c58c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022c58c_0x22c58c");
#endif

    ctx->pc = 0x22c58cu;

    // 0x22c58c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c590: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c594: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c598: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c598u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c59c: 0x0  nop
    ctx->pc = 0x22c59cu;
    // NOP
    // 0x22c5a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22c5a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c5a4: 0x0  nop
    ctx->pc = 0x22c5a4u;
    // NOP
    // 0x22c5a8: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22C5A8u;
    {
        const bool branch_taken_0x22c5a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c5a8) {
            ctx->pc = 0x22C68Cu;
            return;
        }
    }
    ctx->pc = 0x22C5B0u;
    // 0x22c5b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c5b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c5b8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c5bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c5c0: 0x0  nop
    ctx->pc = 0x22c5c0u;
    // NOP
    // 0x22c5c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c5c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c5c8: 0x0  nop
    ctx->pc = 0x22c5c8u;
    // NOP
    // 0x22c5cc: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22C5CCu;
    {
        const bool branch_taken_0x22c5cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c5cc) {
            ctx->pc = 0x22C634u;
            return;
        }
    }
    ctx->pc = 0x22C5D4u;
    // 0x22c5d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c5d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c5dc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c5e0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22c5e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22c5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22c5e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c5ec: 0x0  nop
    ctx->pc = 0x22c5ecu;
    // NOP
    // 0x22c5f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22c5f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22c5f4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22c5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22c5f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c5fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c600: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c608: 0x0  nop
    ctx->pc = 0x22c608u;
    // NOP
    // 0x22c60c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22c60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c610: 0x0  nop
    ctx->pc = 0x22c610u;
    // NOP
    // 0x22c614: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22C614u;
    {
        const bool branch_taken_0x22c614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c614) {
            ctx->pc = 0x22C68Cu;
            return;
        }
    }
    ctx->pc = 0x22C61Cu;
    // 0x22c61c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c620: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22c620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22c624: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c628: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22c628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22c62c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22C62Cu;
    {
        const bool branch_taken_0x22c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c62c) {
            ctx->pc = 0x22C68Cu;
            return;
        }
    }
    ctx->pc = 0x22C634u;
}
