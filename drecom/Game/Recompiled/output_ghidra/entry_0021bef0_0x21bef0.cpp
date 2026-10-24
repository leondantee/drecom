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

// Function: entry_0021bef0
// Address: 0x21bef0 - 0x21bf18
void entry_0021bef0_0x21bef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021bef0_0x21bef0");
#endif

    ctx->pc = 0x21bef0u;

    // 0x21bef0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x21bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21bef4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x21bef4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x21bef8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x21bef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21befc: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x21befcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x21bf00: 0x3464d845  ori         $a0, $v1, 0xD845
    ctx->pc = 0x21bf00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x21bf04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21bf04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21bf08: 0x0  nop
    ctx->pc = 0x21bf08u;
    // NOP
    // 0x21bf0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21bf0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21bf10: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x21bf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x21bf14: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x21bf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x21bf18u;
}
