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

// Function: entry_00239d5c
// Address: 0x239d5c - 0x239dd0
void entry_00239d5c_0x239d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239d5c_0x239d5c");
#endif

    switch (ctx->pc) {
        case 0x239d84u: goto label_239d84;
        default: break;
    }

    ctx->pc = 0x239d5cu;

    // 0x239d5c: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x239d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x239d60: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x239d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x239d64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x239d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x239d68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d70: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x239d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x239d74: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x239d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x239d78: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x239d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x239d7c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x239D7Cu;
    SET_GPR_U32(ctx, 31, 0x239D84u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x239D7Cu, 0x239D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D84u;
label_239d84:
    // 0x239d84: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x239D84u;
    {
        const bool branch_taken_0x239d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d84) {
            ctx->pc = 0x239DD0u;
            return;
        }
    }
    ctx->pc = 0x239D8Cu;
    // 0x239d8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239d94: 0x84630074  lh          $v1, 0x74($v1)
    ctx->pc = 0x239d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x239d98: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x239D98u;
    {
        const bool branch_taken_0x239d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239d98) {
            ctx->pc = 0x239DD0u;
            return;
        }
    }
    ctx->pc = 0x239DA0u;
    // 0x239da0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239da4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239da8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x239da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x239dac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x239dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239db0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239db4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x239db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x239db8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239dbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x239dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x239dc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239dc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x239dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239dc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239dcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x239dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x239dd0u;
}
