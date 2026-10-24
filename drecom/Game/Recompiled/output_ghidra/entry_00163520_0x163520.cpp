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

// Function: entry_00163520
// Address: 0x163520 - 0x163550
void entry_00163520_0x163520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163520_0x163520");
#endif

    ctx->pc = 0x163520u;

    // 0x163520: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x163520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163524: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x163524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x163528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16352c: 0x0  nop
    ctx->pc = 0x16352cu;
    // NOP
    // 0x163530: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163534: 0x0  nop
    ctx->pc = 0x163534u;
    // NOP
    // 0x163538: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x163538u;
    {
        const bool branch_taken_0x163538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163538) {
            ctx->pc = 0x163550u;
            return;
        }
    }
    ctx->pc = 0x163540u;
    // 0x163540: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x163540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x163544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163548: 0x0  nop
    ctx->pc = 0x163548u;
    // NOP
    // 0x16354c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x16354cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->pc = 0x163550u;
}
