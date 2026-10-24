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

// Function: entry_0026a490
// Address: 0x26a490 - 0x26a4c4
void entry_0026a490_0x26a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a490_0x26a490");
#endif

    ctx->pc = 0x26a490u;

    // 0x26a490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a494: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x26a494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x26a498: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26a498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26a49c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x26a49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x26a4a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A4A0u;
    {
        const bool branch_taken_0x26a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a4a0) {
            ctx->pc = 0x26A4C4u;
            return;
        }
    }
    ctx->pc = 0x26A4A8u;
    // 0x26a4a8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x26a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26a4ac: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x26a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x26a4b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x26a4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x26a4b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a4b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a4b8: 0x0  nop
    ctx->pc = 0x26a4b8u;
    // NOP
    // 0x26a4bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26a4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26a4c0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x26a4c4u;
}
