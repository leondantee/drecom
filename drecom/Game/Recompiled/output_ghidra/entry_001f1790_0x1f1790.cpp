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

// Function: entry_001f1790
// Address: 0x1f1790 - 0x1f1838
void entry_001f1790_0x1f1790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1790_0x1f1790");
#endif

    ctx->pc = 0x1f1790u;

    // 0x1f1790: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1794: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1f1794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1798: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1f1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f179c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f179cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f17a0: 0x0  nop
    ctx->pc = 0x1f17a0u;
    // NOP
    // 0x1f17a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f17a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f17a8: 0x0  nop
    ctx->pc = 0x1f17a8u;
    // NOP
    // 0x1f17ac: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1F17ACu;
    {
        const bool branch_taken_0x1f17ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f17ac) {
            ctx->pc = 0x1F1890u;
            return;
        }
    }
    ctx->pc = 0x1F17B4u;
    // 0x1f17b4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f17b8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f17bc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1f17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f17c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f17c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f17c4: 0x0  nop
    ctx->pc = 0x1f17c4u;
    // NOP
    // 0x1f17c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f17c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f17cc: 0x0  nop
    ctx->pc = 0x1f17ccu;
    // NOP
    // 0x1f17d0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F17D0u;
    {
        const bool branch_taken_0x1f17d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f17d0) {
            ctx->pc = 0x1F1838u;
            return;
        }
    }
    ctx->pc = 0x1F17D8u;
    // 0x1f17d8: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f17dc: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1f17dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1f17e0: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x1f17e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f17e4: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1f17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1f17e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f17e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f17ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f17ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f17f0: 0x0  nop
    ctx->pc = 0x1f17f0u;
    // NOP
    // 0x1f17f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f17f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f17f8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1f17f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1f17fc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f17fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1800: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1804: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f1804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f180c: 0x0  nop
    ctx->pc = 0x1f180cu;
    // NOP
    // 0x1f1810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f1810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1814: 0x0  nop
    ctx->pc = 0x1f1814u;
    // NOP
    // 0x1f1818: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1F1818u;
    {
        const bool branch_taken_0x1f1818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1818) {
            ctx->pc = 0x1F1890u;
            return;
        }
    }
    ctx->pc = 0x1F1820u;
    // 0x1f1820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1824: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1828: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f1828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f182c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1f182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1f1830: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1830u;
    {
        const bool branch_taken_0x1f1830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1830) {
            ctx->pc = 0x1F1890u;
            return;
        }
    }
    ctx->pc = 0x1F1838u;
}
