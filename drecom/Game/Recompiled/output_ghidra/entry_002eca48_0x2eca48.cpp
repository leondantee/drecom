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

// Function: entry_002eca48
// Address: 0x2eca48 - 0x2eca70
void entry_002eca48_0x2eca48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eca48_0x2eca48");
#endif

    ctx->pc = 0x2eca48u;

    // 0x2eca48: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2eca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eca4c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x2eca4cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2eca50: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x2eca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eca54: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2eca54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2eca58: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x2eca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x2eca5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2eca5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eca60: 0x0  nop
    ctx->pc = 0x2eca60u;
    // NOP
    // 0x2eca64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eca64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eca68: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2eca68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2eca6c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2eca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->pc = 0x2eca70u;
}
