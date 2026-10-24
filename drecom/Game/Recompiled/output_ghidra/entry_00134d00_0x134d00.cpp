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

// Function: entry_00134d00
// Address: 0x134d00 - 0x134d58
void entry_00134d00_0x134d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d00_0x134d00");
#endif

    ctx->pc = 0x134d00u;

    // 0x134d00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d04: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d08: 0xc4610440  lwc1        $f1, 0x440($v1)
    ctx->pc = 0x134d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d0c: 0x3c03bd4c  lui         $v1, 0xBD4C
    ctx->pc = 0x134d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48460 << 16));
    // 0x134d10: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134d18: 0x0  nop
    ctx->pc = 0x134d18u;
    // NOP
    // 0x134d1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134d1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134d20: 0x0  nop
    ctx->pc = 0x134d20u;
    // NOP
    // 0x134d24: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x134D24u;
    {
        const bool branch_taken_0x134d24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134d24) {
            ctx->pc = 0x134D58u;
            return;
        }
    }
    ctx->pc = 0x134D2Cu;
    // 0x134d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d30: 0x8c6402d0  lw          $a0, 0x2D0($v1)
    ctx->pc = 0x134d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d34: 0xc4810440  lwc1        $f1, 0x440($a0)
    ctx->pc = 0x134d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d38: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134d3c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134d44: 0x0  nop
    ctx->pc = 0x134d44u;
    // NOP
    // 0x134d48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x134d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x134d4c: 0xe4800440  swc1        $f0, 0x440($a0)
    ctx->pc = 0x134d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1088), bits); }
    // 0x134d50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x134D50u;
    {
        const bool branch_taken_0x134d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d50) {
            ctx->pc = 0x134D68u;
            return;
        }
    }
    ctx->pc = 0x134D58u;
}
