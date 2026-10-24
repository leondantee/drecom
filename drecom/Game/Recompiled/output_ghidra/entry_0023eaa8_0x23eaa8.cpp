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

// Function: entry_0023eaa8
// Address: 0x23eaa8 - 0x23eb00
void entry_0023eaa8_0x23eaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023eaa8_0x23eaa8");
#endif

    ctx->pc = 0x23eaa8u;

    // 0x23eaa8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eaac: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23eab0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x23eab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23eab4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23eab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23eab8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23eab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23eabc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23eabcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eac0: 0x0  nop
    ctx->pc = 0x23eac0u;
    // NOP
    // 0x23eac4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23eac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23eac8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x23eac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x23eacc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ead0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ead4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23ead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ead8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23ead8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eadc: 0x0  nop
    ctx->pc = 0x23eadcu;
    // NOP
    // 0x23eae0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23eae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23eae4: 0x0  nop
    ctx->pc = 0x23eae4u;
    // NOP
    // 0x23eae8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23EAE8u;
    {
        const bool branch_taken_0x23eae8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23eae8) {
            ctx->pc = 0x23EB00u;
            return;
        }
    }
    ctx->pc = 0x23EAF0u;
    // 0x23eaf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23eaf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eaf4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23eaf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23eafc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23eafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23eb00u;
}
