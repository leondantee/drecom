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

// Function: entry_001914d4
// Address: 0x1914d4 - 0x191518
void entry_001914d4_0x1914d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001914d4_0x1914d4");
#endif

    ctx->pc = 0x1914d4u;

    // 0x1914d4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1914d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1914d8: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x1914d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x1914dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1914dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1914e0: 0x0  nop
    ctx->pc = 0x1914e0u;
    // NOP
    // 0x1914e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1914e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1914e8: 0x0  nop
    ctx->pc = 0x1914e8u;
    // NOP
    // 0x1914ec: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1914ECu;
    {
        const bool branch_taken_0x1914ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1914ec) {
            ctx->pc = 0x191518u;
            return;
        }
    }
    ctx->pc = 0x1914F4u;
    // 0x1914f4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1914f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1914f8: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x1914f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x1914fc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1914fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x191500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191504: 0x0  nop
    ctx->pc = 0x191504u;
    // NOP
    // 0x191508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x191508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19150c: 0x0  nop
    ctx->pc = 0x19150cu;
    // NOP
    // 0x191510: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x191510u;
    {
        const bool branch_taken_0x191510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191510) {
            ctx->pc = 0x191524u;
            return;
        }
    }
    ctx->pc = 0x191518u;
}
