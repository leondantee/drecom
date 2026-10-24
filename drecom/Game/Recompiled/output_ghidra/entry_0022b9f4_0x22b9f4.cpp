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

// Function: entry_0022b9f4
// Address: 0x22b9f4 - 0x22ba9c
void entry_0022b9f4_0x22b9f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b9f4_0x22b9f4");
#endif

    ctx->pc = 0x22b9f4u;

    // 0x22b9f4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b9f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b9fc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba04: 0x0  nop
    ctx->pc = 0x22ba04u;
    // NOP
    // 0x22ba08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22ba08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ba0c: 0x0  nop
    ctx->pc = 0x22ba0cu;
    // NOP
    // 0x22ba10: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22BA10u;
    {
        const bool branch_taken_0x22ba10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ba10) {
            ctx->pc = 0x22BAF4u;
            return;
        }
    }
    ctx->pc = 0x22BA18u;
    // 0x22ba18: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x22ba18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ba1c: 0x24c31330  addiu       $v1, $a2, 0x1330
    ctx->pc = 0x22ba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x22ba20: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba28: 0x0  nop
    ctx->pc = 0x22ba28u;
    // NOP
    // 0x22ba2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ba2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ba30: 0x0  nop
    ctx->pc = 0x22ba30u;
    // NOP
    // 0x22ba34: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22BA34u;
    {
        const bool branch_taken_0x22ba34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ba34) {
            ctx->pc = 0x22BA9Cu;
            return;
        }
    }
    ctx->pc = 0x22BA3Cu;
    // 0x22ba3c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ba40: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x22ba40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22ba44: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x22ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba48: 0x3c083cc9  lui         $t0, 0x3CC9
    ctx->pc = 0x22ba48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15561 << 16));
    // 0x22ba4c: 0x35070fdb  ori         $a3, $t0, 0xFDB
    ctx->pc = 0x22ba4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4059);
    // 0x22ba50: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x22ba50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba54: 0x0  nop
    ctx->pc = 0x22ba54u;
    // NOP
    // 0x22ba58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22ba58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22ba5c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x22ba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x22ba60: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ba64: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ba68: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22ba68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ba6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba70: 0x0  nop
    ctx->pc = 0x22ba70u;
    // NOP
    // 0x22ba74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ba74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ba78: 0x0  nop
    ctx->pc = 0x22ba78u;
    // NOP
    // 0x22ba7c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22BA7Cu;
    {
        const bool branch_taken_0x22ba7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ba7c) {
            ctx->pc = 0x22BAF4u;
            return;
        }
    }
    ctx->pc = 0x22BA84u;
    // 0x22ba84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ba84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ba88: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22ba8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ba90: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22ba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22ba94: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22BA94u;
    {
        const bool branch_taken_0x22ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ba94) {
            ctx->pc = 0x22BAF4u;
            return;
        }
    }
    ctx->pc = 0x22BA9Cu;
}
