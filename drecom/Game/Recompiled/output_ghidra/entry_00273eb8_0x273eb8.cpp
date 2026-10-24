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

// Function: entry_00273eb8
// Address: 0x273eb8 - 0x273f9c
void entry_00273eb8_0x273eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273eb8_0x273eb8");
#endif

    ctx->pc = 0x273eb8u;

    // 0x273eb8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273ebc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273ec0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273ec4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273ec8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273ecc: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273ed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273ed4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ed8: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x273ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x273edc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x273edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x273ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273ee4: 0x0  nop
    ctx->pc = 0x273ee4u;
    // NOP
    // 0x273ee8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273eec: 0x0  nop
    ctx->pc = 0x273eecu;
    // NOP
    // 0x273ef0: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x273EF0u;
    {
        const bool branch_taken_0x273ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273ef0) {
            ctx->pc = 0x273F9Cu;
            return;
        }
    }
    ctx->pc = 0x273EF8u;
    // 0x273ef8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273efc: 0x70f021  addu        $fp, $v1, $s0
    ctx->pc = 0x273efcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273f00: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x273f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x273f04: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x273f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x273f08: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x273f08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273f0c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273f10: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x273f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x273f14: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x273f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x273f18: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x273f18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x273f1c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273f20: 0x3c05bdcc  lui         $a1, 0xBDCC
    ctx->pc = 0x273f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48588 << 16));
    // 0x273f24: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x273f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x273f28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x273f28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273f2c: 0x0  nop
    ctx->pc = 0x273f2cu;
    // NOP
    // 0x273f30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x273f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273f34: 0x0  nop
    ctx->pc = 0x273f34u;
    // NOP
    // 0x273f38: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x273F38u;
    {
        const bool branch_taken_0x273f38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x273f38) {
            ctx->pc = 0x273F9Cu;
            return;
        }
    }
    ctx->pc = 0x273F40u;
    // 0x273f40: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x273f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x273f44: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273f48: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273f4c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x273f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x273f50: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273f54: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x273f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273f58: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x273f58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
    // 0x273f5c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x273f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x273f60: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x273f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273f64: 0x703821  addu        $a3, $v1, $s0
    ctx->pc = 0x273f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273f68: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x273f68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x273f6c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273f70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x273f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x273f74: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x273f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x273f78: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x273f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x273f7c: 0x10a0c0  sll         $s4, $s0, 3
    ctx->pc = 0x273f7cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x273f80: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x273f80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x273f84: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x273f84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x273f88: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x273f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x273f8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x273f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x273f90: 0xac670068  sw          $a3, 0x68($v1)
    ctx->pc = 0x273f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 7));
    // 0x273f94: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x273F94u;
    {
        const bool branch_taken_0x273f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273f94) {
            ctx->pc = 0x274128u;
            return;
        }
    }
    ctx->pc = 0x273F9Cu;
}
