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

// Function: entry_00344c8c
// Address: 0x344c8c - 0x344d58
void entry_00344c8c_0x344c8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00344c8c_0x344c8c");
#endif

    switch (ctx->pc) {
        case 0x344d30u: goto label_344d30;
        default: break;
    }

    ctx->pc = 0x344c8cu;

    // 0x344c8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344c90: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x344c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344c94: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x344c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x344c98: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x344c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x344c9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344ca0: 0x0  nop
    ctx->pc = 0x344ca0u;
    // NOP
    // 0x344ca4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344ca8: 0x0  nop
    ctx->pc = 0x344ca8u;
    // NOP
    // 0x344cac: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x344CACu;
    {
        const bool branch_taken_0x344cac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344cac) {
            ctx->pc = 0x344D68u;
            return;
        }
    }
    ctx->pc = 0x344CB4u;
    // 0x344cb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344cb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344cbc: 0x84630068  lh          $v1, 0x68($v1)
    ctx->pc = 0x344cbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x344cc0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x344cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x344cc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x344cc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x344cc8: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x344cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x344ccc: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x344CCCu;
    {
        const bool branch_taken_0x344ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x344ccc) {
            ctx->pc = 0x344D68u;
            return;
        }
    }
    ctx->pc = 0x344CD4u;
    // 0x344cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344cd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344cdc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x344cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x344ce0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x344ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x344ce4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344ce8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x344ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x344cec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344cf0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x344cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x344cf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344cf8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x344cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x344cfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d00: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x344d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x344d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344d08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d0c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x344d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x344d10: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x344d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x344d14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x344d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x344d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344d1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x344d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344d24: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x344d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x344d28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x344D28u;
    SET_GPR_U32(ctx, 31, 0x344D30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x344D28u, 0x344D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D30u;
label_344d30:
    // 0x344d30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344d34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x344d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x344d38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x344D38u;
    {
        const bool branch_taken_0x344d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x344d38) {
            ctx->pc = 0x344D58u;
            return;
        }
    }
    ctx->pc = 0x344D40u;
    // 0x344d40: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x344d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x344d44: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x344d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x344d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344d4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x344d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x344d50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x344d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344d54: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x344d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x344d58u;
}
