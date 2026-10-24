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

// Function: entry_0026dd94
// Address: 0x26dd94 - 0x26ddbc
void entry_0026dd94_0x26dd94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dd94_0x26dd94");
#endif

    ctx->pc = 0x26dd94u;

    // 0x26dd94: 0x8e031b60  lw          $v1, 0x1B60($s0)
    ctx->pc = 0x26dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
    // 0x26dd98: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x26dd98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x26dd9c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DD9Cu;
    {
        const bool branch_taken_0x26dd9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dd9c) {
            ctx->pc = 0x26DDBCu;
            return;
        }
    }
    ctx->pc = 0x26DDA4u;
    // 0x26dda4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x26dda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dda8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x26dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x26ddac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ddacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ddb0: 0x0  nop
    ctx->pc = 0x26ddb0u;
    // NOP
    // 0x26ddb4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ddb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26ddb8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x26ddb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    ctx->pc = 0x26ddbcu;
}
