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

// Function: entry_00369dc4
// Address: 0x369dc4 - 0x369e30
void entry_00369dc4_0x369dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369dc4_0x369dc4");
#endif

    ctx->pc = 0x369dc4u;

    // 0x369dc4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369dc8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x369dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369dcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x369dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x369dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369dd4: 0x0  nop
    ctx->pc = 0x369dd4u;
    // NOP
    // 0x369dd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x369ddc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x369ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x369de0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369de4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x369de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369dec: 0x0  nop
    ctx->pc = 0x369decu;
    // NOP
    // 0x369df0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x369df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369df4: 0x0  nop
    ctx->pc = 0x369df4u;
    // NOP
    // 0x369df8: 0x45000060  bc1f        . + 4 + (0x60 << 2)
    ctx->pc = 0x369DF8u;
    {
        const bool branch_taken_0x369df8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369df8) {
            ctx->pc = 0x369F7Cu;
            return;
        }
    }
    ctx->pc = 0x369E00u;
    // 0x369e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369e04: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369e08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x369e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x369e0c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x369e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369e10: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x369e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x369e14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x369e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x369e18: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x369e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x369e1c: 0x2404012c  addiu       $a0, $zero, 0x12C
    ctx->pc = 0x369e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x369e20: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369e24: 0xa4640014  sh          $a0, 0x14($v1)
    ctx->pc = 0x369e24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x369e28: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x369E28u;
    {
        const bool branch_taken_0x369e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369e28) {
            ctx->pc = 0x369F7Cu;
            return;
        }
    }
    ctx->pc = 0x369E30u;
}
