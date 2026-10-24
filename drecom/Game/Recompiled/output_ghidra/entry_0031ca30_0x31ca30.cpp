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

// Function: entry_0031ca30
// Address: 0x31ca30 - 0x31ca64
void entry_0031ca30_0x31ca30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ca30_0x31ca30");
#endif

    ctx->pc = 0x31ca30u;

    // 0x31ca30: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x31ca34: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x31ca34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31ca38: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31CA38u;
    {
        const bool branch_taken_0x31ca38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ca38) {
            ctx->pc = 0x31CA64u;
            return;
        }
    }
    ctx->pc = 0x31CA40u;
    // 0x31ca40: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ca44: 0xc46112dc  lwc1        $f1, 0x12DC($v1)
    ctx->pc = 0x31ca44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ca48: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31ca4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ca50: 0x0  nop
    ctx->pc = 0x31ca50u;
    // NOP
    // 0x31ca54: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31ca54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31ca58: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31ca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31ca5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31ca5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31ca60: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31ca60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x31ca64u;
}
