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

// Function: entry_0019494c
// Address: 0x19494c - 0x194990
void entry_0019494c_0x19494c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019494c_0x19494c");
#endif

    ctx->pc = 0x19494cu;

    // 0x19494c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x19494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194950: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x194954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194958: 0x0  nop
    ctx->pc = 0x194958u;
    // NOP
    // 0x19495c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19495cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194960: 0x0  nop
    ctx->pc = 0x194960u;
    // NOP
    // 0x194964: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x194964u;
    {
        const bool branch_taken_0x194964 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194964) {
            ctx->pc = 0x194990u;
            return;
        }
    }
    ctx->pc = 0x19496Cu;
    // 0x19496c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x19496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194970: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x194970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x194974: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x194974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x194978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19497c: 0x0  nop
    ctx->pc = 0x19497cu;
    // NOP
    // 0x194980: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194984: 0x0  nop
    ctx->pc = 0x194984u;
    // NOP
    // 0x194988: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x194988u;
    {
        const bool branch_taken_0x194988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194988) {
            ctx->pc = 0x194998u;
            return;
        }
    }
    ctx->pc = 0x194990u;
}
