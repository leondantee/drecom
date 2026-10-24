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

// Function: entry_002e66a4
// Address: 0x2e66a4 - 0x2e66d8
void entry_002e66a4_0x2e66a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e66a4_0x2e66a4");
#endif

    ctx->pc = 0x2e66a4u;

    // 0x2e66a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e66a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e66a8: 0xc4611290  lwc1        $f1, 0x1290($v1)
    ctx->pc = 0x2e66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e66ac: 0x3c03bbc9  lui         $v1, 0xBBC9
    ctx->pc = 0x2e66acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48073 << 16));
    // 0x2e66b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2e66b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2e66b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e66b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e66b8: 0x0  nop
    ctx->pc = 0x2e66b8u;
    // NOP
    // 0x2e66bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e66bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e66c0: 0x0  nop
    ctx->pc = 0x2e66c0u;
    // NOP
    // 0x2e66c4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E66C4u;
    {
        const bool branch_taken_0x2e66c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e66c4) {
            ctx->pc = 0x2E66D8u;
            return;
        }
    }
    ctx->pc = 0x2E66CCu;
    // 0x2e66cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e66ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e66d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e66d4: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2e66d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    ctx->pc = 0x2e66d8u;
}
