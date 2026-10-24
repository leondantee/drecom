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

// Function: entry_0022b3c4
// Address: 0x22b3c4 - 0x22b404
void entry_0022b3c4_0x22b3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b3c4_0x22b3c4");
#endif

    ctx->pc = 0x22b3c4u;

    // 0x22b3c4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b3c8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b3cc: 0x3c044496  lui         $a0, 0x4496
    ctx->pc = 0x22b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17558 << 16));
    // 0x22b3d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b3d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b3d4: 0x0  nop
    ctx->pc = 0x22b3d4u;
    // NOP
    // 0x22b3d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b3dc: 0x0  nop
    ctx->pc = 0x22b3dcu;
    // NOP
    // 0x22b3e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x22B3E0u;
    {
        const bool branch_taken_0x22b3e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b3e0) {
            ctx->pc = 0x22B404u;
            return;
        }
    }
    ctx->pc = 0x22B3E8u;
    // 0x22b3e8: 0x3c05c120  lui         $a1, 0xC120
    ctx->pc = 0x22b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49440 << 16));
    // 0x22b3ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b3ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b3f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b3f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b3f8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x22b3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x22b3fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22B3FCu;
    {
        const bool branch_taken_0x22b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b3fc) {
            ctx->pc = 0x22B418u;
            return;
        }
    }
    ctx->pc = 0x22B404u;
}
