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

// Function: entry_001efd38
// Address: 0x1efd38 - 0x1efd90
void entry_001efd38_0x1efd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001efd38_0x1efd38");
#endif

    ctx->pc = 0x1efd38u;

    // 0x1efd38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd3c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1efd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd40: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1efd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd44: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1efd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1efd48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1efd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1efd4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efd4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd50: 0x0  nop
    ctx->pc = 0x1efd50u;
    // NOP
    // 0x1efd54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efd54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efd58: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1efd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1efd5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd64: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1efd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd6c: 0x0  nop
    ctx->pc = 0x1efd6cu;
    // NOP
    // 0x1efd70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1efd70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efd74: 0x0  nop
    ctx->pc = 0x1efd74u;
    // NOP
    // 0x1efd78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFD78u;
    {
        const bool branch_taken_0x1efd78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efd78) {
            ctx->pc = 0x1EFD90u;
            return;
        }
    }
    ctx->pc = 0x1EFD80u;
    // 0x1efd80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efd80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd8c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1efd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x1efd90u;
}
