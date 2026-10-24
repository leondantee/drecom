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

// Function: entry_00231a8c
// Address: 0x231a8c - 0x231adc
void entry_00231a8c_0x231a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231a8c_0x231a8c");
#endif

    ctx->pc = 0x231a8cu;

    // 0x231a8c: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x231a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231a90: 0x948311f4  lhu         $v1, 0x11F4($a0)
    ctx->pc = 0x231a90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4596)));
    // 0x231a94: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x231a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x231a98: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x231a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x231a9c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x231A9Cu;
    {
        const bool branch_taken_0x231a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231a9c) {
            ctx->pc = 0x231AE4u;
            return;
        }
    }
    ctx->pc = 0x231AA4u;
    // 0x231aa4: 0x3c04c248  lui         $a0, 0xC248
    ctx->pc = 0x231aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49736 << 16));
    // 0x231aa8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231aa8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231aac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231ab0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x231ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x231ab4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231ab8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x231ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231abc: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x231abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x231ac0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231ac0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231ac4: 0x0  nop
    ctx->pc = 0x231ac4u;
    // NOP
    // 0x231ac8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231acc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231ad0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x231AD0u;
    {
        const bool branch_taken_0x231ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x231ad0) {
            ctx->pc = 0x231ADCu;
            return;
        }
    }
    ctx->pc = 0x231AD8u;
    // 0x231ad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x231ad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x231adcu;
}
