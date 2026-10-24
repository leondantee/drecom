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

// Function: entry_00194d80
// Address: 0x194d80 - 0x194dc8
void entry_00194d80_0x194d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194d80_0x194d80");
#endif

    ctx->pc = 0x194d80u;

    // 0x194d80: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x194d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194d84: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x194d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x194d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194d8c: 0x0  nop
    ctx->pc = 0x194d8cu;
    // NOP
    // 0x194d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x194d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194d94: 0x0  nop
    ctx->pc = 0x194d94u;
    // NOP
    // 0x194d98: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x194D98u;
    {
        const bool branch_taken_0x194d98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194d98) {
            ctx->pc = 0x194DC8u;
            return;
        }
    }
    ctx->pc = 0x194DA0u;
    // 0x194da0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x194da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194da4: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x194da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x194da8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x194da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x194dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194db0: 0x0  nop
    ctx->pc = 0x194db0u;
    // NOP
    // 0x194db4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194db8: 0x0  nop
    ctx->pc = 0x194db8u;
    // NOP
    // 0x194dbc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x194DBCu;
    {
        const bool branch_taken_0x194dbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x194dbc) {
            ctx->pc = 0x194DD0u;
            return;
        }
    }
    ctx->pc = 0x194DC4u;
    // 0x194dc4: 0x0  nop
    ctx->pc = 0x194dc4u;
    // NOP
    ctx->pc = 0x194dc8u;
}
