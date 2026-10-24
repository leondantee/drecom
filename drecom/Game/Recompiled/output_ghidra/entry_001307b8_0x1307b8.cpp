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

// Function: entry_001307b8
// Address: 0x1307b8 - 0x1307f4
void entry_001307b8_0x1307b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001307b8_0x1307b8");
#endif

    ctx->pc = 0x1307b8u;

    // 0x1307b8: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1307b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1307bc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1307bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1307c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1307c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1307c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1307c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1307c8: 0x0  nop
    ctx->pc = 0x1307c8u;
    // NOP
    // 0x1307cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1307ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1307d0: 0x0  nop
    ctx->pc = 0x1307d0u;
    // NOP
    // 0x1307d4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1307D4u;
    {
        const bool branch_taken_0x1307d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1307d4) {
            ctx->pc = 0x1307F4u;
            return;
        }
    }
    ctx->pc = 0x1307DCu;
    // 0x1307dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1307dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1307e0: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x1307e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1307e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1307e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1307e8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1307e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1307ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1307ECu;
    {
        const bool branch_taken_0x1307ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1307ec) {
            ctx->pc = 0x130838u;
            return;
        }
    }
    ctx->pc = 0x1307F4u;
}
