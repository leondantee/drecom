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

// Function: entry_00248d20
// Address: 0x248d20 - 0x248db4
void entry_00248d20_0x248d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248d20_0x248d20");
#endif

    ctx->pc = 0x248d20u;

    // 0x248d20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d24: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x248d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248d28: 0x3c033c37  lui         $v1, 0x3C37
    ctx->pc = 0x248d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15415 << 16));
    // 0x248d2c: 0x3463d3fb  ori         $v1, $v1, 0xD3FB
    ctx->pc = 0x248d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54267);
    // 0x248d30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d34: 0x0  nop
    ctx->pc = 0x248d34u;
    // NOP
    // 0x248d38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248d38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248d3c: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x248d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x248d40: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x248d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d44: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x248d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248d48: 0x3c033bdf  lui         $v1, 0x3BDF
    ctx->pc = 0x248d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15327 << 16));
    // 0x248d4c: 0x3463ca6a  ori         $v1, $v1, 0xCA6A
    ctx->pc = 0x248d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51818);
    // 0x248d50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d54: 0x0  nop
    ctx->pc = 0x248d54u;
    // NOP
    // 0x248d58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x248d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x248d5c: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x248d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    // 0x248d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d68: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248d6c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x248d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x248d70: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x248d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x248d74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248d80: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x248d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x248d84: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x248d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x248d88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248d8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248d90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248d94: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x248d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x248d98: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x248d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x248d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248da0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x248da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x248da4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x248da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x248da8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x248da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x248dac: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x248DACu;
    {
        const bool branch_taken_0x248dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248dac) {
            ctx->pc = 0x24918Cu;
            return;
        }
    }
    ctx->pc = 0x248DB4u;
}
