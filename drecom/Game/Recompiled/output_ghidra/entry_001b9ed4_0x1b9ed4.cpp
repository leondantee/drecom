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

// Function: entry_001b9ed4
// Address: 0x1b9ed4 - 0x1b9f30
void entry_001b9ed4_0x1b9ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9ed4_0x1b9ed4");
#endif

    ctx->pc = 0x1b9ed4u;

    // 0x1b9ed4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ed8: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1b9ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9edc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1b9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1b9ee0: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x1b9ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1b9ee4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b9ee4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ee8: 0x0  nop
    ctx->pc = 0x1b9ee8u;
    // NOP
    // 0x1b9eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b9eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9ef0: 0xe4801b50  swc1        $f0, 0x1B50($a0)
    ctx->pc = 0x1b9ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6992), bits); }
    // 0x1b9ef4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ef8: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1b9ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9efc: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1b9f00: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b9f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1b9f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9f08: 0x0  nop
    ctx->pc = 0x1b9f08u;
    // NOP
    // 0x1b9f0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b9f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9f10: 0x0  nop
    ctx->pc = 0x1b9f10u;
    // NOP
    // 0x1b9f14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9F14u;
    {
        const bool branch_taken_0x1b9f14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9f14) {
            ctx->pc = 0x1B9F30u;
            return;
        }
    }
    ctx->pc = 0x1B9F1Cu;
    // 0x1b9f1c: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1b9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1b9f20: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1b9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1b9f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9f28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9f2c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b9f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x1b9f30u;
}
