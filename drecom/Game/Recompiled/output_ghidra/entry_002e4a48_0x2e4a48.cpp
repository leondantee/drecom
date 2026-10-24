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

// Function: entry_002e4a48
// Address: 0x2e4a48 - 0x2e4aa8
void entry_002e4a48_0x2e4a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4a48_0x2e4a48");
#endif

    switch (ctx->pc) {
        case 0x2e4a5cu: goto label_2e4a5c;
        default: break;
    }

    ctx->pc = 0x2e4a48u;

    // 0x2e4a48: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x2e4a48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2e4a4c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x2e4a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x2e4a50: 0xc62c008c  lwc1        $f12, 0x8C($s1)
    ctx->pc = 0x2e4a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e4a54: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2E4A54u;
    SET_GPR_U32(ctx, 31, 0x2E4A5Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2E4A5Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2E4A5Cu) { return; }
    ctx->pc = 0x2E4A5Cu;
label_2e4a5c:
    // 0x2e4a5c: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2e4a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a60: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2e4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2e4a64: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e4a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a6c: 0x0  nop
    ctx->pc = 0x2e4a6cu;
    // NOP
    // 0x2e4a70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e4a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e4a74: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2e4a78: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x2e4a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4a84: 0x0  nop
    ctx->pc = 0x2e4a84u;
    // NOP
    // 0x2e4a88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e4a88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e4a8c: 0x0  nop
    ctx->pc = 0x2e4a8cu;
    // NOP
    // 0x2e4a90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4A90u;
    {
        const bool branch_taken_0x2e4a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4a90) {
            ctx->pc = 0x2E4AA8u;
            return;
        }
    }
    ctx->pc = 0x2E4A98u;
    // 0x2e4a98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4aa0: 0x0  nop
    ctx->pc = 0x2e4aa0u;
    // NOP
    // 0x2e4aa4: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2e4aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    ctx->pc = 0x2e4aa8u;
}
