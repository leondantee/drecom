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

// Function: entry_00123bf8
// Address: 0x123bf8 - 0x123c40
void entry_00123bf8_0x123bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123bf8_0x123bf8");
#endif

    ctx->pc = 0x123bf8u;

    // 0x123bf8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x123bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123bfc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x123bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x123c00: 0x24424ed8  addiu       $v0, $v0, 0x4ED8
    ctx->pc = 0x123c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20184));
    // 0x123c04: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x123c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x123c08: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x123c08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123c0c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x123c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x123c10: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x123c10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x123c14: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x123c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x123c18: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x123c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x123c1c: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x123c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x123c20: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x123c20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x123c24: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x123c24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x123c28: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x123c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x123c2c: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x123c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
    // 0x123c30: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x123c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x123c34: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x123c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x123c38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x123c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x123c3c: 0x0  nop
    ctx->pc = 0x123c3cu;
    // NOP
    ctx->pc = 0x123c40u;
}
