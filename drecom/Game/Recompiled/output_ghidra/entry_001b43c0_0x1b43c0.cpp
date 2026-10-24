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

// Function: entry_001b43c0
// Address: 0x1b43c0 - 0x1b4408
void entry_001b43c0_0x1b43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b43c0_0x1b43c0");
#endif

    ctx->pc = 0x1b43c0u;

    // 0x1b43c0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x1b43c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1b43c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b43c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b43c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b43cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1b43d0: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x1b43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x1b43d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1b43d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b43d8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x1b43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1b43dc: 0x90420006  lbu         $v0, 0x6($v0)
    ctx->pc = 0x1b43dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1b43e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b43e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b43e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b43e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b43e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b43ec: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1b43ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b43f0: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x1b43f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b43f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b43f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b43f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b43f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1b43fc: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x1b43fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b4400: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x1b4400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x1b4404: 0xa20211ef  sb          $v0, 0x11EF($s0)
    ctx->pc = 0x1b4404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4591), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b4408u;
}
