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

// Function: entry_002e8b50
// Address: 0x2e8b50 - 0x2e8b78
void entry_002e8b50_0x2e8b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e8b50_0x2e8b50");
#endif

    ctx->pc = 0x2e8b50u;

    // 0x2e8b50: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e8b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e8b54: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2e8b54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2e8b58: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e8b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8b5c: 0x3c043fa0  lui         $a0, 0x3FA0
    ctx->pc = 0x2e8b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16288 << 16));
    // 0x2e8b60: 0x3483d845  ori         $v1, $a0, 0xD845
    ctx->pc = 0x2e8b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55365);
    // 0x2e8b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8b68: 0x0  nop
    ctx->pc = 0x2e8b68u;
    // NOP
    // 0x2e8b6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e8b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e8b70: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e8b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e8b74: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e8b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x2e8b78u;
}
