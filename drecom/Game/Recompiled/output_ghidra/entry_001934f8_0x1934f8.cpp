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

// Function: entry_001934f8
// Address: 0x1934f8 - 0x19353c
void entry_001934f8_0x1934f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001934f8_0x1934f8");
#endif

    ctx->pc = 0x1934f8u;

    // 0x1934f8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1934f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1934fc: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x1934fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x193500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193504: 0x0  nop
    ctx->pc = 0x193504u;
    // NOP
    // 0x193508: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19350c: 0x0  nop
    ctx->pc = 0x19350cu;
    // NOP
    // 0x193510: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x193510u;
    {
        const bool branch_taken_0x193510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193510) {
            ctx->pc = 0x19353Cu;
            return;
        }
    }
    ctx->pc = 0x193518u;
    // 0x193518: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19351c: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x19351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x193520: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193528: 0x0  nop
    ctx->pc = 0x193528u;
    // NOP
    // 0x19352c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19352cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193530: 0x0  nop
    ctx->pc = 0x193530u;
    // NOP
    // 0x193534: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x193534u;
    {
        const bool branch_taken_0x193534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193534) {
            ctx->pc = 0x193544u;
            return;
        }
    }
    ctx->pc = 0x19353Cu;
}
