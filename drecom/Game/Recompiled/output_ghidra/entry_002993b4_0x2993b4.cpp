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

// Function: entry_002993b4
// Address: 0x2993b4 - 0x2993f8
void entry_002993b4_0x2993b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002993b4_0x2993b4");
#endif

    ctx->pc = 0x2993b4u;

    // 0x2993b4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2993b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2993b8: 0x3c0244d4  lui         $v0, 0x44D4
    ctx->pc = 0x2993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17620 << 16));
    // 0x2993bc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2993bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2993c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2993c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2993c4: 0x0  nop
    ctx->pc = 0x2993c4u;
    // NOP
    // 0x2993c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2993c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2993cc: 0x0  nop
    ctx->pc = 0x2993ccu;
    // NOP
    // 0x2993d0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2993D0u;
    {
        const bool branch_taken_0x2993d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2993d0) {
            ctx->pc = 0x2993F8u;
            return;
        }
    }
    ctx->pc = 0x2993D8u;
    // 0x2993d8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2993d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2993dc: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x2993dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x2993e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2993e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2993e4: 0x0  nop
    ctx->pc = 0x2993e4u;
    // NOP
    // 0x2993e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2993e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2993ec: 0x0  nop
    ctx->pc = 0x2993ecu;
    // NOP
    // 0x2993f0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2993F0u;
    {
        const bool branch_taken_0x2993f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2993f0) {
            ctx->pc = 0x29940Cu;
            return;
        }
    }
    ctx->pc = 0x2993F8u;
}
