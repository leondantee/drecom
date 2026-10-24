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

// Function: entry_0023b7c8
// Address: 0x23b7c8 - 0x23b870
void entry_0023b7c8_0x23b7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b7c8_0x23b7c8");
#endif

    ctx->pc = 0x23b7c8u;

    // 0x23b7c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b7cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b7d0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b7d8: 0x0  nop
    ctx->pc = 0x23b7d8u;
    // NOP
    // 0x23b7dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23b7dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b7e0: 0x0  nop
    ctx->pc = 0x23b7e0u;
    // NOP
    // 0x23b7e4: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23B7E4u;
    {
        const bool branch_taken_0x23b7e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b7e4) {
            ctx->pc = 0x23B8C8u;
            return;
        }
    }
    ctx->pc = 0x23B7ECu;
    // 0x23b7ec: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b7f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b7f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23b7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b7f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b7fc: 0x0  nop
    ctx->pc = 0x23b7fcu;
    // NOP
    // 0x23b800: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23b800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b804: 0x0  nop
    ctx->pc = 0x23b804u;
    // NOP
    // 0x23b808: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23B808u;
    {
        const bool branch_taken_0x23b808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b808) {
            ctx->pc = 0x23B870u;
            return;
        }
    }
    ctx->pc = 0x23B810u;
    // 0x23b810: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b814: 0x24a31330  addiu       $v1, $a1, 0x1330
    ctx->pc = 0x23b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x23b818: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b81c: 0x3c043cc9  lui         $a0, 0x3CC9
    ctx->pc = 0x23b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15561 << 16));
    // 0x23b820: 0x34860fdb  ori         $a2, $a0, 0xFDB
    ctx->pc = 0x23b820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x23b824: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x23b824u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b828: 0x0  nop
    ctx->pc = 0x23b828u;
    // NOP
    // 0x23b82c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23b82cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23b830: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23b830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23b834: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b838: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23b838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b83c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b844: 0x0  nop
    ctx->pc = 0x23b844u;
    // NOP
    // 0x23b848: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23b848u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b84c: 0x0  nop
    ctx->pc = 0x23b84cu;
    // NOP
    // 0x23b850: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23B850u;
    {
        const bool branch_taken_0x23b850 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b850) {
            ctx->pc = 0x23B8C8u;
            return;
        }
    }
    ctx->pc = 0x23B858u;
    // 0x23b858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b85c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b860: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b864: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23b864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23b868: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23B868u;
    {
        const bool branch_taken_0x23b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b868) {
            ctx->pc = 0x23B8C8u;
            return;
        }
    }
    ctx->pc = 0x23B870u;
}
