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

// Function: entry_001c195c
// Address: 0x1c195c - 0x1c1998
void entry_001c195c_0x1c195c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c195c_0x1c195c");
#endif

    ctx->pc = 0x1c195cu;

    // 0x1c195c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c195cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1960: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c1960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1964: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c1964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1c1968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c196c: 0x0  nop
    ctx->pc = 0x1c196cu;
    // NOP
    // 0x1c1970: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c1970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1974: 0x0  nop
    ctx->pc = 0x1c1974u;
    // NOP
    // 0x1c1978: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1978u;
    {
        const bool branch_taken_0x1c1978 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1978) {
            ctx->pc = 0x1C1998u;
            return;
        }
    }
    ctx->pc = 0x1C1980u;
    // 0x1c1980: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1984: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c1984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c1988: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1c1988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x1c198c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c198cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c1990: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1990u;
    {
        const bool branch_taken_0x1c1990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1990) {
            ctx->pc = 0x1C199Cu;
            return;
        }
    }
    ctx->pc = 0x1C1998u;
}
