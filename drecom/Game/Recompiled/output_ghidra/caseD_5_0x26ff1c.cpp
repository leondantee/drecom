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

// Function: caseD_5
// Address: 0x26ff1c - 0x26ff90
void caseD_5_0x26ff1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x26ff1c");
#endif

    ctx->pc = 0x26ff1cu;

    // 0x26ff1c: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x26ff1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ff20: 0xc5011b54  lwc1        $f1, 0x1B54($t0)
    ctx->pc = 0x26ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ff24: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x26ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x26ff28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ff28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ff2c: 0x0  nop
    ctx->pc = 0x26ff2cu;
    // NOP
    // 0x26ff30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ff30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ff34: 0xe5001b54  swc1        $f0, 0x1B54($t0)
    ctx->pc = 0x26ff34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 6996), bits); }
    // 0x26ff38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ff3c: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x26ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x26ff40: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26FF40u;
    {
        const bool branch_taken_0x26ff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ff40) {
            ctx->pc = 0x26FFCCu;
            return;
        }
    }
    ctx->pc = 0x26FF48u;
    // 0x26ff48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ff4c: 0xc4611b58  lwc1        $f1, 0x1B58($v1)
    ctx->pc = 0x26ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ff50: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x26ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x26ff54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ff54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ff58: 0x0  nop
    ctx->pc = 0x26ff58u;
    // NOP
    // 0x26ff5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ff5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ff60: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x26ff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
    // 0x26ff64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ff68: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x26ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ff6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ff6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ff70: 0x0  nop
    ctx->pc = 0x26ff70u;
    // NOP
    // 0x26ff74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ff74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ff78: 0x0  nop
    ctx->pc = 0x26ff78u;
    // NOP
    // 0x26ff7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26FF7Cu;
    {
        const bool branch_taken_0x26ff7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ff7c) {
            ctx->pc = 0x26FF90u;
            return;
        }
    }
    ctx->pc = 0x26FF84u;
    // 0x26ff84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ff84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ff88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ff8c: 0xe4601b58  swc1        $f0, 0x1B58($v1)
    ctx->pc = 0x26ff8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 7000), bits); }
    ctx->pc = 0x26ff90u;
}
