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

// Function: entry_0023ab30
// Address: 0x23ab30 - 0x23ac48
void entry_0023ab30_0x23ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ab30_0x23ab30");
#endif

    switch (ctx->pc) {
        case 0x23ab78u: goto label_23ab78;
        case 0x23ab9cu: goto label_23ab9c;
        case 0x23ac10u: goto label_23ac10;
        default: break;
    }

    ctx->pc = 0x23ab30u;

    // 0x23ab30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab34: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23ab34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23ab38: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x23AB38u;
    {
        const bool branch_taken_0x23ab38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab38) {
            ctx->pc = 0x23ACB8u;
            return;
        }
    }
    ctx->pc = 0x23AB40u;
    // 0x23ab40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ab44: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab48: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ab4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ab50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab54: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23ab54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ab58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab5c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23ab5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ab60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab64: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ab68: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab6c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23ab70: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AB70u;
    SET_GPR_U32(ctx, 31, 0x23AB78u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AB70u, 0x23AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB78u;
label_23ab78:
    // 0x23ab78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23ab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ab7c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23ab7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23ab80: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x23ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x23ab84: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23ab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23ab88: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23ab88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23ab8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ab90: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23ab90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ab94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23AB94u;
    SET_GPR_U32(ctx, 31, 0x23AB9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23AB94u, 0x23AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB9Cu;
label_23ab9c:
    // 0x23ab9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23ab9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23aba0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23aba4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x23aba8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23aba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23abac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23abacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23abb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23abb4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23abb8: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x23abb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x23abbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23abc0: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23abc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23abc4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x23abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x23abc8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x23abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x23abcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23abccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23abd0: 0x0  nop
    ctx->pc = 0x23abd0u;
    // NOP
    // 0x23abd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23abd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23abd8: 0x0  nop
    ctx->pc = 0x23abd8u;
    // NOP
    // 0x23abdc: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x23ABDCu;
    {
        const bool branch_taken_0x23abdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23abdc) {
            ctx->pc = 0x23AC48u;
            return;
        }
    }
    ctx->pc = 0x23ABE4u;
    // 0x23abe4: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x23abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x23abe8: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x23abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x23abec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x23abecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x23abf0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23abf4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23abf8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23abfc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x23abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ac00: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ac04: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23ac08: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x23AC08u;
    SET_GPR_U32(ctx, 31, 0x23AC10u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x23AC08u, 0x23AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AC10u;
label_23ac10:
    // 0x23ac10: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23AC10u;
    {
        const bool branch_taken_0x23ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ac10) {
            ctx->pc = 0x23AC48u;
            return;
        }
    }
    ctx->pc = 0x23AC18u;
    // 0x23ac18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ac1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23ac20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ac24: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23ac28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac2c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23ac2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ac30: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac34: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23ac34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ac38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac3c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23ac3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ac40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x23ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ac44: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23ac48u;
}
