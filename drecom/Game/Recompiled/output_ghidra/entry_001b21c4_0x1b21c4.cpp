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

// Function: entry_001b21c4
// Address: 0x1b21c4 - 0x1b2250
void entry_001b21c4_0x1b21c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b21c4_0x1b21c4");
#endif

    switch (ctx->pc) {
        case 0x1b2230u: goto label_1b2230;
        case 0x1b2240u: goto label_1b2240;
        default: break;
    }

    ctx->pc = 0x1b21c4u;

    // 0x1b21c4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x1b21c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1b21c8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1b21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b21cc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b21ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b21d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b21d4: 0x0  nop
    ctx->pc = 0x1b21d4u;
    // NOP
    // 0x1b21d8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1B21D8u;
    {
        const bool branch_taken_0x1b21d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b21d8) {
            ctx->pc = 0x1B2250u;
            return;
        }
    }
    ctx->pc = 0x1B21E0u;
    // 0x1b21e0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1b21e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21e4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1b21e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1b21e8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21ec: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1b21ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1b21f0: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1b21f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b21f4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b21f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b21f8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1b21fc: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x1b21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x1b2200: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b2204: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1b2204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1b2208: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1b2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1b220c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b220cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b2210: 0x8e750008  lw          $s5, 0x8($s3)
    ctx->pc = 0x1b2210u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1b2214: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b2214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b2218: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1b2218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1b221c: 0xae350008  sw          $s5, 0x8($s1)
    ctx->pc = 0x1b221cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
    // 0x1b2220: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1b2220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b2224: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x1b2224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b2228: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2228u;
    SET_GPR_U32(ctx, 31, 0x1B2230u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2230u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2230u) { return; }
    ctx->pc = 0x1B2230u;
label_1b2230:
    // 0x1b2230: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1b2230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1b2234: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b2238: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2238u;
    SET_GPR_U32(ctx, 31, 0x1B2240u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2240u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2240u) { return; }
    ctx->pc = 0x1B2240u;
label_1b2240:
    // 0x1b2240: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1b2244: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1b2248: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B2248u;
    SET_GPR_U32(ctx, 31, 0x1B2250u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B2250u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B2250u) { return; }
    ctx->pc = 0x1B2250u;
}
