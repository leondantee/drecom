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

// Function: entry_001ebf84
// Address: 0x1ebf84 - 0x1ebfc8
void entry_001ebf84_0x1ebf84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebf84_0x1ebf84");
#endif

    ctx->pc = 0x1ebf84u;

    // 0x1ebf84: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebf88: 0x24481330  addiu       $t0, $v0, 0x1330
    ctx->pc = 0x1ebf88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ebf8c: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x1ebf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebf90: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1ebf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1ebf94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebf94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebf98: 0x0  nop
    ctx->pc = 0x1ebf98u;
    // NOP
    // 0x1ebf9c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1ebf9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ebfa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ebfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebfa4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1ebfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebfa8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebfa8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebfac: 0x0  nop
    ctx->pc = 0x1ebfacu;
    // NOP
    // 0x1ebfb0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBFB0u;
    {
        const bool branch_taken_0x1ebfb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebfb0) {
            ctx->pc = 0x1EBFC8u;
            return;
        }
    }
    ctx->pc = 0x1EBFB8u;
    // 0x1ebfb8: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x1ebfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x1ebfbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebfc0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ebfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebfc4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1ebfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x1ebfc8u;
}
