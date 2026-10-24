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

// Function: entry_00248e14
// Address: 0x248e14 - 0x248ea8
void entry_00248e14_0x248e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248e14_0x248e14");
#endif

    ctx->pc = 0x248e14u;

    // 0x248e14: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e18: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x248e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248e1c: 0x3c033bb7  lui         $v1, 0x3BB7
    ctx->pc = 0x248e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15287 << 16));
    // 0x248e20: 0x3463d3fb  ori         $v1, $v1, 0xD3FB
    ctx->pc = 0x248e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54267);
    // 0x248e24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e28: 0x0  nop
    ctx->pc = 0x248e28u;
    // NOP
    // 0x248e2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248e2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248e30: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x248e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x248e34: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e38: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x248e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248e3c: 0x3c033c37  lui         $v1, 0x3C37
    ctx->pc = 0x248e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15415 << 16));
    // 0x248e40: 0x3463d3fb  ori         $v1, $v1, 0xD3FB
    ctx->pc = 0x248e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54267);
    // 0x248e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e48: 0x0  nop
    ctx->pc = 0x248e48u;
    // NOP
    // 0x248e4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x248e50: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x248e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x248e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e58: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e5c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248e60: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x248e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x248e64: 0x3c03c1a4  lui         $v1, 0xC1A4
    ctx->pc = 0x248e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49572 << 16));
    // 0x248e68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248e74: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x248e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x248e78: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x248e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x248e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248e88: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x248e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x248e8c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x248e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x248e90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248e94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248e98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248e9c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x248e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x248ea0: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x248EA0u;
    {
        const bool branch_taken_0x248ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ea0) {
            ctx->pc = 0x24918Cu;
            return;
        }
    }
    ctx->pc = 0x248EA8u;
}
