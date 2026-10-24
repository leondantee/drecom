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

// Function: Oma8_R0_init
// Address: 0x37cc80 - 0x37cd28
void Oma8_R0_init_0x37cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma8_R0_init_0x37cc80");
#endif

    switch (ctx->pc) {
        case 0x37cca4u: goto label_37cca4;
        default: break;
    }

    ctx->pc = 0x37cc80u;

    // 0x37cc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37cc84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x37cc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x37cc88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37cc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37cc8c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x37cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x37cc90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x37cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37cc94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x37cc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37cc98: 0x8c4500a8  lw          $a1, 0xA8($v0)
    ctx->pc = 0x37cc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x37cc9c: 0xc099794  jal         func_265E50
    ctx->pc = 0x37CC9Cu;
    SET_GPR_U32(ctx, 31, 0x37CCA4u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x37CC9Cu, 0x37CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CCA4u;
label_37cca4:
    // 0x37cca4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37cca8: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x37cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x37ccac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ccb0: 0x8c700058  lw          $s0, 0x58($v1)
    ctx->pc = 0x37ccb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x37ccb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x37ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ccb8: 0x8c831294  lw          $v1, 0x1294($a0)
    ctx->pc = 0x37ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4756)));
    // 0x37ccbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37ccc0: 0xac831294  sw          $v1, 0x1294($a0)
    ctx->pc = 0x37ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4756), GPR_U32(ctx, 3));
    // 0x37ccc4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x37ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37ccc8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x37ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x37cccc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x37ccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37ccd0: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x37ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x37ccd4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x37ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x37ccd8: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x37ccd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x37ccdc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x37ccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37cce0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37cce4: 0xac64128c  sw          $a0, 0x128C($v1)
    ctx->pc = 0x37cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 4));
    // 0x37cce8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ccec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ccf0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x37ccf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37ccf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37ccf8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x37ccf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x37ccfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37cd00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x37cd00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37cd04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37cd08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x37cd08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x37cd0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x37cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37cd10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x37cd14: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x37cd14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37cd18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37cd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cd1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x37cd1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37cd20: 0x3e00008  jr          $ra
    ctx->pc = 0x37CD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CD28u;
}
