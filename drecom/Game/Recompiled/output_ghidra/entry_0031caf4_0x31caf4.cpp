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

// Function: entry_0031caf4
// Address: 0x31caf4 - 0x31cb2c
void entry_0031caf4_0x31caf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031caf4_0x31caf4");
#endif

    ctx->pc = 0x31caf4u;

    // 0x31caf4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x31caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x31caf8: 0x34620011  ori         $v0, $v1, 0x11
    ctx->pc = 0x31caf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x31cafc: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31CAFCu;
    {
        const bool branch_taken_0x31cafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31cafc) {
            ctx->pc = 0x31CB2Cu;
            return;
        }
    }
    ctx->pc = 0x31CB04u;
    // 0x31cb04: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cb08: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31cb0c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31cb10: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31cb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31cb14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cb18: 0x0  nop
    ctx->pc = 0x31cb18u;
    // NOP
    // 0x31cb1c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31cb1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31cb20: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31cb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31cb24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31cb24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31cb28: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31cb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x31cb2cu;
}
