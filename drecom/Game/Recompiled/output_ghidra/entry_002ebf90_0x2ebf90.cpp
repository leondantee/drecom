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

// Function: entry_002ebf90
// Address: 0x2ebf90 - 0x2ebfb8
void entry_002ebf90_0x2ebf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ebf90_0x2ebf90");
#endif

    ctx->pc = 0x2ebf90u;

    // 0x2ebf90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ebf90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ebf94: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2ebf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebf98: 0x3c033e20  lui         $v1, 0x3E20
    ctx->pc = 0x2ebf98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15904 << 16));
    // 0x2ebf9c: 0x3463d845  ori         $v1, $v1, 0xD845
    ctx->pc = 0x2ebf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55365);
    // 0x2ebfa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebfa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebfa4: 0x0  nop
    ctx->pc = 0x2ebfa4u;
    // NOP
    // 0x2ebfa8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ebfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ebfac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2ebfacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2ebfb0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2ebfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2ebfb4: 0x0  nop
    ctx->pc = 0x2ebfb4u;
    // NOP
    ctx->pc = 0x2ebfb8u;
}
