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

// Function: entry_0031d438
// Address: 0x31d438 - 0x31d470
void entry_0031d438_0x31d438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d438_0x31d438");
#endif

    ctx->pc = 0x31d438u;

    // 0x31d438: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x31d438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x31d43c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x31d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x31d440: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31D440u;
    {
        const bool branch_taken_0x31d440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d440) {
            ctx->pc = 0x31D470u;
            return;
        }
    }
    ctx->pc = 0x31D448u;
    // 0x31d448: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d44c: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31d44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d450: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31d450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31d454: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31d458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d45c: 0x0  nop
    ctx->pc = 0x31d45cu;
    // NOP
    // 0x31d460: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x31d460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d464: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x31d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d468: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x31d468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x31d46c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x31d46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->pc = 0x31d470u;
}
