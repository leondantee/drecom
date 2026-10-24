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

// Function: entry_001eea88
// Address: 0x1eea88 - 0x1eeadc
void entry_001eea88_0x1eea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eea88_0x1eea88");
#endif

    ctx->pc = 0x1eea88u;

    // 0x1eea88: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1eea88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1eea8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1eea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1eea90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eea90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eea94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea98: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1eea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eea9c: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x1eea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x1eeaa0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1eeaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeaa4: 0xc4c11288  lwc1        $f1, 0x1288($a2)
    ctx->pc = 0x1eeaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeaa8: 0x3c0744fa  lui         $a3, 0x44FA
    ctx->pc = 0x1eeaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17658 << 16));
    // 0x1eeaac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1eeaacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeab0: 0x0  nop
    ctx->pc = 0x1eeab0u;
    // NOP
    // 0x1eeab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eeab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eeab8: 0x0  nop
    ctx->pc = 0x1eeab8u;
    // NOP
    // 0x1eeabc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEABCu;
    {
        const bool branch_taken_0x1eeabc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eeabc) {
            ctx->pc = 0x1EEADCu;
            return;
        }
    }
    ctx->pc = 0x1EEAC4u;
    // 0x1eeac4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1eeac8: 0x34480fdb  ori         $t0, $v0, 0xFDB
    ctx->pc = 0x1eeac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1eeacc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1eeaccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eead0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eead4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1eead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eead8: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1eead8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    ctx->pc = 0x1eeadcu;
}
