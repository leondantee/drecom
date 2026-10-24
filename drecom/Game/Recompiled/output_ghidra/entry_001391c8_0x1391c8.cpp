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

// Function: entry_001391c8
// Address: 0x1391c8 - 0x139200
void entry_001391c8_0x1391c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001391c8_0x1391c8");
#endif

    ctx->pc = 0x1391c8u;

    // 0x1391c8: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1391c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1391cc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1391ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1391d0: 0x24724ec0  addiu       $s2, $v1, 0x4EC0
    ctx->pc = 0x1391d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 20160));
    // 0x1391d4: 0x250a021  addu        $s4, $s2, $s0
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1391d8: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x1391d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1391dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1391dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1391e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1391e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1391e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1391e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1391e8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1391e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1391ec: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x1391ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x1391f0: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1391f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1391f4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1391f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1391f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1391f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1391fc: 0x0  nop
    ctx->pc = 0x1391fcu;
    // NOP
    ctx->pc = 0x139200u;
}
