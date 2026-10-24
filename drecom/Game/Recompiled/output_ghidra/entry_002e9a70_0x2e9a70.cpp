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

// Function: entry_002e9a70
// Address: 0x2e9a70 - 0x2e9a98
void entry_002e9a70_0x2e9a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e9a70_0x2e9a70");
#endif

    ctx->pc = 0x2e9a70u;

    // 0x2e9a70: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2e9a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e9a74: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x2e9a74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2e9a78: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2e9a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9a7c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2e9a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2e9a80: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2e9a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2e9a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9a88: 0x0  nop
    ctx->pc = 0x2e9a88u;
    // NOP
    // 0x2e9a8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e9a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e9a90: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2e9a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e9a94: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e9a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x2e9a98u;
}
