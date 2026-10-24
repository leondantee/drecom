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

// Function: entry_00226ab0
// Address: 0x226ab0 - 0x226b58
void entry_00226ab0_0x226ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226ab0_0x226ab0");
#endif

    ctx->pc = 0x226ab0u;

    // 0x226ab0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226ab4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226ab8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226abc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ac0: 0x0  nop
    ctx->pc = 0x226ac0u;
    // NOP
    // 0x226ac4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x226ac4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226ac8: 0x0  nop
    ctx->pc = 0x226ac8u;
    // NOP
    // 0x226acc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x226ACCu;
    {
        const bool branch_taken_0x226acc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226acc) {
            ctx->pc = 0x226BB0u;
            return;
        }
    }
    ctx->pc = 0x226AD4u;
    // 0x226ad4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226ad8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226adc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226ae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ae4: 0x0  nop
    ctx->pc = 0x226ae4u;
    // NOP
    // 0x226ae8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226ae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226aec: 0x0  nop
    ctx->pc = 0x226aecu;
    // NOP
    // 0x226af0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x226AF0u;
    {
        const bool branch_taken_0x226af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226af0) {
            ctx->pc = 0x226B58u;
            return;
        }
    }
    ctx->pc = 0x226AF8u;
    // 0x226af8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226afc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x226afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b00: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226b04: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x226b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x226b08: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b10: 0x0  nop
    ctx->pc = 0x226b10u;
    // NOP
    // 0x226b14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226b14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226b18: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x226b1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b24: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226b28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b2c: 0x0  nop
    ctx->pc = 0x226b2cu;
    // NOP
    // 0x226b30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226b34: 0x0  nop
    ctx->pc = 0x226b34u;
    // NOP
    // 0x226b38: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x226B38u;
    {
        const bool branch_taken_0x226b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226b38) {
            ctx->pc = 0x226BB0u;
            return;
        }
    }
    ctx->pc = 0x226B40u;
    // 0x226b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226b44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226b48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226b4c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x226b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x226b50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x226B50u;
    {
        const bool branch_taken_0x226b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226b50) {
            ctx->pc = 0x226BB0u;
            return;
        }
    }
    ctx->pc = 0x226B58u;
}
