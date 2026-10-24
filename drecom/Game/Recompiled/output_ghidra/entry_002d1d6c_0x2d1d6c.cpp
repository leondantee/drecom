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

// Function: entry_002d1d6c
// Address: 0x2d1d6c - 0x2d1de8
void entry_002d1d6c_0x2d1d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1d6c_0x2d1d6c");
#endif

    switch (ctx->pc) {
        case 0x2d1d9cu: goto label_2d1d9c;
        default: break;
    }

    ctx->pc = 0x2d1d6cu;

    // 0x2d1d6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d70: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d1d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d1d74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d78: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2d1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2d1d7c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d1d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d1d80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1d84: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2d1d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2d1d88: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1d8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d1d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d1d90: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d1d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d1d94: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1D94u;
    SET_GPR_U32(ctx, 31, 0x2D1D9Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1D94u, 0x2D1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D9Cu;
label_2d1d9c:
    // 0x2d1d9c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D1D9Cu;
    {
        const bool branch_taken_0x2d1d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d9c) {
            ctx->pc = 0x2D1DE8u;
            return;
        }
    }
    ctx->pc = 0x2D1DA4u;
    // 0x2d1da4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1da8: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1dac: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1db0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1db4: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1db8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1dbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1dc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1dc4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d1dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d1dc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1dcc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1dd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1dd4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1dd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ddc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1de0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1de4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d1de8u;
}
