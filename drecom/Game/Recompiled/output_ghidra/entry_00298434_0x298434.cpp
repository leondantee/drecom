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

// Function: entry_00298434
// Address: 0x298434 - 0x2984a4
void entry_00298434_0x298434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298434_0x298434");
#endif

    ctx->pc = 0x298434u;

    // 0x298434: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298438: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x298438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x29843c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x29843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298440: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x298440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x298444: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x298444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x298448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x298448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29844c: 0x0  nop
    ctx->pc = 0x29844cu;
    // NOP
    // 0x298450: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x298450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x298454: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x298454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x298458: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29845c: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x29845cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298460: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x298460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x298464: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x298464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x298468: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29846c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29846cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298470: 0x0  nop
    ctx->pc = 0x298470u;
    // NOP
    // 0x298474: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298474u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298478: 0x0  nop
    ctx->pc = 0x298478u;
    // NOP
    // 0x29847c: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x29847Cu;
    {
        const bool branch_taken_0x29847c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29847c) {
            ctx->pc = 0x29850Cu;
            return;
        }
    }
    ctx->pc = 0x298484u;
    // 0x298484: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x298484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x298488: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x298488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x29848c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29848cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298490: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298494: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298498: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x29849c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x29849Cu;
    {
        const bool branch_taken_0x29849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29849c) {
            ctx->pc = 0x29850Cu;
            return;
        }
    }
    ctx->pc = 0x2984A4u;
}
