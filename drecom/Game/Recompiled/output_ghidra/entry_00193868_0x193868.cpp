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

// Function: entry_00193868
// Address: 0x193868 - 0x1938b0
void entry_00193868_0x193868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193868_0x193868");
#endif

    ctx->pc = 0x193868u;

    // 0x193868: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19386c: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x193870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193874: 0x0  nop
    ctx->pc = 0x193874u;
    // NOP
    // 0x193878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19387c: 0x0  nop
    ctx->pc = 0x19387cu;
    // NOP
    // 0x193880: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x193880u;
    {
        const bool branch_taken_0x193880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193880) {
            ctx->pc = 0x1938B0u;
            return;
        }
    }
    ctx->pc = 0x193888u;
    // 0x193888: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19388c: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x19388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x193890: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193898: 0x0  nop
    ctx->pc = 0x193898u;
    // NOP
    // 0x19389c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19389cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1938a0: 0x0  nop
    ctx->pc = 0x1938a0u;
    // NOP
    // 0x1938a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1938A4u;
    {
        const bool branch_taken_0x1938a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1938a4) {
            ctx->pc = 0x1938B8u;
            return;
        }
    }
    ctx->pc = 0x1938ACu;
    // 0x1938ac: 0x0  nop
    ctx->pc = 0x1938acu;
    // NOP
    ctx->pc = 0x1938b0u;
}
