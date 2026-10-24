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

// Function: entry_00245aa0
// Address: 0x245aa0 - 0x245b48
void entry_00245aa0_0x245aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245aa0_0x245aa0");
#endif

    ctx->pc = 0x245aa0u;

    // 0x245aa0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245aa4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245aa8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245ab0: 0x0  nop
    ctx->pc = 0x245ab0u;
    // NOP
    // 0x245ab4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x245ab4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245ab8: 0x0  nop
    ctx->pc = 0x245ab8u;
    // NOP
    // 0x245abc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x245ABCu;
    {
        const bool branch_taken_0x245abc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245abc) {
            ctx->pc = 0x245BA0u;
            return;
        }
    }
    ctx->pc = 0x245AC4u;
    // 0x245ac4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245ac8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245acc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245ad4: 0x0  nop
    ctx->pc = 0x245ad4u;
    // NOP
    // 0x245ad8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x245ad8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245adc: 0x0  nop
    ctx->pc = 0x245adcu;
    // NOP
    // 0x245ae0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x245AE0u;
    {
        const bool branch_taken_0x245ae0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245ae0) {
            ctx->pc = 0x245B48u;
            return;
        }
    }
    ctx->pc = 0x245AE8u;
    // 0x245ae8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245aec: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245af0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x245af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245af4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x245af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x245af8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x245af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x245afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b00: 0x0  nop
    ctx->pc = 0x245b00u;
    // NOP
    // 0x245b04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x245b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x245b08: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x245b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x245b0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b14: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x245b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245b18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b1c: 0x0  nop
    ctx->pc = 0x245b1cu;
    // NOP
    // 0x245b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x245b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245b24: 0x0  nop
    ctx->pc = 0x245b24u;
    // NOP
    // 0x245b28: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x245B28u;
    {
        const bool branch_taken_0x245b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245b28) {
            ctx->pc = 0x245BA0u;
            return;
        }
    }
    ctx->pc = 0x245B30u;
    // 0x245b30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245b34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x245b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x245b38: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x245b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245b3c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x245b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x245b40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x245B40u;
    {
        const bool branch_taken_0x245b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b40) {
            ctx->pc = 0x245BA0u;
            return;
        }
    }
    ctx->pc = 0x245B48u;
}
