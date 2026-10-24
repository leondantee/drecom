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

// Function: entry_00238ce4
// Address: 0x238ce4 - 0x238d94
void entry_00238ce4_0x238ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238ce4_0x238ce4");
#endif

    switch (ctx->pc) {
        case 0x238d54u: goto label_238d54;
        default: break;
    }

    ctx->pc = 0x238ce4u;

    // 0x238ce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ce8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x238ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238cec: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x238cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x238cf0: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x238CF0u;
    {
        const bool branch_taken_0x238cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238cf0) {
            ctx->pc = 0x238D94u;
            return;
        }
    }
    ctx->pc = 0x238CF8u;
    // 0x238cf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cfc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x238cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238d00: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x238d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x238d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238d08: 0x0  nop
    ctx->pc = 0x238d08u;
    // NOP
    // 0x238d0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238d10: 0x0  nop
    ctx->pc = 0x238d10u;
    // NOP
    // 0x238d14: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x238D14u;
    {
        const bool branch_taken_0x238d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238d14) {
            ctx->pc = 0x238D94u;
            return;
        }
    }
    ctx->pc = 0x238D1Cu;
    // 0x238d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x238d24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238d28: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x238d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x238d2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x238d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x238d34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d38: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x238d38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d40: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x238d40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x238d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x238d4c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x238D4Cu;
    SET_GPR_U32(ctx, 31, 0x238D54u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x238D4Cu, 0x238D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D54u;
label_238d54:
    // 0x238d54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x238d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x238d58: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x238d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x238d5c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x238D5Cu;
    {
        const bool branch_taken_0x238d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238d5c) {
            ctx->pc = 0x238D94u;
            return;
        }
    }
    ctx->pc = 0x238D64u;
    // 0x238d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238d70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x238d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x238d74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d78: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238d7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x238d94u;
}
