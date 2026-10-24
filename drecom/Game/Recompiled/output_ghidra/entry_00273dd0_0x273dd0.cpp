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

// Function: entry_00273dd0
// Address: 0x273dd0 - 0x273eb8
void entry_00273dd0_0x273dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273dd0_0x273dd0");
#endif

    ctx->pc = 0x273dd0u;

    // 0x273dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273dd4: 0x148300bf  bne         $a0, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x273DD4u;
    {
        const bool branch_taken_0x273dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x273dd4) {
            ctx->pc = 0x2740D4u;
            return;
        }
    }
    ctx->pc = 0x273DDCu;
    // 0x273ddc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273de0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273de4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273de8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273dec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273df0: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273df4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273df8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273dfc: 0x3c03bdcc  lui         $v1, 0xBDCC
    ctx->pc = 0x273dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48588 << 16));
    // 0x273e00: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x273e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x273e04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273e08: 0x0  nop
    ctx->pc = 0x273e08u;
    // NOP
    // 0x273e0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x273e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273e10: 0x0  nop
    ctx->pc = 0x273e10u;
    // NOP
    // 0x273e14: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x273E14u;
    {
        const bool branch_taken_0x273e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273e14) {
            ctx->pc = 0x273EB8u;
            return;
        }
    }
    ctx->pc = 0x273E1Cu;
    // 0x273e1c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273e20: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273e24: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273e28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273e2c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273e30: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273e34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273e38: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273e3c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x273e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x273e40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x273e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x273e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273e48: 0x0  nop
    ctx->pc = 0x273e48u;
    // NOP
    // 0x273e4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273e4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273e50: 0x0  nop
    ctx->pc = 0x273e50u;
    // NOP
    // 0x273e54: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x273E54u;
    {
        const bool branch_taken_0x273e54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273e54) {
            ctx->pc = 0x273EB8u;
            return;
        }
    }
    ctx->pc = 0x273E5Cu;
    // 0x273e5c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x273e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x273e60: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273e64: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273e68: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273e6c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273e70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273e74: 0xac650060  sw          $a1, 0x60($v1)
    ctx->pc = 0x273e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 5));
    // 0x273e78: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x273e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x273e7c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273e80: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273e84: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273e88: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x273e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273e8c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273e90: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x273e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x273e94: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x273e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x273e98: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273e9c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273ea0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273ea4: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273ea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273eac: 0xac650068  sw          $a1, 0x68($v1)
    ctx->pc = 0x273eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 5));
    // 0x273eb0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x273EB0u;
    {
        const bool branch_taken_0x273eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273eb0) {
            ctx->pc = 0x274128u;
            return;
        }
    }
    ctx->pc = 0x273EB8u;
}
