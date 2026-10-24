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

// Function: entry_001c44ac
// Address: 0x1c44ac - 0x1c44e8
void entry_001c44ac_0x1c44ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c44ac_0x1c44ac");
#endif

    ctx->pc = 0x1c44acu;

    // 0x1c44ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c44b0: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c44b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c44b4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1c44b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c44b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c44bc: 0x0  nop
    ctx->pc = 0x1c44bcu;
    // NOP
    // 0x1c44c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c44c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c44c4: 0x0  nop
    ctx->pc = 0x1c44c4u;
    // NOP
    // 0x1c44c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C44C8u;
    {
        const bool branch_taken_0x1c44c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c44c8) {
            ctx->pc = 0x1C44E8u;
            return;
        }
    }
    ctx->pc = 0x1C44D0u;
    // 0x1c44d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c44d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c44d8: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x1c44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x1c44dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c44e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C44E0u;
    {
        const bool branch_taken_0x1c44e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c44e0) {
            ctx->pc = 0x1C44ECu;
            return;
        }
    }
    ctx->pc = 0x1C44E8u;
}
