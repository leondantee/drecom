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

// Function: entry_002eab60
// Address: 0x2eab60 - 0x2eab88
void entry_002eab60_0x2eab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eab60_0x2eab60");
#endif

    ctx->pc = 0x2eab60u;

    // 0x2eab60: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2eab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eab64: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2eab64u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2eab68: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2eab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eab6c: 0x3c033e56  lui         $v1, 0x3E56
    ctx->pc = 0x2eab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15958 << 16));
    // 0x2eab70: 0x346375b1  ori         $v1, $v1, 0x75B1
    ctx->pc = 0x2eab70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30129);
    // 0x2eab74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eab74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eab78: 0x0  nop
    ctx->pc = 0x2eab78u;
    // NOP
    // 0x2eab7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eab7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eab80: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2eab80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2eab84: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2eab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x2eab88u;
}
