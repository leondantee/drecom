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

// Function: entry_00134c6c
// Address: 0x134c6c - 0x134ce8
void entry_00134c6c_0x134c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c6c_0x134c6c");
#endif

    ctx->pc = 0x134c6cu;

    // 0x134c6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c70: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c74: 0xc4610440  lwc1        $f1, 0x440($v1)
    ctx->pc = 0x134c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134c78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c7c: 0x0  nop
    ctx->pc = 0x134c7cu;
    // NOP
    // 0x134c80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134c80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134c84: 0x0  nop
    ctx->pc = 0x134c84u;
    // NOP
    // 0x134c88: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134C88u;
    {
        const bool branch_taken_0x134c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134c88) {
            ctx->pc = 0x134D00u;
            return;
        }
    }
    ctx->pc = 0x134C90u;
    // 0x134c90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c94: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c98: 0xc4610440  lwc1        $f1, 0x440($v1)
    ctx->pc = 0x134c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c9c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134ca0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134ca8: 0x0  nop
    ctx->pc = 0x134ca8u;
    // NOP
    // 0x134cac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134cacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134cb0: 0x0  nop
    ctx->pc = 0x134cb0u;
    // NOP
    // 0x134cb4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134CB4u;
    {
        const bool branch_taken_0x134cb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134cb4) {
            ctx->pc = 0x134CE8u;
            return;
        }
    }
    ctx->pc = 0x134CBCu;
    // 0x134cbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134cc0: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134cc4: 0xc4810440  lwc1        $f1, 0x440($a0)
    ctx->pc = 0x134cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134cc8: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134ccc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134cd4: 0x0  nop
    ctx->pc = 0x134cd4u;
    // NOP
    // 0x134cd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134cdc: 0xe4800440  swc1        $f0, 0x440($a0)
    ctx->pc = 0x134cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1088), bits); }
    // 0x134ce0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x134CE0u;
    {
        const bool branch_taken_0x134ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ce0) {
            ctx->pc = 0x134D68u;
            return;
        }
    }
    ctx->pc = 0x134CE8u;
}
