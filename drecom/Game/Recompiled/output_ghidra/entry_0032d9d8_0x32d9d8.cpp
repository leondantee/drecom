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

// Function: entry_0032d9d8
// Address: 0x32d9d8 - 0x32da30
void entry_0032d9d8_0x32d9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d9d8_0x32d9d8");
#endif

    switch (ctx->pc) {
        case 0x32da18u: goto label_32da18;
        default: break;
    }

    ctx->pc = 0x32d9d8u;

    // 0x32d9d8: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x32d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x32d9dc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x32d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x32d9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9e4: 0x0  nop
    ctx->pc = 0x32d9e4u;
    // NOP
    // 0x32d9e8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x32d9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x32d9ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x32d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x32d9f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d9f4: 0x0  nop
    ctx->pc = 0x32d9f4u;
    // NOP
    // 0x32d9f8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x32d9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x32d9fc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x32d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x32da00: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x32da00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x32da04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32da04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32da08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x32da08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32da0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x32da0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32da10: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x32DA10u;
    SET_GPR_U32(ctx, 31, 0x32DA18u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x32DA10u, 0x32DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DA18u;
label_32da18:
    // 0x32da18: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x32da18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32da1c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32da1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32da20: 0xc420c2a8  lwc1        $f0, -0x3D58($at)
    ctx->pc = 0x32da20u;
    { uint32_t bits = FAST_READ32(0x85C2A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32da24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x32da24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x32da28: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x32da28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x32da2c: 0x0  nop
    ctx->pc = 0x32da2cu;
    // NOP
    ctx->pc = 0x32da30u;
}
