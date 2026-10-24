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

// Function: entry_00249038
// Address: 0x249038 - 0x249098
void entry_00249038_0x249038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249038_0x249038");
#endif

    ctx->pc = 0x249038u;

    // 0x249038: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x249038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x24903c: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x24903cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x249040: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x249040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249044: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x249044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
    // 0x249048: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x249048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x24904c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24904cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249050: 0x0  nop
    ctx->pc = 0x249050u;
    // NOP
    // 0x249054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x249054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249058: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x249058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x24905c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x24905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249060: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x249060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x249064: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x249064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249068: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x249068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x24906c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24906cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249070: 0x0  nop
    ctx->pc = 0x249070u;
    // NOP
    // 0x249074: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x249074u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x249078: 0x0  nop
    ctx->pc = 0x249078u;
    // NOP
    // 0x24907c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24907Cu;
    {
        const bool branch_taken_0x24907c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24907c) {
            ctx->pc = 0x249098u;
            return;
        }
    }
    ctx->pc = 0x249084u;
    // 0x249084: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x249084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x249088: 0x8464127e  lh          $a0, 0x127E($v1)
    ctx->pc = 0x249088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x24908c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x24908cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x249090: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x249090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x249094: 0xa466127e  sh          $a2, 0x127E($v1)
    ctx->pc = 0x249094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x249098u;
}
