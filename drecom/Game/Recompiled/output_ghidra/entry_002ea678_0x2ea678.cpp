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

// Function: entry_002ea678
// Address: 0x2ea678 - 0x2ea6a0
void entry_002ea678_0x2ea678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea678_0x2ea678");
#endif

    ctx->pc = 0x2ea678u;

    // 0x2ea678: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ea678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ea67c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2ea67cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ea680: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ea680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea684: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x2ea684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x2ea688: 0x3464d845  ori         $a0, $v1, 0xD845
    ctx->pc = 0x2ea688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x2ea68c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ea68cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea690: 0x0  nop
    ctx->pc = 0x2ea690u;
    // NOP
    // 0x2ea694: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ea694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ea698: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ea698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ea69c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2ea69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->pc = 0x2ea6a0u;
}
