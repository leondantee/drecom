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

// Function: entry_002441b0
// Address: 0x2441b0 - 0x244258
void entry_002441b0_0x2441b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002441b0_0x2441b0");
#endif

    ctx->pc = 0x2441b0u;

    // 0x2441b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2441b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2441b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2441b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2441b8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2441b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2441bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2441bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2441c0: 0x0  nop
    ctx->pc = 0x2441c0u;
    // NOP
    // 0x2441c4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2441c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2441c8: 0x0  nop
    ctx->pc = 0x2441c8u;
    // NOP
    // 0x2441cc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x2441CCu;
    {
        const bool branch_taken_0x2441cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2441cc) {
            ctx->pc = 0x2442B0u;
            return;
        }
    }
    ctx->pc = 0x2441D4u;
    // 0x2441d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2441d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2441d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2441d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2441dc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2441dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2441e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2441e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2441e4: 0x0  nop
    ctx->pc = 0x2441e4u;
    // NOP
    // 0x2441e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2441e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2441ec: 0x0  nop
    ctx->pc = 0x2441ecu;
    // NOP
    // 0x2441f0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2441F0u;
    {
        const bool branch_taken_0x2441f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2441f0) {
            ctx->pc = 0x244258u;
            return;
        }
    }
    ctx->pc = 0x2441F8u;
    // 0x2441f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2441f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2441fc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2441fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244200: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x244200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244204: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x244204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x244208: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24420c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24420cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244210: 0x0  nop
    ctx->pc = 0x244210u;
    // NOP
    // 0x244214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x244214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x244218: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x244218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24421c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244220: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244224: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x244224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24422c: 0x0  nop
    ctx->pc = 0x24422cu;
    // NOP
    // 0x244230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244234: 0x0  nop
    ctx->pc = 0x244234u;
    // NOP
    // 0x244238: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x244238u;
    {
        const bool branch_taken_0x244238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244238) {
            ctx->pc = 0x2442B0u;
            return;
        }
    }
    ctx->pc = 0x244240u;
    // 0x244240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244248: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24424c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x24424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x244250: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x244250u;
    {
        const bool branch_taken_0x244250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244250) {
            ctx->pc = 0x2442B0u;
            return;
        }
    }
    ctx->pc = 0x244258u;
}
