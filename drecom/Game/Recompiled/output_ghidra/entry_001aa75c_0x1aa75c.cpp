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

// Function: entry_001aa75c
// Address: 0x1aa75c - 0x1aa798
void entry_001aa75c_0x1aa75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa75c_0x1aa75c");
#endif

    ctx->pc = 0x1aa75cu;

    // 0x1aa75c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa760: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x1aa760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa764: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa768: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aa768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa76c: 0x0  nop
    ctx->pc = 0x1aa76cu;
    // NOP
    // 0x1aa770: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA770u;
    {
        const bool branch_taken_0x1aa770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa770) {
            ctx->pc = 0x1AA798u;
            return;
        }
    }
    ctx->pc = 0x1AA778u;
    // 0x1aa778: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1aa778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa77c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa780: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x1aa780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x1aa784: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aa784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aa788: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa78c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa790: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1aa790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1aa794: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1aa794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    ctx->pc = 0x1aa798u;
}
