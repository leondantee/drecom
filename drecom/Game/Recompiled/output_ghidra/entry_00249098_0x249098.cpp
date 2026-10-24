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

// Function: entry_00249098
// Address: 0x249098 - 0x249124
void entry_00249098_0x249098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249098_0x249098");
#endif

    ctx->pc = 0x249098u;

    // 0x249098: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x249098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24909c: 0xc4e100d0  lwc1        $f1, 0xD0($a3)
    ctx->pc = 0x24909cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2490a0: 0x3c033bdf  lui         $v1, 0x3BDF
    ctx->pc = 0x2490a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15327 << 16));
    // 0x2490a4: 0x3468ca6a  ori         $t0, $v1, 0xCA6A
    ctx->pc = 0x2490a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51818);
    // 0x2490a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2490a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490ac: 0x0  nop
    ctx->pc = 0x2490acu;
    // NOP
    // 0x2490b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2490b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2490b4: 0xe4e000d0  swc1        $f0, 0xD0($a3)
    ctx->pc = 0x2490b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 208), bits); }
    // 0x2490b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2490b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2490bc: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x2490bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2490c0: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2490c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2490c4: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2490c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2490c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2490c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490cc: 0x0  nop
    ctx->pc = 0x2490ccu;
    // NOP
    // 0x2490d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2490d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2490d4: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x2490d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x2490d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2490d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2490dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2490e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2490e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2490e4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x2490e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2490e8: 0x3c03c1a4  lui         $v1, 0xC1A4
    ctx->pc = 0x2490e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49572 << 16));
    // 0x2490ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2490ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2490f0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2490f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2490f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2490f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2490f8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2490f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2490fc: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x2490fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x249100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x249100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249104: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249108: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x249108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24910c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x24910cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x249110: 0x3c044020  lui         $a0, 0x4020
    ctx->pc = 0x249110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16416 << 16));
    // 0x249114: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249118: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24911c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x249120: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x249120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x249124u;
}
