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

// Function: entry_00229e28
// Address: 0x229e28 - 0x229ed0
void entry_00229e28_0x229e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229e28_0x229e28");
#endif

    ctx->pc = 0x229e28u;

    // 0x229e28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229e30: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229e34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229e38: 0x0  nop
    ctx->pc = 0x229e38u;
    // NOP
    // 0x229e3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x229e3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229e40: 0x0  nop
    ctx->pc = 0x229e40u;
    // NOP
    // 0x229e44: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x229E44u;
    {
        const bool branch_taken_0x229e44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229e44) {
            ctx->pc = 0x229F28u;
            return;
        }
    }
    ctx->pc = 0x229E4Cu;
    // 0x229e4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229e54: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229e5c: 0x0  nop
    ctx->pc = 0x229e5cu;
    // NOP
    // 0x229e60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x229e60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229e64: 0x0  nop
    ctx->pc = 0x229e64u;
    // NOP
    // 0x229e68: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x229E68u;
    {
        const bool branch_taken_0x229e68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229e68) {
            ctx->pc = 0x229ED0u;
            return;
        }
    }
    ctx->pc = 0x229E70u;
    // 0x229e70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e74: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x229e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229e78: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x229e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229e7c: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x229e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x229e80: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229e88: 0x0  nop
    ctx->pc = 0x229e88u;
    // NOP
    // 0x229e8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x229e8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x229e90: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x229e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x229e94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229e98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229e9c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ea4: 0x0  nop
    ctx->pc = 0x229ea4u;
    // NOP
    // 0x229ea8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229eac: 0x0  nop
    ctx->pc = 0x229eacu;
    // NOP
    // 0x229eb0: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x229EB0u;
    {
        const bool branch_taken_0x229eb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229eb0) {
            ctx->pc = 0x229F28u;
            return;
        }
    }
    ctx->pc = 0x229EB8u;
    // 0x229eb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ebc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ec0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229ec4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x229ec8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x229EC8u;
    {
        const bool branch_taken_0x229ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ec8) {
            ctx->pc = 0x229F28u;
            return;
        }
    }
    ctx->pc = 0x229ED0u;
}
