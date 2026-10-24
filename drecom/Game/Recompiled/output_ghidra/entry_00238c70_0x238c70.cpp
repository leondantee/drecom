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

// Function: entry_00238c70
// Address: 0x238c70 - 0x238ce4
void entry_00238c70_0x238c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238c70_0x238c70");
#endif

    switch (ctx->pc) {
        case 0x238c98u: goto label_238c98;
        default: break;
    }

    ctx->pc = 0x238c70u;

    // 0x238c70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c78: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x238c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x238c7c: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x238c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x238c80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x238c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x238c84: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x238c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x238c88: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x238c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238c8c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x238c90: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x238C90u;
    SET_GPR_U32(ctx, 31, 0x238C98u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x238C90u, 0x238C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C98u;
label_238c98:
    // 0x238c98: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x238C98u;
    {
        const bool branch_taken_0x238c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238c98) {
            ctx->pc = 0x238CE4u;
            return;
        }
    }
    ctx->pc = 0x238CA0u;
    // 0x238ca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ca4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x238ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238ca8: 0x84630074  lh          $v1, 0x74($v1)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x238cac: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x238CACu;
    {
        const bool branch_taken_0x238cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238cac) {
            ctx->pc = 0x238CE4u;
            return;
        }
    }
    ctx->pc = 0x238CB4u;
    // 0x238cb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238cb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cbc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238cc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x238cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238cc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cc8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238ccc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cd0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238cd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238cdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ce0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x238ce4u;
}
