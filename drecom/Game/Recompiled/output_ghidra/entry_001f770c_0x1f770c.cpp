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

// Function: entry_001f770c
// Address: 0x1f770c - 0x1f7798
void entry_001f770c_0x1f770c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f770c_0x1f770c");
#endif

    ctx->pc = 0x1f770cu;

    // 0x1f770c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7710: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x1f7710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7714: 0x3c033bdf  lui         $v1, 0x3BDF
    ctx->pc = 0x1f7714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15327 << 16));
    // 0x1f7718: 0x3463ca6a  ori         $v1, $v1, 0xCA6A
    ctx->pc = 0x1f7718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51818);
    // 0x1f771c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f771cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7720: 0x0  nop
    ctx->pc = 0x1f7720u;
    // NOP
    // 0x1f7724: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f7724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f7728: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x1f7728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x1f772c: 0x8fb000c8  lw          $s0, 0xC8($sp)
    ctx->pc = 0x1f772cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7730: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1f7730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7734: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1f7734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x1f7738: 0x3464fa35  ori         $a0, $v1, 0xFA35
    ctx->pc = 0x1f7738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x1f773c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f773cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7740: 0x0  nop
    ctx->pc = 0x1f7740u;
    // NOP
    // 0x1f7744: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f7744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f7748: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1f7748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1f774c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f774cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7750: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7754: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f7754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f7758: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1f7758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1f775c: 0x3c04c1a4  lui         $a0, 0xC1A4
    ctx->pc = 0x1f775cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49572 << 16));
    // 0x1f7760: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f7760u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7764: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7768: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f776c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f776cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f7770: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x1f7770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
    // 0x1f7774: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f7774u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7778: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f777c: 0x247e1330  addiu       $fp, $v1, 0x1330
    ctx->pc = 0x1f777cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7780: 0xe7c00020  swc1        $f0, 0x20($fp)
    ctx->pc = 0x1f7780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 32), bits); }
    // 0x1f7784: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1f7784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1f7788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f7788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f778c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7790: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f7790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f7794: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f7794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x1f7798u;
}
