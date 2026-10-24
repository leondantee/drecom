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

// Function: entry_001f1ddc
// Address: 0x1f1ddc - 0x1f1e50
void entry_001f1ddc_0x1f1ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1ddc_0x1f1ddc");
#endif

    ctx->pc = 0x1f1ddcu;

    // 0x1f1ddc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1de0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x1f1de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1de4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1de8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1dec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1df0: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f1df4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1df8: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x1f1df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1dfc: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1f1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1f1e00: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f1e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f1e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1e08: 0x0  nop
    ctx->pc = 0x1f1e08u;
    // NOP
    // 0x1f1e0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1e10: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x1f1e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x1f1e14: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e18: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x1f1e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1e1c: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1f1e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1f1e20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f1e20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1e24: 0x0  nop
    ctx->pc = 0x1f1e24u;
    // NOP
    // 0x1f1e28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f1e28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1e2c: 0x0  nop
    ctx->pc = 0x1f1e2cu;
    // NOP
    // 0x1f1e30: 0x450101bd  bc1t        . + 4 + (0x1BD << 2)
    ctx->pc = 0x1F1E30u;
    {
        const bool branch_taken_0x1f1e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1e30) {
            ctx->pc = 0x1F2528u;
            return;
        }
    }
    ctx->pc = 0x1F1E38u;
    // 0x1f1e38: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1f1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1f1e3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1e3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1e40: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f1e44: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f1e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f1e48: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x1F1E48u;
    {
        const bool branch_taken_0x1f1e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e48) {
            ctx->pc = 0x1F2528u;
            return;
        }
    }
    ctx->pc = 0x1F1E50u;
}
