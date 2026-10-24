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

// Function: entry_0023cc6c
// Address: 0x23cc6c - 0x23cd24
void entry_0023cc6c_0x23cc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cc6c_0x23cc6c");
#endif

    switch (ctx->pc) {
        case 0x23cce0u: goto label_23cce0;
        default: break;
    }

    ctx->pc = 0x23cc6cu;

    // 0x23cc6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc70: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x23cc70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x23cc74: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x23CC74u;
    {
        const bool branch_taken_0x23cc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc74) {
            ctx->pc = 0x23CD60u;
            return;
        }
    }
    ctx->pc = 0x23CC7Cu;
    // 0x23cc7c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x23cc80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23cc80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23cc84: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23cc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23cc88: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23cc88u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cc8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23cc8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23cc90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc94: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x23cc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cc98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cc98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cc9c: 0x0  nop
    ctx->pc = 0x23cc9cu;
    // NOP
    // 0x23cca0: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x23CCA0u;
    {
        const bool branch_taken_0x23cca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cca0) {
            ctx->pc = 0x23CD60u;
            return;
        }
    }
    ctx->pc = 0x23CCA8u;
    // 0x23cca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ccac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccb0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ccb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ccb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccbc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23ccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ccc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccc4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23ccc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ccc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cccc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ccd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccd4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23ccd8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23CCD8u;
    SET_GPR_U32(ctx, 31, 0x23CCE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23CCD8u, 0x23CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCE0u;
label_23cce0:
    // 0x23cce0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23cce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23cce4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23cce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23cce8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23CCE8u;
    {
        const bool branch_taken_0x23cce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cce8) {
            ctx->pc = 0x23CD24u;
            return;
        }
    }
    ctx->pc = 0x23CCF0u;
    // 0x23ccf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ccf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccf8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23ccf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ccfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23cd00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd04: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23cd04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23cd08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23cd0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd10: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23cd10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23cd14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd18: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23cd18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23cd1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23cd24u;
}
