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

// Function: entry_00232ce4
// Address: 0x232ce4 - 0x232d30
void entry_00232ce4_0x232ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232ce4_0x232ce4");
#endif

    ctx->pc = 0x232ce4u;

    // 0x232ce4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x232ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232ce8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x232ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x232cec: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x232cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x232cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x232cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232cf4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x232cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232cf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232cfc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x232cfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232d00: 0x0  nop
    ctx->pc = 0x232d00u;
    // NOP
    // 0x232d04: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x232D04u;
    {
        const bool branch_taken_0x232d04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232d04) {
            ctx->pc = 0x232E98u;
            return;
        }
    }
    ctx->pc = 0x232D0Cu;
    // 0x232d0c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232d10: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x232d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232d14: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x232d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x232d18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232d1c: 0x0  nop
    ctx->pc = 0x232d1cu;
    // NOP
    // 0x232d20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x232d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x232d24: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x232d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x232d28: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x232D28u;
    {
        const bool branch_taken_0x232d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232d28) {
            ctx->pc = 0x232E98u;
            return;
        }
    }
    ctx->pc = 0x232D30u;
}
