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

// Function: entry_002ecb70
// Address: 0x2ecb70 - 0x2ecba8
void entry_002ecb70_0x2ecb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ecb70_0x2ecb70");
#endif

    switch (ctx->pc) {
        case 0x2ecb78u: goto label_2ecb78;
        default: break;
    }

    ctx->pc = 0x2ecb70u;

    // 0x2ecb70: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECB70u;
    SET_GPR_U32(ctx, 31, 0x2ECB78u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECB70u, 0x2ECB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB78u;
label_2ecb78:
    // 0x2ecb78: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ecb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ecb7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ecb7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecb80: 0x0  nop
    ctx->pc = 0x2ecb80u;
    // NOP
    // 0x2ecb84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ecb84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecb88: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x2ecb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x2ecb8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecb8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecb90: 0x0  nop
    ctx->pc = 0x2ecb90u;
    // NOP
    // 0x2ecb94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecb98: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ecb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ecb9c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2ecb9cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ecba0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2ecba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ecba4: 0x0  nop
    ctx->pc = 0x2ecba4u;
    // NOP
    ctx->pc = 0x2ecba8u;
}
