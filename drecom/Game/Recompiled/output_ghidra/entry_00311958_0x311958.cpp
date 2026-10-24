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

// Function: entry_00311958
// Address: 0x311958 - 0x311994
void entry_00311958_0x311958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311958_0x311958");
#endif

    ctx->pc = 0x311958u;

    // 0x311958: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x311958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31195c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31195Cu;
    {
        const bool branch_taken_0x31195c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31195c) {
            ctx->pc = 0x311908u;
            return;
        }
    }
    ctx->pc = 0x311964u;
    // 0x311964: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x311964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311968: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x311968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x31196c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31196cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x311970: 0x0  nop
    ctx->pc = 0x311970u;
    // NOP
    // 0x311974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x311974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x311978: 0x0  nop
    ctx->pc = 0x311978u;
    // NOP
    // 0x31197c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x31197Cu;
    {
        const bool branch_taken_0x31197c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31197c) {
            ctx->pc = 0x311994u;
            return;
        }
    }
    ctx->pc = 0x311984u;
    // 0x311984: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x311984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x311988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x311988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31198c: 0x0  nop
    ctx->pc = 0x31198cu;
    // NOP
    // 0x311990: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x311990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->pc = 0x311994u;
}
