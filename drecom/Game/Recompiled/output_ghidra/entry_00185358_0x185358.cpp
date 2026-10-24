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

// Function: entry_00185358
// Address: 0x185358 - 0x185398
void entry_00185358_0x185358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185358_0x185358");
#endif

    ctx->pc = 0x185358u;

    // 0x185358: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x185358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18535c: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x18535cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x185360: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185368: 0x0  nop
    ctx->pc = 0x185368u;
    // NOP
    // 0x18536c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18536cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185370: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x185370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x185374: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x185374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18537c: 0x0  nop
    ctx->pc = 0x18537cu;
    // NOP
    // 0x185380: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185384: 0x0  nop
    ctx->pc = 0x185384u;
    // NOP
    // 0x185388: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x185388u;
    {
        const bool branch_taken_0x185388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185388) {
            ctx->pc = 0x1853A8u;
            return;
        }
    }
    ctx->pc = 0x185390u;
    // 0x185390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x185390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x185394: 0x0  nop
    ctx->pc = 0x185394u;
    // NOP
    ctx->pc = 0x185398u;
}
