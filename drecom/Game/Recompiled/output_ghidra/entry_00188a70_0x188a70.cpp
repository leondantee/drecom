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

// Function: entry_00188a70
// Address: 0x188a70 - 0x188ac4
void entry_00188a70_0x188a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188a70_0x188a70");
#endif

    ctx->pc = 0x188a70u;

    // 0x188a70: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x188a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x188a74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188a78: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x188a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
    // 0x188a7c: 0x34422ee0  ori         $v0, $v0, 0x2EE0
    ctx->pc = 0x188a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12000);
    // 0x188a80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x188a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188a84: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x188a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188a88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x188a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x188a8c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x188a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x188a90: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x188a94: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x188a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188a98: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x188a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x188a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188aa0: 0x0  nop
    ctx->pc = 0x188aa0u;
    // NOP
    // 0x188aa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x188aa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188aa8: 0x0  nop
    ctx->pc = 0x188aa8u;
    // NOP
    // 0x188aac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x188AACu;
    {
        const bool branch_taken_0x188aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188aac) {
            ctx->pc = 0x188AC4u;
            return;
        }
    }
    ctx->pc = 0x188AB4u;
    // 0x188ab4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x188ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x188ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188abc: 0x0  nop
    ctx->pc = 0x188abcu;
    // NOP
    // 0x188ac0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x188ac4u;
}
