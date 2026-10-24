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

// Function: entry_002086f0
// Address: 0x2086f0 - 0x208744
void entry_002086f0_0x2086f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002086f0_0x2086f0");
#endif

    ctx->pc = 0x2086f0u;

    // 0x2086f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2086f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2086f4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2086f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2086f8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2086f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2086fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2086fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208700: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x208700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x208704: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208708: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x208708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20870c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208710: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x208710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x208714: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x208714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20871c: 0x0  nop
    ctx->pc = 0x20871cu;
    // NOP
    // 0x208720: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x208720u;
    {
        const bool branch_taken_0x208720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208720) {
            ctx->pc = 0x208744u;
            return;
        }
    }
    ctx->pc = 0x208728u;
    // 0x208728: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x208728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x20872c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x208730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208734: 0x0  nop
    ctx->pc = 0x208734u;
    // NOP
    // 0x208738: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x208738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x20873c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20873Cu;
    {
        const bool branch_taken_0x20873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20873c) {
            ctx->pc = 0x208758u;
            return;
        }
    }
    ctx->pc = 0x208744u;
}
