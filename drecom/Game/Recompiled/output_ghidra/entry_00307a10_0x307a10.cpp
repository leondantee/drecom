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

// Function: entry_00307a10
// Address: 0x307a10 - 0x307b00
void entry_00307a10_0x307a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307a10_0x307a10");
#endif

    ctx->pc = 0x307a10u;

    // 0x307a10: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a14: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x307a14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x307a18: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x307a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x307a1c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x307a1cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307a20: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x307a20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x307a24: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
    ctx->pc = 0x307A24u;
    {
        const bool branch_taken_0x307a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a24) {
            ctx->pc = 0x307C18u;
            return;
        }
    }
    ctx->pc = 0x307A2Cu;
    // 0x307a2c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a30: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x307a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307a34: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x307a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x307a38: 0x14600077  bnez        $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x307A38u;
    {
        const bool branch_taken_0x307a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307a38) {
            ctx->pc = 0x307C18u;
            return;
        }
    }
    ctx->pc = 0x307A40u;
    // 0x307a40: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a44: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x307a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x307a48: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x307a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x307a4c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307a50: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307a50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307a54: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307a58: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307a5c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307a60: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a64: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x307a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x307a68: 0x245005a0  addiu       $s0, $v0, 0x5A0
    ctx->pc = 0x307a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1440));
    // 0x307a6c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307a70: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307a70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307a74: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307a78: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307a7c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307a80: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307a84: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x307a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x307a88: 0x24500630  addiu       $s0, $v0, 0x630
    ctx->pc = 0x307a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x307a8c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307a90: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307a90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307a94: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307a98: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307a9c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307aa0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307aa4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x307aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x307aa8: 0x245006c0  addiu       $s0, $v0, 0x6C0
    ctx->pc = 0x307aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x307aac: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307aacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ab0: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307ab4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307ab8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307abc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307ac0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ac4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x307ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x307ac8: 0x24500750  addiu       $s0, $v0, 0x750
    ctx->pc = 0x307ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x307acc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x307accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307ad0: 0x8e110034  lw          $s1, 0x34($s0)
    ctx->pc = 0x307ad0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x307ad4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x307ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x307ad8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x307ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307adc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x307adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x307ae0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307ae4: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x307ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307ae8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x307ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x307aec: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x307aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x307af0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x307af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307af4: 0xa44011f2  sh          $zero, 0x11F2($v0)
    ctx->pc = 0x307af4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4594), (uint16_t)GPR_U32(ctx, 0));
    // 0x307af8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x307AF8u;
    {
        const bool branch_taken_0x307af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307af8) {
            ctx->pc = 0x307C18u;
            return;
        }
    }
    ctx->pc = 0x307B00u;
}
