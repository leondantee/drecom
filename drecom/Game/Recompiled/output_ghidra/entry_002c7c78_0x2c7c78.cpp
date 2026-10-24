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

// Function: entry_002c7c78
// Address: 0x2c7c78 - 0x2c7ca4
void entry_002c7c78_0x2c7c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7c78_0x2c7c78");
#endif

    ctx->pc = 0x2c7c78u;

    // 0x2c7c78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c7c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2c7c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7c80: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x2c7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x2c7c84: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c7c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c7c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7c8c: 0x0  nop
    ctx->pc = 0x2c7c8cu;
    // NOP
    // 0x2c7c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c7c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7c98: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7C98u;
    {
        const bool branch_taken_0x2c7c98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7c98) {
            ctx->pc = 0x2C7CA4u;
            return;
        }
    }
    ctx->pc = 0x2C7CA0u;
    // 0x2c7ca0: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x2c7ca0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2c7ca4u;
}
