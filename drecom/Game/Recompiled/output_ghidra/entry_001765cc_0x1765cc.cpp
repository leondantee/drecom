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

// Function: entry_001765cc
// Address: 0x1765cc - 0x1765fc
void entry_001765cc_0x1765cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001765cc_0x1765cc");
#endif

    ctx->pc = 0x1765ccu;

    // 0x1765cc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1765ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1765d0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1765d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1765d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1765d8: 0x0  nop
    ctx->pc = 0x1765d8u;
    // NOP
    // 0x1765dc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1765DCu;
    {
        const bool branch_taken_0x1765dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1765dc) {
            ctx->pc = 0x176628u;
            return;
        }
    }
    ctx->pc = 0x1765E4u;
    // 0x1765e4: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1765e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1765e8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1765e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1765ec: 0x109c3c  dsll32      $s3, $s0, 16
    ctx->pc = 0x1765ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1765f0: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x1765f0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x1765f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1765F4u;
    {
        const bool branch_taken_0x1765f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1765f4) {
            ctx->pc = 0x176628u;
            return;
        }
    }
    ctx->pc = 0x1765FCu;
}
