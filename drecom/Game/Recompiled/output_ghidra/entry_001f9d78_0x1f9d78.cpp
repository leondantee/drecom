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

// Function: entry_001f9d78
// Address: 0x1f9d78 - 0x1f9db4
void entry_001f9d78_0x1f9d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9d78_0x1f9d78");
#endif

    ctx->pc = 0x1f9d78u;

    // 0x1f9d78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9d80: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1f9d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9d84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d88: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9d8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f9d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f9d90: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f9d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f9d94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9d98: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9d9c: 0x3c033f6b  lui         $v1, 0x3F6B
    ctx->pc = 0x1f9d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16235 << 16));
    // 0x1f9da0: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x1f9da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x1f9da4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9da8: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9dac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9db0: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x1f9db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    ctx->pc = 0x1f9db4u;
}
