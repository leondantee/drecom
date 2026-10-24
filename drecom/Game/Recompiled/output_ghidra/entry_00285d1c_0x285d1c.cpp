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

// Function: entry_00285d1c
// Address: 0x285d1c - 0x285d64
void entry_00285d1c_0x285d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285d1c_0x285d1c");
#endif

    ctx->pc = 0x285d1cu;

    // 0x285d1c: 0xc6216620  lwc1        $f1, 0x6620($s1)
    ctx->pc = 0x285d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x285d20: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x285d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x285d24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285d24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285d28: 0x0  nop
    ctx->pc = 0x285d28u;
    // NOP
    // 0x285d2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x285d2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285d30: 0x0  nop
    ctx->pc = 0x285d30u;
    // NOP
    // 0x285d34: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x285D34u;
    {
        const bool branch_taken_0x285d34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x285d34) {
            ctx->pc = 0x285D64u;
            return;
        }
    }
    ctx->pc = 0x285D3Cu;
    // 0x285d3c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x285d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x285d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285d44: 0x0  nop
    ctx->pc = 0x285d44u;
    // NOP
    // 0x285d48: 0xe6206620  swc1        $f0, 0x6620($s1)
    ctx->pc = 0x285d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 26144), bits); }
    // 0x285d4c: 0xa220660c  sb          $zero, 0x660C($s1)
    ctx->pc = 0x285d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26124), (uint8_t)GPR_U32(ctx, 0));
    // 0x285d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x285d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x285d54: 0xa2236624  sb          $v1, 0x6624($s1)
    ctx->pc = 0x285d54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26148), (uint8_t)GPR_U32(ctx, 3));
    // 0x285d58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x285d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x285d5c: 0x3963c  dsll32      $s2, $v1, 24
    ctx->pc = 0x285d5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 24));
    // 0x285d60: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x285d60u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    ctx->pc = 0x285d64u;
}
