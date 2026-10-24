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

// Function: entry_002982b0
// Address: 0x2982b0 - 0x2982f4
void entry_002982b0_0x2982b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002982b0_0x2982b0");
#endif

    ctx->pc = 0x2982b0u;

    // 0x2982b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2982b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2982b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2982b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2982b8: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x2982bc: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2982bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2982c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2982c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2982c4: 0x0  nop
    ctx->pc = 0x2982c4u;
    // NOP
    // 0x2982c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2982c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2982cc: 0x0  nop
    ctx->pc = 0x2982ccu;
    // NOP
    // 0x2982d0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2982D0u;
    {
        const bool branch_taken_0x2982d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2982d0) {
            ctx->pc = 0x2982F4u;
            return;
        }
    }
    ctx->pc = 0x2982D8u;
    // 0x2982d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2982d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2982dc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x2982dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2982e0: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2982e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2982e4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2982e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2982e8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2982e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2982ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2982ECu;
    {
        const bool branch_taken_0x2982ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2982ec) {
            ctx->pc = 0x298304u;
            return;
        }
    }
    ctx->pc = 0x2982F4u;
}
