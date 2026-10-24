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

// Function: entry_00134dfc
// Address: 0x134dfc - 0x134e54
void entry_00134dfc_0x134dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134dfc_0x134dfc");
#endif

    ctx->pc = 0x134dfcu;

    // 0x134dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e00: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134e04: 0xc4610444  lwc1        $f1, 0x444($v1)
    ctx->pc = 0x134e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e08: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134e0c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134e14: 0x0  nop
    ctx->pc = 0x134e14u;
    // NOP
    // 0x134e18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134e1c: 0x0  nop
    ctx->pc = 0x134e1cu;
    // NOP
    // 0x134e20: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134E20u;
    {
        const bool branch_taken_0x134e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134e20) {
            ctx->pc = 0x134E54u;
            return;
        }
    }
    ctx->pc = 0x134E28u;
    // 0x134e28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134e2c: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x134e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134e30: 0xc4a10444  lwc1        $f1, 0x444($a1)
    ctx->pc = 0x134e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134e34: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134e38: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x134e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134e3c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x134e3cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134e40: 0x0  nop
    ctx->pc = 0x134e40u;
    // NOP
    // 0x134e44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134e44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134e48: 0xe4a00444  swc1        $f0, 0x444($a1)
    ctx->pc = 0x134e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1092), bits); }
    // 0x134e4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134E4Cu;
    {
        const bool branch_taken_0x134e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e4c) {
            ctx->pc = 0x134E64u;
            return;
        }
    }
    ctx->pc = 0x134E54u;
}
