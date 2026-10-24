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

// Function: entry_002ea7a0
// Address: 0x2ea7a0 - 0x2ea7d8
void entry_002ea7a0_0x2ea7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea7a0_0x2ea7a0");
#endif

    switch (ctx->pc) {
        case 0x2ea7a8u: goto label_2ea7a8;
        default: break;
    }

    ctx->pc = 0x2ea7a0u;

    // 0x2ea7a0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA7A0u;
    SET_GPR_U32(ctx, 31, 0x2EA7A8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA7A0u, 0x2EA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA7A8u;
label_2ea7a8:
    // 0x2ea7a8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ea7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea7ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea7b0: 0x0  nop
    ctx->pc = 0x2ea7b0u;
    // NOP
    // 0x2ea7b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea7b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea7b8: 0x3c02434d  lui         $v0, 0x434D
    ctx->pc = 0x2ea7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17229 << 16));
    // 0x2ea7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea7c0: 0x0  nop
    ctx->pc = 0x2ea7c0u;
    // NOP
    // 0x2ea7c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea7c8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ea7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ea7cc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ea7ccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea7d0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2ea7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ea7d4: 0x0  nop
    ctx->pc = 0x2ea7d4u;
    // NOP
    ctx->pc = 0x2ea7d8u;
}
