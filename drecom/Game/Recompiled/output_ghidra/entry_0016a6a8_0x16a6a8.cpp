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

// Function: entry_0016a6a8
// Address: 0x16a6a8 - 0x16a6e0
void entry_0016a6a8_0x16a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a6a8_0x16a6a8");
#endif

    ctx->pc = 0x16a6a8u;

    // 0x16a6a8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x16a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a6ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6b0: 0x0  nop
    ctx->pc = 0x16a6b0u;
    // NOP
    // 0x16a6b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16a6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a6b8: 0x0  nop
    ctx->pc = 0x16a6b8u;
    // NOP
    // 0x16a6bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x16A6BCu;
    {
        const bool branch_taken_0x16a6bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a6bc) {
            ctx->pc = 0x16A6E0u;
            return;
        }
    }
    ctx->pc = 0x16A6C4u;
    // 0x16a6c4: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x16a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16a6c8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x16a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16a6cc: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16a6ccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a6d0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x16a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x16a6d4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16a6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x16a6d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x16A6D8u;
    {
        const bool branch_taken_0x16a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a6d8) {
            ctx->pc = 0x16A748u;
            return;
        }
    }
    ctx->pc = 0x16A6E0u;
}
