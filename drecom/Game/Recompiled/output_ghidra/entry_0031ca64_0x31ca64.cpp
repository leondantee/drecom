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

// Function: entry_0031ca64
// Address: 0x31ca64 - 0x31cad0
void entry_0031ca64_0x31ca64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ca64_0x31ca64");
#endif

    ctx->pc = 0x31ca64u;

    // 0x31ca64: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ca68: 0x8c8312b0  lw          $v1, 0x12B0($a0)
    ctx->pc = 0x31ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4784)));
    // 0x31ca6c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x31ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31ca70: 0xac8212b0  sw          $v0, 0x12B0($a0)
    ctx->pc = 0x31ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4784), GPR_U32(ctx, 2));
    // 0x31ca74: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ca78: 0xc48112dc  lwc1        $f1, 0x12DC($a0)
    ctx->pc = 0x31ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ca7c: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31ca80: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x31ca80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31ca84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31ca84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ca88: 0x0  nop
    ctx->pc = 0x31ca88u;
    // NOP
    // 0x31ca8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ca8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ca90: 0xe48012dc  swc1        $f0, 0x12DC($a0)
    ctx->pc = 0x31ca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4828), bits); }
    // 0x31ca94: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ca98: 0xc46112dc  lwc1        $f1, 0x12DC($v1)
    ctx->pc = 0x31ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ca9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ca9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31caa0: 0x0  nop
    ctx->pc = 0x31caa0u;
    // NOP
    // 0x31caa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31caa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31caa8: 0x0  nop
    ctx->pc = 0x31caa8u;
    // NOP
    // 0x31caac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31CAACu;
    {
        const bool branch_taken_0x31caac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31caac) {
            ctx->pc = 0x31CAD0u;
            return;
        }
    }
    ctx->pc = 0x31CAB4u;
    // 0x31cab4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cab8: 0xac4012ac  sw          $zero, 0x12AC($v0)
    ctx->pc = 0x31cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 0));
    // 0x31cabc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cac0: 0xac4012b0  sw          $zero, 0x12B0($v0)
    ctx->pc = 0x31cac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 0));
    // 0x31cac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31cac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cac8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cacc: 0xe46012dc  swc1        $f0, 0x12DC($v1)
    ctx->pc = 0x31caccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4828), bits); }
    ctx->pc = 0x31cad0u;
}
