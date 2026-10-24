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

// Function: entry_0023acb8
// Address: 0x23acb8 - 0x23ad60
void entry_0023acb8_0x23acb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023acb8_0x23acb8");
#endif

    ctx->pc = 0x23acb8u;

    // 0x23acb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23acbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23acc0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23acc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23acc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23acc8: 0x0  nop
    ctx->pc = 0x23acc8u;
    // NOP
    // 0x23accc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23acccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23acd0: 0x0  nop
    ctx->pc = 0x23acd0u;
    // NOP
    // 0x23acd4: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23ACD4u;
    {
        const bool branch_taken_0x23acd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23acd4) {
            ctx->pc = 0x23ADB8u;
            return;
        }
    }
    ctx->pc = 0x23ACDCu;
    // 0x23acdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ace0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ace0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ace4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ace8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ace8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23acec: 0x0  nop
    ctx->pc = 0x23acecu;
    // NOP
    // 0x23acf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23acf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23acf4: 0x0  nop
    ctx->pc = 0x23acf4u;
    // NOP
    // 0x23acf8: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23ACF8u;
    {
        const bool branch_taken_0x23acf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23acf8) {
            ctx->pc = 0x23AD60u;
            return;
        }
    }
    ctx->pc = 0x23AD00u;
    // 0x23ad00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad04: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad08: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ad0c: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23ad10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23ad14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23ad14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad18: 0x0  nop
    ctx->pc = 0x23ad18u;
    // NOP
    // 0x23ad1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23ad1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23ad20: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23ad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23ad24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad2c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ad30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ad30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad34: 0x0  nop
    ctx->pc = 0x23ad34u;
    // NOP
    // 0x23ad38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ad3c: 0x0  nop
    ctx->pc = 0x23ad3cu;
    // NOP
    // 0x23ad40: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23AD40u;
    {
        const bool branch_taken_0x23ad40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ad40) {
            ctx->pc = 0x23ADB8u;
            return;
        }
    }
    ctx->pc = 0x23AD48u;
    // 0x23ad48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ad48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ad4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ad50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ad54: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23ad54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23ad58: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23AD58u;
    {
        const bool branch_taken_0x23ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ad58) {
            ctx->pc = 0x23ADB8u;
            return;
        }
    }
    ctx->pc = 0x23AD60u;
}
