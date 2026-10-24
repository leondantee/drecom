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

// Function: entry_00123b98
// Address: 0x123b98 - 0x123be0
void entry_00123b98_0x123b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123b98_0x123b98");
#endif

    ctx->pc = 0x123b98u;

    // 0x123b98: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123b9c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x123ba0: 0x24424ec8  addiu       $v0, $v0, 0x4EC8
    ctx->pc = 0x123ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20168));
    // 0x123ba4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x123ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x123ba8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x123ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x123bac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x123bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x123bb0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x123bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x123bb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123bb8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x123bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x123bbc: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x123bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x123bc0: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123bc4: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x123bc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x123bc8: 0x8e550024  lw          $s5, 0x24($s2)
    ctx->pc = 0x123bc8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x123bcc: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x123bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x123bd0: 0x2a22025  or          $a0, $s5, $v0
    ctx->pc = 0x123bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x123bd4: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x123bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
    // 0x123bd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x123bdc: 0x0  nop
    ctx->pc = 0x123bdcu;
    // NOP
    ctx->pc = 0x123be0u;
}
