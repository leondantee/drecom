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

// Function: entry_00193ec8
// Address: 0x193ec8 - 0x193f10
void entry_00193ec8_0x193ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193ec8_0x193ec8");
#endif

    ctx->pc = 0x193ec8u;

    // 0x193ec8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193ecc: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x193eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x193ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193ed4: 0x0  nop
    ctx->pc = 0x193ed4u;
    // NOP
    // 0x193ed8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193edc: 0x0  nop
    ctx->pc = 0x193edcu;
    // NOP
    // 0x193ee0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x193EE0u;
    {
        const bool branch_taken_0x193ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193ee0) {
            ctx->pc = 0x193F10u;
            return;
        }
    }
    ctx->pc = 0x193EE8u;
    // 0x193ee8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193eec: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x193eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x193ef0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193ef8: 0x0  nop
    ctx->pc = 0x193ef8u;
    // NOP
    // 0x193efc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f00: 0x0  nop
    ctx->pc = 0x193f00u;
    // NOP
    // 0x193f04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x193F04u;
    {
        const bool branch_taken_0x193f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193f04) {
            ctx->pc = 0x193F18u;
            return;
        }
    }
    ctx->pc = 0x193F0Cu;
    // 0x193f0c: 0x0  nop
    ctx->pc = 0x193f0cu;
    // NOP
    ctx->pc = 0x193f10u;
}
