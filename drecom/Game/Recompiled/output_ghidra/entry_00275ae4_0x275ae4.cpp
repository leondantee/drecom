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

// Function: entry_00275ae4
// Address: 0x275ae4 - 0x275bc0
void entry_00275ae4_0x275ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275ae4_0x275ae4");
#endif

    ctx->pc = 0x275ae4u;

    // 0x275ae4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275ae8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275aec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275af0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x275af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275af4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x275af4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x275af8: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275afc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275b00: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b04: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x275b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x275b08: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x275b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x275b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x275b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275b10: 0x0  nop
    ctx->pc = 0x275b10u;
    // NOP
    // 0x275b14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x275b14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275b18: 0x0  nop
    ctx->pc = 0x275b18u;
    // NOP
    // 0x275b1c: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x275B1Cu;
    {
        const bool branch_taken_0x275b1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275b1c) {
            ctx->pc = 0x275BC0u;
            return;
        }
    }
    ctx->pc = 0x275B24u;
    // 0x275b24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275b28: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275b2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275b30: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275b34: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275b38: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x275b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275b3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275b40: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x275b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b44: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x275b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x275b48: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x275b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x275b4c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275b4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275b50: 0x0  nop
    ctx->pc = 0x275b50u;
    // NOP
    // 0x275b54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275b58: 0x0  nop
    ctx->pc = 0x275b58u;
    // NOP
    // 0x275b5c: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x275B5Cu;
    {
        const bool branch_taken_0x275b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275b5c) {
            ctx->pc = 0x275BC0u;
            return;
        }
    }
    ctx->pc = 0x275B64u;
    // 0x275b64: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x275b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275b68: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275b6c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x275b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275b70: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275b74: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275b78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275b7c: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x275b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x275b80: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x275b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275b84: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275b88: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275b8c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275b90: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275b94: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x275b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275b98: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x275b98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x275b9c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x275b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x275ba0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x275ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275ba4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x275ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275ba8: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x275ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275bac: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x275bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275bb0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x275bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x275bb4: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x275bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
    // 0x275bb8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x275BB8u;
    {
        const bool branch_taken_0x275bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275bb8) {
            ctx->pc = 0x275C70u;
            return;
        }
    }
    ctx->pc = 0x275BC0u;
}
