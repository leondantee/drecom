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
// Address: 0x24684c - 0x2468f4
void ps2_default_0x24684c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x24684c");
#endif

    ctx->pc = 0x24684cu;

    // 0x24684c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x24684cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246850: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x246850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x246854: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x246854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24685c: 0x0  nop
    ctx->pc = 0x24685cu;
    // NOP
    // 0x246860: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x246860u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246864: 0x0  nop
    ctx->pc = 0x246864u;
    // NOP
    // 0x246868: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x246868u;
    {
        const bool branch_taken_0x246868 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246868) {
            ctx->pc = 0x24694Cu;
            return;
        }
    }
    ctx->pc = 0x246870u;
    // 0x246870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246874: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246878: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x246878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24687c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24687cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246880: 0x0  nop
    ctx->pc = 0x246880u;
    // NOP
    // 0x246884: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x246884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246888: 0x0  nop
    ctx->pc = 0x246888u;
    // NOP
    // 0x24688c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x24688Cu;
    {
        const bool branch_taken_0x24688c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24688c) {
            ctx->pc = 0x2468F4u;
            return;
        }
    }
    ctx->pc = 0x246894u;
    // 0x246894: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x246894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246898: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x246898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x24689c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x24689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2468a0: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2468a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x2468a4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2468a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2468a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2468a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2468ac: 0x0  nop
    ctx->pc = 0x2468acu;
    // NOP
    // 0x2468b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2468b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2468b4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2468b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2468b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2468b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2468bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2468bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2468c0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2468c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2468c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2468c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2468c8: 0x0  nop
    ctx->pc = 0x2468c8u;
    // NOP
    // 0x2468cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2468ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2468d0: 0x0  nop
    ctx->pc = 0x2468d0u;
    // NOP
    // 0x2468d4: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2468D4u;
    {
        const bool branch_taken_0x2468d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2468d4) {
            ctx->pc = 0x24694Cu;
            return;
        }
    }
    ctx->pc = 0x2468DCu;
    // 0x2468dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2468dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2468e0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2468e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2468e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2468e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2468e8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2468e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2468ec: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2468ECu;
    {
        const bool branch_taken_0x2468ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2468ec) {
            ctx->pc = 0x24694Cu;
            return;
        }
    }
    ctx->pc = 0x2468F4u;
}
