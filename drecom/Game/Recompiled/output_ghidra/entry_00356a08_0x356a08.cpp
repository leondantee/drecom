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

// Function: entry_00356a08
// Address: 0x356a08 - 0x356a30
void entry_00356a08_0x356a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356a08_0x356a08");
#endif

    ctx->pc = 0x356a08u;

    // 0x356a08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x356a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x356a0c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x356a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356a10: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x356a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x356a14: 0x34630e56  ori         $v1, $v1, 0xE56
    ctx->pc = 0x356a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3670);
    // 0x356a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x356a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356a1c: 0x0  nop
    ctx->pc = 0x356a1cu;
    // NOP
    // 0x356a20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x356a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x356a24: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x356a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x356a28: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x356a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x356a2c: 0x0  nop
    ctx->pc = 0x356a2cu;
    // NOP
    ctx->pc = 0x356a30u;
}
