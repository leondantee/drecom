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

// Function: entry_00344dfc
// Address: 0x344dfc - 0x344e98
void entry_00344dfc_0x344dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344dfc_0x344dfc");
#endif

    switch (ctx->pc) {
        case 0x344e58u: goto label_344e58;
        default: break;
    }

    ctx->pc = 0x344dfcu;

    // 0x344dfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e00: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x344e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344e04: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x344e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x344e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344e0c: 0x0  nop
    ctx->pc = 0x344e0cu;
    // NOP
    // 0x344e10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344e10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344e14: 0x0  nop
    ctx->pc = 0x344e14u;
    // NOP
    // 0x344e18: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x344E18u;
    {
        const bool branch_taken_0x344e18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344e18) {
            ctx->pc = 0x344E98u;
            return;
        }
    }
    ctx->pc = 0x344E20u;
    // 0x344e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344e24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e28: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x344e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x344e2c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x344e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x344e30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e34: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x344e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x344e38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e3c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x344e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344e40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e44: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x344e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344e48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x344e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x344e50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x344E50u;
    SET_GPR_U32(ctx, 31, 0x344E58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x344E50u, 0x344E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E58u;
label_344e58:
    // 0x344e58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344e5c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x344e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x344e60: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x344E60u;
    {
        const bool branch_taken_0x344e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344e60) {
            ctx->pc = 0x344E98u;
            return;
        }
    }
    ctx->pc = 0x344E68u;
    // 0x344e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x344e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x344e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x344e74: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x344e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x344e78: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e7c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x344e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x344e80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x344e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344e88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x344e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344e90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344e94: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x344e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x344e98u;
}
