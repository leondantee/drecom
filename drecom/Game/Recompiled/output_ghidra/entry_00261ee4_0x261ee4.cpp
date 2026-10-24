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

// Function: entry_00261ee4
// Address: 0x261ee4 - 0x261f30
void entry_00261ee4_0x261ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00261ee4_0x261ee4");
#endif

    ctx->pc = 0x261ee4u;

    // 0x261ee4: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261ee8: 0xc44102d8  lwc1        $f1, 0x2D8($v0)
    ctx->pc = 0x261ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261eec: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x261eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261ef0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x261ef0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x261ef4: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    // 0x261ef8: 0xc7a10248  lwc1        $f1, 0x248($sp)
    ctx->pc = 0x261ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x261efc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x261efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x261f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x261f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x261f04: 0x0  nop
    ctx->pc = 0x261f04u;
    // NOP
    // 0x261f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x261f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x261f0c: 0x0  nop
    ctx->pc = 0x261f0cu;
    // NOP
    // 0x261f10: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x261F10u;
    {
        const bool branch_taken_0x261f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x261f10) {
            ctx->pc = 0x261F30u;
            return;
        }
    }
    ctx->pc = 0x261F18u;
    // 0x261f18: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x261f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x261f1c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x261f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x261f20: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x261f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x261f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x261f28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261f2c: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x261f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
    ctx->pc = 0x261f30u;
}
