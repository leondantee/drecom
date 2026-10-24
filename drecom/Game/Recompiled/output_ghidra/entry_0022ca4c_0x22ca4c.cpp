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

// Function: entry_0022ca4c
// Address: 0x22ca4c - 0x22caa4
void entry_0022ca4c_0x22ca4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ca4c_0x22ca4c");
#endif

    ctx->pc = 0x22ca4cu;

    // 0x22ca4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca50: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ca54: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ca58: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22ca5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22ca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22ca60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ca60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca64: 0x0  nop
    ctx->pc = 0x22ca64u;
    // NOP
    // 0x22ca68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ca68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ca6c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22ca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22ca70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca74: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ca78: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ca7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ca7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca80: 0x0  nop
    ctx->pc = 0x22ca80u;
    // NOP
    // 0x22ca84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ca84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ca88: 0x0  nop
    ctx->pc = 0x22ca88u;
    // NOP
    // 0x22ca8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22CA8Cu;
    {
        const bool branch_taken_0x22ca8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ca8c) {
            ctx->pc = 0x22CAA4u;
            return;
        }
    }
    ctx->pc = 0x22CA94u;
    // 0x22ca94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ca94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca9c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22caa0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x22caa4u;
}
