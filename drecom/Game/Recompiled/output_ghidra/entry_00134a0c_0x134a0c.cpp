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

// Function: entry_00134a0c
// Address: 0x134a0c - 0x134a64
void entry_00134a0c_0x134a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134a0c_0x134a0c");
#endif

    ctx->pc = 0x134a0cu;

    // 0x134a0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a10: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a14: 0xc46102b0  lwc1        $f1, 0x2B0($v1)
    ctx->pc = 0x134a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a18: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134a1c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134a20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134a20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a24: 0x0  nop
    ctx->pc = 0x134a24u;
    // NOP
    // 0x134a28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134a28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134a2c: 0x0  nop
    ctx->pc = 0x134a2cu;
    // NOP
    // 0x134a30: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134A30u;
    {
        const bool branch_taken_0x134a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a30) {
            ctx->pc = 0x134A64u;
            return;
        }
    }
    ctx->pc = 0x134A38u;
    // 0x134a38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134a3c: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134a40: 0xc48102b0  lwc1        $f1, 0x2B0($a0)
    ctx->pc = 0x134a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a44: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134a48: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a50: 0x0  nop
    ctx->pc = 0x134a50u;
    // NOP
    // 0x134a54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134a58: 0xe48002b0  swc1        $f0, 0x2B0($a0)
    ctx->pc = 0x134a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
    // 0x134a5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134A5Cu;
    {
        const bool branch_taken_0x134a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134a5c) {
            ctx->pc = 0x134A74u;
            return;
        }
    }
    ctx->pc = 0x134A64u;
}
