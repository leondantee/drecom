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

// Function: entry_001f0d78
// Address: 0x1f0d78 - 0x1f0dc4
void entry_001f0d78_0x1f0d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0d78_0x1f0d78");
#endif

    ctx->pc = 0x1f0d78u;

    // 0x1f0d78: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0d7c: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1f0d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0d80: 0x3c0544bb  lui         $a1, 0x44BB
    ctx->pc = 0x1f0d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17595 << 16));
    // 0x1f0d84: 0x34a38000  ori         $v1, $a1, 0x8000
    ctx->pc = 0x1f0d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1f0d88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f0d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0d8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f0d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f0d90: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f0d90u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0d94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0d98: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1f0d98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0d9c: 0x0  nop
    ctx->pc = 0x1f0d9cu;
    // NOP
    // 0x1f0da0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0DA0u;
    {
        const bool branch_taken_0x1f0da0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0da0) {
            ctx->pc = 0x1F0DC4u;
            return;
        }
    }
    ctx->pc = 0x1F0DA8u;
    // 0x1f0da8: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0dac: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f0dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0db0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f0db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f0db4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0db8: 0x0  nop
    ctx->pc = 0x1f0db8u;
    // NOP
    // 0x1f0dbc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f0dbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f0dc0: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f0dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x1f0dc4u;
}
