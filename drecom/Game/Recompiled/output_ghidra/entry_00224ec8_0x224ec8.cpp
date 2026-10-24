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

// Function: entry_00224ec8
// Address: 0x224ec8 - 0x225010
void entry_00224ec8_0x224ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224ec8_0x224ec8");
#endif

    switch (ctx->pc) {
        case 0x224f44u: goto label_224f44;
        case 0x224fc4u: goto label_224fc4;
        default: break;
    }

    ctx->pc = 0x224ec8u;

    // 0x224ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ecc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224ed0: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x224ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224ed4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x224ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x224ed8: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x224ED8u;
    {
        const bool branch_taken_0x224ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224ed8) {
            ctx->pc = 0x225010u;
            return;
        }
    }
    ctx->pc = 0x224EE0u;
    // 0x224ee0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ee4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224ee8: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x224ee8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x224eec: 0x1460007a  bnez        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x224EECu;
    {
        const bool branch_taken_0x224eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224eec) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x224EF4u;
    // 0x224ef4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ef8: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x224ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224efc: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x224efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x224f00: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x224f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x224f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x224f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224f08: 0x0  nop
    ctx->pc = 0x224f08u;
    // NOP
    // 0x224f0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x224f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224f10: 0x0  nop
    ctx->pc = 0x224f10u;
    // NOP
    // 0x224f14: 0x45000070  bc1f        . + 4 + (0x70 << 2)
    ctx->pc = 0x224F14u;
    {
        const bool branch_taken_0x224f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224f14) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x224F1Cu;
    // 0x224f1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x224f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f24: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x224f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x224f28: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x224f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x224f2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x224f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x224f30: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x224f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x224f34: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x224f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x224f38: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x224f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x224f3c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x224F3Cu;
    SET_GPR_U32(ctx, 31, 0x224F44u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x224F3Cu, 0x224F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F44u;
label_224f44:
    // 0x224f44: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x224F44u;
    {
        const bool branch_taken_0x224f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224f44) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x224F4Cu;
    // 0x224f4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224f54: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x224f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x224f58: 0x1460005f  bnez        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x224F58u;
    {
        const bool branch_taken_0x224f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224f58) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x224F60u;
    // 0x224f60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x224f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x224f68: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x224f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x224f6c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x224f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x224f70: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x224F70u;
    {
        const bool branch_taken_0x224f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224f70) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x224F78u;
    // 0x224f78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x224f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x224f7c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x224f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x224f80: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x224f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x224f84: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x224F84u;
    {
        const bool branch_taken_0x224f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224f84) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x224F8Cu;
    // 0x224f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224f90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224f94: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x224f94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x224f98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x224f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x224f9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fa0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x224fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x224fa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fa8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x224fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224fac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fb0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x224fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x224fb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x224fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fb8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x224fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x224fbc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x224FBCu;
    SET_GPR_U32(ctx, 31, 0x224FC4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x224FBCu, 0x224FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FC4u;
label_224fc4:
    // 0x224fc4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x224fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224fc8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x224fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x224fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x224fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224fd0: 0x14830041  bne         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x224FD0u;
    {
        const bool branch_taken_0x224fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x224fd0) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x224FD8u;
    // 0x224fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x224fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224fdc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fe0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x224fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x224fe4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x224fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x224fe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224fec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x224fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x224ff0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ff4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x224ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x224ff8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x224ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x224ffc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x224ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x225000: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225004: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x225004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x225008: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x225008u;
    {
        const bool branch_taken_0x225008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225008) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x225010u;
}
