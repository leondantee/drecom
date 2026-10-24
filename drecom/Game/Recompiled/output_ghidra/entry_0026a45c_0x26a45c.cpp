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

// Function: entry_0026a45c
// Address: 0x26a45c - 0x26a490
void entry_0026a45c_0x26a45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a45c_0x26a45c");
#endif

    ctx->pc = 0x26a45cu;

    // 0x26a45c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a460: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x26a460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x26a464: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26a464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26a468: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26a468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26a46c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A46Cu;
    {
        const bool branch_taken_0x26a46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a46c) {
            ctx->pc = 0x26A490u;
            return;
        }
    }
    ctx->pc = 0x26A474u;
    // 0x26a474: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x26a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a478: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x26a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x26a47c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26a480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a484: 0x0  nop
    ctx->pc = 0x26a484u;
    // NOP
    // 0x26a488: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26a488u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26a48c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x26a490u;
}
