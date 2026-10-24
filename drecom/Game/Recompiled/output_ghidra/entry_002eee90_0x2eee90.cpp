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

// Function: entry_002eee90
// Address: 0x2eee90 - 0x2eeec8
void entry_002eee90_0x2eee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eee90_0x2eee90");
#endif

    switch (ctx->pc) {
        case 0x2eee98u: goto label_2eee98;
        default: break;
    }

    ctx->pc = 0x2eee90u;

    // 0x2eee90: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEE90u;
    SET_GPR_U32(ctx, 31, 0x2EEE98u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEE90u, 0x2EEE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE98u;
label_2eee98:
    // 0x2eee98: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2eee98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2eee9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eee9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eeea0: 0x0  nop
    ctx->pc = 0x2eeea0u;
    // NOP
    // 0x2eeea4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eeea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eeea8: 0x3c02434d  lui         $v0, 0x434D
    ctx->pc = 0x2eeea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17229 << 16));
    // 0x2eeeac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eeeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eeeb0: 0x0  nop
    ctx->pc = 0x2eeeb0u;
    // NOP
    // 0x2eeeb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eeeb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eeeb8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2eeeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2eeebc: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2eeebcu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2eeec0: 0x24120013  addiu       $s2, $zero, 0x13
    ctx->pc = 0x2eeec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2eeec4: 0x0  nop
    ctx->pc = 0x2eeec4u;
    // NOP
    ctx->pc = 0x2eeec8u;
}
