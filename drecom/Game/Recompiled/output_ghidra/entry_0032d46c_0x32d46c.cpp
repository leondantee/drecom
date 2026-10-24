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

// Function: entry_0032d46c
// Address: 0x32d46c - 0x32d4a8
void entry_0032d46c_0x32d46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d46c_0x32d46c");
#endif

    ctx->pc = 0x32d46cu;

    // 0x32d46c: 0x92835e04  lbu         $v1, 0x5E04($s4)
    ctx->pc = 0x32d46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24068)));
    // 0x32d470: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32d470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32d474: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32d478: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32D478u;
    {
        const bool branch_taken_0x32d478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d478) {
            ctx->pc = 0x32D4A8u;
            return;
        }
    }
    ctx->pc = 0x32D480u;
    // 0x32d480: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32d480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32d484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32d484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32d488: 0xc6805e00  lwc1        $f0, 0x5E00($s4)
    ctx->pc = 0x32d488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d48c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32d48cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32d490: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x32d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x32d494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32d494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d498: 0x0  nop
    ctx->pc = 0x32d498u;
    // NOP
    // 0x32d49c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32d49cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32d4a0: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d4a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x32d4a4: 0x0  nop
    ctx->pc = 0x32d4a4u;
    // NOP
    ctx->pc = 0x32d4a8u;
}
