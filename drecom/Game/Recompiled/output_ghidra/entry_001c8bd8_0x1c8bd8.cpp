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

// Function: entry_001c8bd8
// Address: 0x1c8bd8 - 0x1c8c68
void entry_001c8bd8_0x1c8bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8bd8_0x1c8bd8");
#endif

    switch (ctx->pc) {
        case 0x1c8c0cu: goto label_1c8c0c;
        default: break;
    }

    ctx->pc = 0x1c8bd8u;

    // 0x1c8bd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8bdc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1c8bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1c8be0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c8be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c8be4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1c8be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1c8be8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C8BE8u;
    {
        const bool branch_taken_0x1c8be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8be8) {
            ctx->pc = 0x1C8C68u;
            return;
        }
    }
    ctx->pc = 0x1C8BF0u;
    // 0x1c8bf0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8bf4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c8bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8bf8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c8bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8bfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c8bfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c8c00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c8c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8c04: 0xc0561d4  jal         func_158750
    ctx->pc = 0x1C8C04u;
    SET_GPR_U32(ctx, 31, 0x1C8C0Cu);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x1C8C04u, 0x1C8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8C0Cu;
label_1c8c0c:
    // 0x1c8c0c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c10: 0x8c851b6c  lw          $a1, 0x1B6C($a0)
    ctx->pc = 0x1c8c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1c8c14: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C8C14u;
    {
        const bool branch_taken_0x1c8c14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c14) {
            ctx->pc = 0x1C8C68u;
            return;
        }
    }
    ctx->pc = 0x1C8C1Cu;
    // 0x1c8c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8c20: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c8c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c24: 0xaca21b6c  sw          $v0, 0x1B6C($a1)
    ctx->pc = 0x1c8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7020), GPR_U32(ctx, 2));
    // 0x1c8c28: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c2c: 0x848215ec  lh          $v0, 0x15EC($a0)
    ctx->pc = 0x1c8c2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1c8c30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8C30u;
    {
        const bool branch_taken_0x1c8c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8c30) {
            ctx->pc = 0x1C8C68u;
            return;
        }
    }
    ctx->pc = 0x1C8C38u;
    // 0x1c8c38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c3c: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1c8c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c8c40: 0x2444fda8  addiu       $a0, $v0, -0x258
    ctx->pc = 0x1c8c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966696));
    // 0x1c8c44: 0xa46415ec  sh          $a0, 0x15EC($v1)
    ctx->pc = 0x1c8c44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c8c48: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c4c: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1c8c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c8c50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c8c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c8c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c8c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c8c58: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8C58u;
    {
        const bool branch_taken_0x1c8c58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c8c58) {
            ctx->pc = 0x1C8C68u;
            return;
        }
    }
    ctx->pc = 0x1C8C60u;
    // 0x1c8c60: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8c64: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1c8c64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c8c68u;
}
