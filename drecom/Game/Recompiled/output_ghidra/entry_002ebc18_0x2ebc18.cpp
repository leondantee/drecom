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

// Function: entry_002ebc18
// Address: 0x2ebc18 - 0x2ebc40
void entry_002ebc18_0x2ebc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ebc18_0x2ebc18");
#endif

    ctx->pc = 0x2ebc18u;

    // 0x2ebc18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ebc18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ebc1c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2ebc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ebc20: 0x3c033e56  lui         $v1, 0x3E56
    ctx->pc = 0x2ebc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15958 << 16));
    // 0x2ebc24: 0x346375b1  ori         $v1, $v1, 0x75B1
    ctx->pc = 0x2ebc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30129);
    // 0x2ebc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ebc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ebc2c: 0x0  nop
    ctx->pc = 0x2ebc2cu;
    // NOP
    // 0x2ebc30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ebc30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ebc34: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2ebc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ebc38: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2ebc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2ebc3c: 0x0  nop
    ctx->pc = 0x2ebc3cu;
    // NOP
    ctx->pc = 0x2ebc40u;
}
