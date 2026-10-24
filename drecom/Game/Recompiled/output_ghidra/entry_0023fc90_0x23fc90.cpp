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

// Function: entry_0023fc90
// Address: 0x23fc90 - 0x23fcfc
void entry_0023fc90_0x23fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fc90_0x23fc90");
#endif

    ctx->pc = 0x23fc90u;

    // 0x23fc90: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fc94: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x23fc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23fc98: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x23fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x23fc9c: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x23fc9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x23fca0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fca4: 0x0  nop
    ctx->pc = 0x23fca4u;
    // NOP
    // 0x23fca8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23fca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23fcac: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x23fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x23fcb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23fcb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fcb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fcb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fcbc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x23fcbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x23fcc0: 0x3c03c1a4  lui         $v1, 0xC1A4
    ctx->pc = 0x23fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49572 << 16));
    // 0x23fcc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fcc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fcc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fccc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fcd0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23fcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23fcd4: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x23fcd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fcd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fcdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fce0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fce4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23fce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x23fce8: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x23fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x23fcec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23fcecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fcf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23fcf4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23fcf8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23fcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x23fcfcu;
}
