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

// Function: entry_0035f9c4
// Address: 0x35f9c4 - 0x35fa8c
void entry_0035f9c4_0x35f9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f9c4_0x35f9c4");
#endif

    ctx->pc = 0x35f9c4u;

    // 0x35f9c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9c8: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35f9c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35f9cc: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x35f9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35f9d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9d4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x35f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f9d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35f9dc: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f9e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35f9e4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x35f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x35f9e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9ec: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x35f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f9f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35f9f4: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f9f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35f9fc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x35f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x35fa00: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35fa04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35fa08: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35fa0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35fa10: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35fa14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35fa18: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35fa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35fa1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35fa20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fa24: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x35fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35fa28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35fa2c: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35fa30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35fa34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35fa38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fa3c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x35fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35fa40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35fa44: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35fa48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35fa4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35fa50: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35fa54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fa58: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35fa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35fa5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35fa60: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35fa64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fa68: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35fa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35fa6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35fa70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fa74: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x35fa74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x35fa78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35fa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35fa7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35FA7Cu;
    {
        const bool branch_taken_0x35fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fa7c) {
            ctx->pc = 0x35FA8Cu;
            return;
        }
    }
    ctx->pc = 0x35FA84u;
    // 0x35fa84: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x35FA84u;
    {
        const bool branch_taken_0x35fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fa84) {
            ctx->pc = 0x35FA8Cu;
            return;
        }
    }
    ctx->pc = 0x35FA8Cu;
}
