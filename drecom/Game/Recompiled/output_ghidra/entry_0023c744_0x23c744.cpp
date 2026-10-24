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

// Function: entry_0023c744
// Address: 0x23c744 - 0x23c7ec
void entry_0023c744_0x23c744(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c744_0x23c744");
#endif

    ctx->pc = 0x23c744u;

    // 0x23c744: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c748: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c74c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23c74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c754: 0x0  nop
    ctx->pc = 0x23c754u;
    // NOP
    // 0x23c758: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23c758u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c75c: 0x0  nop
    ctx->pc = 0x23c75cu;
    // NOP
    // 0x23c760: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23C760u;
    {
        const bool branch_taken_0x23c760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c760) {
            ctx->pc = 0x23C844u;
            return;
        }
    }
    ctx->pc = 0x23C768u;
    // 0x23c768: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c76c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c770: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c774: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c778: 0x0  nop
    ctx->pc = 0x23c778u;
    // NOP
    // 0x23c77c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23c77cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c780: 0x0  nop
    ctx->pc = 0x23c780u;
    // NOP
    // 0x23c784: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23C784u;
    {
        const bool branch_taken_0x23c784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c784) {
            ctx->pc = 0x23C7ECu;
            return;
        }
    }
    ctx->pc = 0x23C78Cu;
    // 0x23c78c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c790: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23c790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c794: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23c794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c798: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23c798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23c79c: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x23c79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23c7a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23c7a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c7a4: 0x0  nop
    ctx->pc = 0x23c7a4u;
    // NOP
    // 0x23c7a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23c7a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23c7ac: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x23c7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23c7b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c7b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c7b8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23c7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c7bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c7bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c7c0: 0x0  nop
    ctx->pc = 0x23c7c0u;
    // NOP
    // 0x23c7c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23c7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c7c8: 0x0  nop
    ctx->pc = 0x23c7c8u;
    // NOP
    // 0x23c7cc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23C7CCu;
    {
        const bool branch_taken_0x23c7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23c7cc) {
            ctx->pc = 0x23C844u;
            return;
        }
    }
    ctx->pc = 0x23C7D4u;
    // 0x23c7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c7d8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c7dc: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x23c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x23c7e0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23c7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23c7e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23C7E4u;
    {
        const bool branch_taken_0x23c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c7e4) {
            ctx->pc = 0x23C844u;
            return;
        }
    }
    ctx->pc = 0x23C7ECu;
}
