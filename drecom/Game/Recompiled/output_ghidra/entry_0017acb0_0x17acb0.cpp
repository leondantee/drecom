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

// Function: entry_0017acb0
// Address: 0x17acb0 - 0x17ad20
void entry_0017acb0_0x17acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017acb0_0x17acb0");
#endif

    switch (ctx->pc) {
        case 0x17acc8u: goto label_17acc8;
        case 0x17ace0u: goto label_17ace0;
        default: break;
    }

    ctx->pc = 0x17acb0u;

    // 0x17acb0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17acb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x17acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17acb8: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17acbc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x17acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17acc0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17ACC0u;
    SET_GPR_U32(ctx, 31, 0x17ACC8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17ACC8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ACC8u) { return; }
    ctx->pc = 0x17ACC8u;
label_17acc8:
    // 0x17acc8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x17acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17accc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17acccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17acd0: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x17acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17acd4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x17acd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x17acd8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x17ACD8u;
    SET_GPR_U32(ctx, 31, 0x17ACE0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x17ACE0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17ACE0u) { return; }
    ctx->pc = 0x17ACE0u;
label_17ace0:
    // 0x17ace0: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x17ace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ace4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x17ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x17ace8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ace8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17acec: 0x0  nop
    ctx->pc = 0x17acecu;
    // NOP
    // 0x17acf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17acf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17acf4: 0x0  nop
    ctx->pc = 0x17acf4u;
    // NOP
    // 0x17acf8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x17ACF8u;
    {
        const bool branch_taken_0x17acf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17acf8) {
            ctx->pc = 0x17AD20u;
            return;
        }
    }
    ctx->pc = 0x17AD00u;
    // 0x17ad00: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x17ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17ad04: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x17ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x17ad08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ad08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ad0c: 0x0  nop
    ctx->pc = 0x17ad0cu;
    // NOP
    // 0x17ad10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17ad10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ad14: 0x0  nop
    ctx->pc = 0x17ad14u;
    // NOP
    // 0x17ad18: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17AD18u;
    {
        const bool branch_taken_0x17ad18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ad18) {
            ctx->pc = 0x17AD2Cu;
            return;
        }
    }
    ctx->pc = 0x17AD20u;
}
