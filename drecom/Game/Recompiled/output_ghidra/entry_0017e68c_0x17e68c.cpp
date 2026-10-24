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

// Function: entry_0017e68c
// Address: 0x17e68c - 0x17e6fc
void entry_0017e68c_0x17e68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e68c_0x17e68c");
#endif

    ctx->pc = 0x17e68cu;

    // 0x17e68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e690: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x17e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x17e694: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17E694u;
    {
        const bool branch_taken_0x17e694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e694) {
            ctx->pc = 0x17E6FCu;
            return;
        }
    }
    ctx->pc = 0x17E69Cu;
    // 0x17e69c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e6a0: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x17e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e6a4: 0xc46101b0  lwc1        $f1, 0x1B0($v1)
    ctx->pc = 0x17e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e6a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17e6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e6b0: 0x0  nop
    ctx->pc = 0x17e6b0u;
    // NOP
    // 0x17e6b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17e6b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17e6b8: 0xe46001b0  swc1        $f0, 0x1B0($v1)
    ctx->pc = 0x17e6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 432), bits); }
    // 0x17e6bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e6c0: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e6c4: 0xc44101b0  lwc1        $f1, 0x1B0($v0)
    ctx->pc = 0x17e6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e6c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e6cc: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e6d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17e6d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e6d4: 0x0  nop
    ctx->pc = 0x17e6d4u;
    // NOP
    // 0x17e6d8: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x17E6D8u;
    {
        const bool branch_taken_0x17e6d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e6d8) {
            ctx->pc = 0x17E754u;
            return;
        }
    }
    ctx->pc = 0x17E6E0u;
    // 0x17e6e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e6e4: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x17e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e6e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e6ec: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x17e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e6f0: 0xe44001b0  swc1        $f0, 0x1B0($v0)
    ctx->pc = 0x17e6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 432), bits); }
    // 0x17e6f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17E6F4u;
    {
        const bool branch_taken_0x17e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6f4) {
            ctx->pc = 0x17E754u;
            return;
        }
    }
    ctx->pc = 0x17E6FCu;
}
