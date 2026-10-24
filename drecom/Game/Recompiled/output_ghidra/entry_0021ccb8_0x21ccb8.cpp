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

// Function: entry_0021ccb8
// Address: 0x21ccb8 - 0x21cce0
void entry_0021ccb8_0x21ccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ccb8_0x21ccb8");
#endif

    ctx->pc = 0x21ccb8u;

    // 0x21ccb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x21ccb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x21ccbc: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x21ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ccc0: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x21ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x21ccc4: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x21ccc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x21ccc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21ccc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cccc: 0x0  nop
    ctx->pc = 0x21ccccu;
    // NOP
    // 0x21ccd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21ccd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21ccd4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x21ccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x21ccd8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x21ccd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x21ccdc: 0x0  nop
    ctx->pc = 0x21ccdcu;
    // NOP
    ctx->pc = 0x21cce0u;
}
