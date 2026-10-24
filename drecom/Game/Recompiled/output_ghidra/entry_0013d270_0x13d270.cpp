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

// Function: entry_0013d270
// Address: 0x13d270 - 0x13d28c
void entry_0013d270_0x13d270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d270_0x13d270");
#endif

    ctx->pc = 0x13d270u;

    // 0x13d270: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x13d270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x13d274: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x13d274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x13d278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d27c: 0x0  nop
    ctx->pc = 0x13d27cu;
    // NOP
    // 0x13d280: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13d280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13d284: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d288: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x13d288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    ctx->pc = 0x13d28cu;
}
