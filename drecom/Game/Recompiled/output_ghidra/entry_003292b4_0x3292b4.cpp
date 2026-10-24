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

// Function: entry_003292b4
// Address: 0x3292b4 - 0x3292f0
void entry_003292b4_0x3292b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003292b4_0x3292b4");
#endif

    ctx->pc = 0x3292b4u;

    // 0x3292b4: 0x92625e04  lbu         $v0, 0x5E04($s3)
    ctx->pc = 0x3292b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24068)));
    // 0x3292b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3292b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3292bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3292bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3292c0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3292C0u;
    {
        const bool branch_taken_0x3292c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3292c0) {
            ctx->pc = 0x3292F0u;
            return;
        }
    }
    ctx->pc = 0x3292C8u;
    // 0x3292c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3292c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3292cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3292ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3292d0: 0xc6605e00  lwc1        $f0, 0x5E00($s3)
    ctx->pc = 0x3292d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3292d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3292d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3292d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3292d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3292dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3292dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3292e0: 0x0  nop
    ctx->pc = 0x3292e0u;
    // NOP
    // 0x3292e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3292e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3292e8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3292e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x3292ec: 0x0  nop
    ctx->pc = 0x3292ecu;
    // NOP
    ctx->pc = 0x3292f0u;
}
