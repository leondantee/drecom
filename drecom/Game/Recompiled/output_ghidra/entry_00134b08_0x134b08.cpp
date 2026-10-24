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

// Function: entry_00134b08
// Address: 0x134b08 - 0x134b60
void entry_00134b08_0x134b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b08_0x134b08");
#endif

    ctx->pc = 0x134b08u;

    // 0x134b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b0c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b10: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x134b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134b14: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134b18: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134b20: 0x0  nop
    ctx->pc = 0x134b20u;
    // NOP
    // 0x134b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134b28: 0x0  nop
    ctx->pc = 0x134b28u;
    // NOP
    // 0x134b2c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134B2Cu;
    {
        const bool branch_taken_0x134b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134b2c) {
            ctx->pc = 0x134B60u;
            return;
        }
    }
    ctx->pc = 0x134B34u;
    // 0x134b34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134b38: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134b3c: 0xc48102b4  lwc1        $f1, 0x2B4($a0)
    ctx->pc = 0x134b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134b40: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134b44: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134b4c: 0x0  nop
    ctx->pc = 0x134b4cu;
    // NOP
    // 0x134b50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134b50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134b54: 0xe48002b4  swc1        $f0, 0x2B4($a0)
    ctx->pc = 0x134b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 692), bits); }
    // 0x134b58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134B58u;
    {
        const bool branch_taken_0x134b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b58) {
            ctx->pc = 0x134B70u;
            return;
        }
    }
    ctx->pc = 0x134B60u;
}
