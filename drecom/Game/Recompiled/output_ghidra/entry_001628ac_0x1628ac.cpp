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

// Function: entry_001628ac
// Address: 0x1628ac - 0x1628dc
void entry_001628ac_0x1628ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001628ac_0x1628ac");
#endif

    ctx->pc = 0x1628acu;

    // 0x1628ac: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1628acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1628b0: 0x3c02400a  lui         $v0, 0x400A
    ctx->pc = 0x1628b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16394 << 16));
    // 0x1628b4: 0x34423ae6  ori         $v0, $v0, 0x3AE6
    ctx->pc = 0x1628b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15078);
    // 0x1628b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1628b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1628bc: 0x0  nop
    ctx->pc = 0x1628bcu;
    // NOP
    // 0x1628c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1628c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1628c4: 0x0  nop
    ctx->pc = 0x1628c4u;
    // NOP
    // 0x1628c8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1628C8u;
    {
        const bool branch_taken_0x1628c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1628c8) {
            ctx->pc = 0x1628DCu;
            return;
        }
    }
    ctx->pc = 0x1628D0u;
    // 0x1628d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1628d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1628d4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1628D4u;
    {
        const bool branch_taken_0x1628d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1628d4) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x1628DCu;
}
