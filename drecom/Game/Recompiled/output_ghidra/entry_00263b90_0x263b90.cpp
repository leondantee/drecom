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

// Function: entry_00263b90
// Address: 0x263b90 - 0x263bd8
void entry_00263b90_0x263b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263b90_0x263b90");
#endif

    ctx->pc = 0x263b90u;

    // 0x263b90: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b94: 0xc46101bc  lwc1        $f1, 0x1BC($v1)
    ctx->pc = 0x263b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b98: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x263b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x263b9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263ba4: 0x0  nop
    ctx->pc = 0x263ba4u;
    // NOP
    // 0x263ba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x263ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263bac: 0x0  nop
    ctx->pc = 0x263bacu;
    // NOP
    // 0x263bb0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x263BB0u;
    {
        const bool branch_taken_0x263bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263bb0) {
            ctx->pc = 0x263BD8u;
            return;
        }
    }
    ctx->pc = 0x263BB8u;
    // 0x263bb8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x263bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263bbc: 0xc48101bc  lwc1        $f1, 0x1BC($a0)
    ctx->pc = 0x263bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263bc0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x263bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x263bc4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263bc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263bc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263bcc: 0x0  nop
    ctx->pc = 0x263bccu;
    // NOP
    // 0x263bd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x263bd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x263bd4: 0xe48001bc  swc1        $f0, 0x1BC($a0)
    ctx->pc = 0x263bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
    ctx->pc = 0x263bd8u;
}
