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

// Function: entry_002ef218
// Address: 0x2ef218 - 0x2ef240
void entry_002ef218_0x2ef218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef218_0x2ef218");
#endif

    ctx->pc = 0x2ef218u;

    // 0x2ef218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ef218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ef21c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2ef21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef220: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x2ef220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x2ef224: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x2ef224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x2ef228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ef228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ef22c: 0x0  nop
    ctx->pc = 0x2ef22cu;
    // NOP
    // 0x2ef230: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ef230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ef234: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ef234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ef238: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ef238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ef23c: 0x0  nop
    ctx->pc = 0x2ef23cu;
    // NOP
    ctx->pc = 0x2ef240u;
}
