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

// Function: caseD_1
// Address: 0x208c88 - 0x208cfc
void caseD_1_0x208c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x208c88");
#endif

    ctx->pc = 0x208c88u;

    // 0x208c88: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208c8c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x208c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x208c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208c94: 0x0  nop
    ctx->pc = 0x208c94u;
    // NOP
    // 0x208c98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x208c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208c9c: 0x0  nop
    ctx->pc = 0x208c9cu;
    // NOP
    // 0x208ca0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x208CA0u;
    {
        const bool branch_taken_0x208ca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208ca0) {
            ctx->pc = 0x208CFCu;
            return;
        }
    }
    ctx->pc = 0x208CA8u;
    // 0x208ca8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208cac: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x208cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x208cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208cb4: 0x0  nop
    ctx->pc = 0x208cb4u;
    // NOP
    // 0x208cb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208cb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208cbc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x208cc0: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x208cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208cc4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x208cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x208cc8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x208cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x208ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208cd0: 0x0  nop
    ctx->pc = 0x208cd0u;
    // NOP
    // 0x208cd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208cd8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x208cdc: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x208cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208ce0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x208ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x208ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ce8: 0x0  nop
    ctx->pc = 0x208ce8u;
    // NOP
    // 0x208cec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208cf0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x208cf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x208CF4u;
    {
        const bool branch_taken_0x208cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208cf4) {
            ctx->pc = 0x208D30u;
            return;
        }
    }
    ctx->pc = 0x208CFCu;
}
