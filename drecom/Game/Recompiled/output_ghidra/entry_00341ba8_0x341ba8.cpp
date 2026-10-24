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

// Function: entry_00341ba8
// Address: 0x341ba8 - 0x341bd0
void entry_00341ba8_0x341ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341ba8_0x341ba8");
#endif

    ctx->pc = 0x341ba8u;

    // 0x341ba8: 0xc7a1011c  lwc1        $f1, 0x11C($sp)
    ctx->pc = 0x341ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341bac: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x341bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x341bb0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x341bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x341bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341bb8: 0x0  nop
    ctx->pc = 0x341bb8u;
    // NOP
    // 0x341bbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x341bbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x341bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341bc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x341BC4u;
    {
        const bool branch_taken_0x341bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x341bc4) {
            ctx->pc = 0x341BD0u;
            return;
        }
    }
    ctx->pc = 0x341BCCu;
    // 0x341bcc: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x341bccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x341bd0u;
}
