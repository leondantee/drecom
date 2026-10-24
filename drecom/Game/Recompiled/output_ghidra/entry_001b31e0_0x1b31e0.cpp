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

// Function: entry_001b31e0
// Address: 0x1b31e0 - 0x1b3258
void entry_001b31e0_0x1b31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b31e0_0x1b31e0");
#endif

    ctx->pc = 0x1b31e0u;

    // 0x1b31e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b31e4: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1b31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b31e8: 0xa21e11ef  sb          $fp, 0x11EF($s0)
    ctx->pc = 0x1b31e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 30));
    // 0x1b31ec: 0xa61711f2  sh          $s7, 0x11F2($s0)
    ctx->pc = 0x1b31ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 23));
    // 0x1b31f0: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x1b31f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x1b31f4: 0xa60211f4  sh          $v0, 0x11F4($s0)
    ctx->pc = 0x1b31f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4596), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b31f8: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x1b31f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b31fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b31fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3200: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1b3200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1b3204: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b3204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b3208: 0x24428540  addiu       $v0, $v0, -0x7AC0
    ctx->pc = 0x1b3208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935872));
    // 0x1b320c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3210: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1b3210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3214: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x1b3214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b3218: 0x93a2010f  lbu         $v0, 0x10F($sp)
    ctx->pc = 0x1b3218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 271)));
    // 0x1b321c: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b321cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3220: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1b3220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b3224: 0xae021210  sw          $v0, 0x1210($s0)
    ctx->pc = 0x1b3224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 2));
    // 0x1b3228: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b3228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b322c: 0x9022f136  lbu         $v0, -0xECA($at)
    ctx->pc = 0x1b322cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EF136u));
    // 0x1b3230: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b3230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3234: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1b3234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b3238: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B3238u;
    {
        const bool branch_taken_0x1b3238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3238) {
            ctx->pc = 0x1B3258u;
            return;
        }
    }
    ctx->pc = 0x1B3240u;
    // 0x1b3240: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b3240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b3244: 0x9022f136  lbu         $v0, -0xECA($at)
    ctx->pc = 0x1b3244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EF136u));
    // 0x1b3248: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b3248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b324c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b3250: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B3250u;
    {
        const bool branch_taken_0x1b3250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b3250) {
            ctx->pc = 0x1B32E0u;
            return;
        }
    }
    ctx->pc = 0x1B3258u;
}
