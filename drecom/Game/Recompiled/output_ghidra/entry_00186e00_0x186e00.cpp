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

// Function: entry_00186e00
// Address: 0x186e00 - 0x186e30
void entry_00186e00_0x186e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186e00_0x186e00");
#endif

    ctx->pc = 0x186e00u;

    // 0x186e00: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x186e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186e04: 0x3c0244e2  lui         $v0, 0x44E2
    ctx->pc = 0x186e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17634 << 16));
    // 0x186e08: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x186e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x186e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186e10: 0x0  nop
    ctx->pc = 0x186e10u;
    // NOP
    // 0x186e14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186e18: 0x0  nop
    ctx->pc = 0x186e18u;
    // NOP
    // 0x186e1c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x186E1Cu;
    {
        const bool branch_taken_0x186e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186e1c) {
            ctx->pc = 0x186E30u;
            return;
        }
    }
    ctx->pc = 0x186E24u;
    // 0x186e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186e28: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x186E28u;
    {
        const bool branch_taken_0x186e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e28) {
            ctx->pc = 0x186EE4u;
            return;
        }
    }
    ctx->pc = 0x186E30u;
}
