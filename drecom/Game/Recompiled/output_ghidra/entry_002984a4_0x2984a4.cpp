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

// Function: entry_002984a4
// Address: 0x2984a4 - 0x29850c
void entry_002984a4_0x2984a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002984a4_0x2984a4");
#endif

    ctx->pc = 0x2984a4u;

    // 0x2984a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2984a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2984a8: 0x24641334  addiu       $a0, $v1, 0x1334
    ctx->pc = 0x2984a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2984ac: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2984acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2984b0: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2984b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2984b4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2984b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2984b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2984b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984bc: 0x0  nop
    ctx->pc = 0x2984bcu;
    // NOP
    // 0x2984c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2984c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2984c4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2984c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2984c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2984c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2984cc: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x2984ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x2984d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2984d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2984d4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2984d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x2984d8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2984d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2984dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2984dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2984e0: 0x0  nop
    ctx->pc = 0x2984e0u;
    // NOP
    // 0x2984e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2984e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2984e8: 0x0  nop
    ctx->pc = 0x2984e8u;
    // NOP
    // 0x2984ec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2984ECu;
    {
        const bool branch_taken_0x2984ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2984ec) {
            ctx->pc = 0x29850Cu;
            return;
        }
    }
    ctx->pc = 0x2984F4u;
    // 0x2984f4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x2984f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x2984f8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2984f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2984fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2984fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298500: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x298500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298504: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x298504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x298508: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x298508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x29850cu;
}
