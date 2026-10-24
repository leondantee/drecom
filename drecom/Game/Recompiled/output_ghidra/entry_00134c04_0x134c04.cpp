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

// Function: entry_00134c04
// Address: 0x134c04 - 0x134c5c
void entry_00134c04_0x134c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134c04_0x134c04");
#endif

    ctx->pc = 0x134c04u;

    // 0x134c04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c08: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c0c: 0xc461043c  lwc1        $f1, 0x43C($v1)
    ctx->pc = 0x134c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c10: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134c14: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x134c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134c18: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x134c18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c1c: 0x0  nop
    ctx->pc = 0x134c1cu;
    // NOP
    // 0x134c20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134c24: 0x0  nop
    ctx->pc = 0x134c24u;
    // NOP
    // 0x134c28: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134C28u;
    {
        const bool branch_taken_0x134c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134c28) {
            ctx->pc = 0x134C5Cu;
            return;
        }
    }
    ctx->pc = 0x134C30u;
    // 0x134c30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134c34: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134c38: 0xc481043c  lwc1        $f1, 0x43C($a0)
    ctx->pc = 0x134c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134c3c: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134c40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134c48: 0x0  nop
    ctx->pc = 0x134c48u;
    // NOP
    // 0x134c4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134c50: 0xe480043c  swc1        $f0, 0x43C($a0)
    ctx->pc = 0x134c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1084), bits); }
    // 0x134c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134C54u;
    {
        const bool branch_taken_0x134c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c54) {
            ctx->pc = 0x134C6Cu;
            return;
        }
    }
    ctx->pc = 0x134C5Cu;
}
