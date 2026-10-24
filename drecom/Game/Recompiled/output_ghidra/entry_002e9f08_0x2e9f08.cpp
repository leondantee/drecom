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

// Function: entry_002e9f08
// Address: 0x2e9f08 - 0x2e9f30
void entry_002e9f08_0x2e9f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e9f08_0x2e9f08");
#endif

    ctx->pc = 0x2e9f08u;

    // 0x2e9f08: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9f0c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2e9f0cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2e9f10: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2e9f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9f14: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x2e9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x2e9f18: 0x3464098f  ori         $a0, $v1, 0x98F
    ctx->pc = 0x2e9f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2447);
    // 0x2e9f1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e9f1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9f20: 0x0  nop
    ctx->pc = 0x2e9f20u;
    // NOP
    // 0x2e9f24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e9f24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e9f28: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e9f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e9f2c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2e9f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->pc = 0x2e9f30u;
}
