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

// Function: entry_002d1cc0
// Address: 0x2d1cc0 - 0x2d1d6c
void entry_002d1cc0_0x2d1cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1cc0_0x2d1cc0");
#endif

    switch (ctx->pc) {
        case 0x2d1ce8u: goto label_2d1ce8;
        default: break;
    }

    ctx->pc = 0x2d1cc0u;

    // 0x2d1cc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cc8: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d1ccc: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d1cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d1cd0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1cd4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1cd8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1cdc: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1ce0: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1CE0u;
    SET_GPR_U32(ctx, 31, 0x2D1CE8u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1CE0u, 0x2D1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1CE8u;
label_2d1ce8:
    // 0x2d1ce8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D1CE8u;
    {
        const bool branch_taken_0x2d1ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ce8) {
            ctx->pc = 0x2D1DE8u;
            return;
        }
    }
    ctx->pc = 0x2D1CF0u;
    // 0x2d1cf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cf4: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1cf8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x2d1cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2d1cfc: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D1CFCu;
    {
        const bool branch_taken_0x2d1cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1cfc) {
            ctx->pc = 0x2D1DE8u;
            return;
        }
    }
    ctx->pc = 0x2D1D04u;
    // 0x2d1d04: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d08: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1d0c: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1d10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1d14: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1d18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d1c: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1d20: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2d1d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2d1d24: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d1d28: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x2d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d1d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d30: 0xac641338  sw          $a0, 0x1338($v1)
    ctx->pc = 0x2d1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 4));
    // 0x2d1d34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1d38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1d40: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2d1d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d1d44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1d4c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1d54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1d58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1d5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1d60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1d64: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D1D64u;
    {
        const bool branch_taken_0x2d1d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d64) {
            ctx->pc = 0x2D1DE8u;
            return;
        }
    }
    ctx->pc = 0x2D1D6Cu;
}
