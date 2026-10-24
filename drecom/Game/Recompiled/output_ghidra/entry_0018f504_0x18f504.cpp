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

// Function: entry_0018f504
// Address: 0x18f504 - 0x18f548
void entry_0018f504_0x18f504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f504_0x18f504");
#endif

    ctx->pc = 0x18f504u;

    // 0x18f504: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x18f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f508: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x18f508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x18f50c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f510: 0x0  nop
    ctx->pc = 0x18f510u;
    // NOP
    // 0x18f514: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18f514u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f518: 0x0  nop
    ctx->pc = 0x18f518u;
    // NOP
    // 0x18f51c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18F51Cu;
    {
        const bool branch_taken_0x18f51c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f51c) {
            ctx->pc = 0x18F548u;
            return;
        }
    }
    ctx->pc = 0x18F524u;
    // 0x18f524: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x18f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f528: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x18f528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x18f52c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18f52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18f530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f534: 0x0  nop
    ctx->pc = 0x18f534u;
    // NOP
    // 0x18f538: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18f538u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f53c: 0x0  nop
    ctx->pc = 0x18f53cu;
    // NOP
    // 0x18f540: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18F540u;
    {
        const bool branch_taken_0x18f540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f540) {
            ctx->pc = 0x18F554u;
            return;
        }
    }
    ctx->pc = 0x18F548u;
}
