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

// Function: entry_00275a08
// Address: 0x275a08 - 0x275ae4
void entry_00275a08_0x275a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275a08_0x275a08");
#endif

    ctx->pc = 0x275a08u;

    // 0x275a08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275a0c: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x275a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275a10: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x275a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x275a14: 0xc3a821  addu        $s5, $a2, $v1
    ctx->pc = 0x275a14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x275a18: 0x15a900  sll         $s5, $s5, 4
    ctx->pc = 0x275a18u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x275a1c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275a20: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x275a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x275a24: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275a28: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x275a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x275a2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x275a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275a34: 0x0  nop
    ctx->pc = 0x275a34u;
    // NOP
    // 0x275a38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x275a38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275a3c: 0x0  nop
    ctx->pc = 0x275a3cu;
    // NOP
    // 0x275a40: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x275A40u;
    {
        const bool branch_taken_0x275a40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275a40) {
            ctx->pc = 0x275AE4u;
            return;
        }
    }
    ctx->pc = 0x275A48u;
    // 0x275a48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275a4c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275a50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275a54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275a58: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275a5c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275a60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275a64: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275a68: 0x3c05bdcc  lui         $a1, 0xBDCC
    ctx->pc = 0x275a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48588 << 16));
    // 0x275a6c: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x275a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x275a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275a74: 0x0  nop
    ctx->pc = 0x275a74u;
    // NOP
    // 0x275a78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275a7c: 0x0  nop
    ctx->pc = 0x275a7cu;
    // NOP
    // 0x275a80: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x275A80u;
    {
        const bool branch_taken_0x275a80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275a80) {
            ctx->pc = 0x275AE4u;
            return;
        }
    }
    ctx->pc = 0x275A88u;
    // 0x275a88: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x275a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275a8c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275a90: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275a94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275a98: 0x8e360058  lw          $s6, 0x58($s1)
    ctx->pc = 0x275a98u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275a9c: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x275a9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x275aa0: 0xaec40060  sw          $a0, 0x60($s6)
    ctx->pc = 0x275aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 4));
    // 0x275aa4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x275aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275aa8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275aac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275ab0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275ab4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275ab8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x275ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275abc: 0xaca60064  sw          $a2, 0x64($a1)
    ctx->pc = 0x275abcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 6));
    // 0x275ac0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x275ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275ac4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275ac8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275acc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275accu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275ad0: 0x8e370058  lw          $s7, 0x58($s1)
    ctx->pc = 0x275ad0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275ad4: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x275ad4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x275ad8: 0xaee40068  sw          $a0, 0x68($s7)
    ctx->pc = 0x275ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 104), GPR_U32(ctx, 4));
    // 0x275adc: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x275ADCu;
    {
        const bool branch_taken_0x275adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275adc) {
            ctx->pc = 0x275C70u;
            return;
        }
    }
    ctx->pc = 0x275AE4u;
}
