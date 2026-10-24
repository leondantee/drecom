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

// Function: entry_0029940c
// Address: 0x29940c - 0x299450
void entry_0029940c_0x29940c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029940c_0x29940c");
#endif

    ctx->pc = 0x29940cu;

    // 0x29940c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29940cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299410: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x299410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x299414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299418: 0x0  nop
    ctx->pc = 0x299418u;
    // NOP
    // 0x29941c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29941cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299420: 0x0  nop
    ctx->pc = 0x299420u;
    // NOP
    // 0x299424: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x299424u;
    {
        const bool branch_taken_0x299424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299424) {
            ctx->pc = 0x299450u;
            return;
        }
    }
    ctx->pc = 0x29942Cu;
    // 0x29942c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x29942cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299430: 0x3c02450f  lui         $v0, 0x450F
    ctx->pc = 0x299430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17679 << 16));
    // 0x299434: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x299434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x299438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x299438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29943c: 0x0  nop
    ctx->pc = 0x29943cu;
    // NOP
    // 0x299440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x299440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299444: 0x0  nop
    ctx->pc = 0x299444u;
    // NOP
    // 0x299448: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x299448u;
    {
        const bool branch_taken_0x299448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x299448) {
            ctx->pc = 0x299464u;
            return;
        }
    }
    ctx->pc = 0x299450u;
}
