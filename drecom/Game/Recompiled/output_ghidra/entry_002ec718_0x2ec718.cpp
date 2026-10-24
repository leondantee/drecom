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

// Function: entry_002ec718
// Address: 0x2ec718 - 0x2ec740
void entry_002ec718_0x2ec718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec718_0x2ec718");
#endif

    ctx->pc = 0x2ec718u;

    // 0x2ec718: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ec718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ec71c: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ec71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec720: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2ec720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2ec724: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2ec724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2ec728: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ec728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec72c: 0x0  nop
    ctx->pc = 0x2ec72cu;
    // NOP
    // 0x2ec730: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ec730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ec734: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ec734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ec738: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2ec738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2ec73c: 0x0  nop
    ctx->pc = 0x2ec73cu;
    // NOP
    ctx->pc = 0x2ec740u;
}
