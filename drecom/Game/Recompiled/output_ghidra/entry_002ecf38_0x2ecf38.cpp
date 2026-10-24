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

// Function: entry_002ecf38
// Address: 0x2ecf38 - 0x2ecf60
void entry_002ecf38_0x2ecf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ecf38_0x2ecf38");
#endif

    ctx->pc = 0x2ecf38u;

    // 0x2ecf38: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2ecf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ecf3c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2ecf3cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2ecf40: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2ecf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecf44: 0x3c033ea0  lui         $v1, 0x3EA0
    ctx->pc = 0x2ecf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16032 << 16));
    // 0x2ecf48: 0x3470d845  ori         $s0, $v1, 0xD845
    ctx->pc = 0x2ecf48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x2ecf4c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2ecf4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecf50: 0x0  nop
    ctx->pc = 0x2ecf50u;
    // NOP
    // 0x2ecf54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ecf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ecf58: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ecf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2ecf5c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2ecf5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x2ecf60u;
}
