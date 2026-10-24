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

// Function: entry_001f520c
// Address: 0x1f520c - 0x1f522c
void entry_001f520c_0x1f520c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f520c_0x1f520c");
#endif

    ctx->pc = 0x1f520cu;

    // 0x1f520c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5210: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5214: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1f5214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1f5218: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1f5218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1f521c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f521cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f5220: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f5220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5224: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f5224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f5228: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1f5228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    ctx->pc = 0x1f522cu;
}
