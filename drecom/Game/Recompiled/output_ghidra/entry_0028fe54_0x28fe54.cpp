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

// Function: entry_0028fe54
// Address: 0x28fe54 - 0x28fe90
void entry_0028fe54_0x28fe54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028fe54_0x28fe54");
#endif

    switch (ctx->pc) {
        case 0x28fe8cu: goto label_28fe8c;
        default: break;
    }

    ctx->pc = 0x28fe54u;

    // 0x28fe54: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x28fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x28fe58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28fe58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fe5c: 0xc6005e00  lwc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28fe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fe60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28fe60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28fe64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28fe68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fe6c: 0x0  nop
    ctx->pc = 0x28fe6cu;
    // NOP
    // 0x28fe70: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x28fe70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28fe74: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x28fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x28fe78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28fe78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fe7c: 0x0  nop
    ctx->pc = 0x28fe7cu;
    // NOP
    // 0x28fe80: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x28fe80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28fe84: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x28FE84u;
    SET_GPR_U32(ctx, 31, 0x28FE8Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x28FE84u, 0x28FE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE8Cu;
label_28fe8c:
    // 0x28fe8c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28fe8cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28fe90u;
}
