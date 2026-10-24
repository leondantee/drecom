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

// Function: entry_002d1bec
// Address: 0x2d1bec - 0x2d1cc0
void entry_002d1bec_0x2d1bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1bec_0x2d1bec");
#endif

    switch (ctx->pc) {
        case 0x2d1c14u: goto label_2d1c14;
        case 0x2d1c44u: goto label_2d1c44;
        default: break;
    }

    ctx->pc = 0x2d1becu;

    // 0x2d1bec: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x2d1becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x2d1bf0: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x2d1bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x2d1bf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1bf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1bfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c00: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d1c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d1c04: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d1c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1c08: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1c0c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1C0Cu;
    SET_GPR_U32(ctx, 31, 0x2D1C14u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1C0Cu, 0x2D1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C14u;
label_2d1c14:
    // 0x2d1c14: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D1C14u;
    {
        const bool branch_taken_0x2d1c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c14) {
            ctx->pc = 0x2D1CC0u;
            return;
        }
    }
    ctx->pc = 0x2D1C1Cu;
    // 0x2d1c1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c24: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x2d1c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x2d1c28: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2d1c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2d1c2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d1c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1c30: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2d1c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2d1c34: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2d1c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d1c38: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2d1c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d1c3c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D1C3Cu;
    SET_GPR_U32(ctx, 31, 0x2D1C44u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D1C3Cu, 0x2D1C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1C44u;
label_2d1c44:
    // 0x2d1c44: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D1C44u;
    {
        const bool branch_taken_0x2d1c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c44) {
            ctx->pc = 0x2D1CC0u;
            return;
        }
    }
    ctx->pc = 0x2D1C4Cu;
    // 0x2d1c4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c50: 0x8c421334  lw          $v0, 0x1334($v0)
    ctx->pc = 0x2d1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4916)));
    // 0x2d1c54: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2d1c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2d1c58: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1C58u;
    {
        const bool branch_taken_0x2d1c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1c58) {
            ctx->pc = 0x2D1CC0u;
            return;
        }
    }
    ctx->pc = 0x2D1C60u;
    // 0x2d1c60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c64: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1c68: 0x2402ff85  addiu       $v0, $zero, -0x7B
    ctx->pc = 0x2d1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1c6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2d1c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d1c70: 0xac821334  sw          $v0, 0x1334($a0)
    ctx->pc = 0x2d1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 2));
    // 0x2d1c74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c78: 0x8c621334  lw          $v0, 0x1334($v1)
    ctx->pc = 0x2d1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1c7c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2d1c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2d1c80: 0xac621334  sw          $v0, 0x1334($v1)
    ctx->pc = 0x2d1c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4916), GPR_U32(ctx, 2));
    // 0x2d1c84: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x2d1c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2d1c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c8c: 0xac431338  sw          $v1, 0x1338($v0)
    ctx->pc = 0x2d1c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 3));
    // 0x2d1c90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1c94: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1c98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d1c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1c9c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2d1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2d1ca0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ca4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d1ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d1ca8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d1cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1cb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cb4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d1cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1cb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d1cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1cbc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d1cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d1cc0u;
}
