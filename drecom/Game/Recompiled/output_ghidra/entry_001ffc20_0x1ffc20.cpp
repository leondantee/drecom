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

// Function: entry_001ffc20
// Address: 0x1ffc20 - 0x1ffc6c
void entry_001ffc20_0x1ffc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc20_0x1ffc20");
#endif

    ctx->pc = 0x1ffc20u;

    // 0x1ffc20: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc24: 0x90850348  lbu         $a1, 0x348($a0)
    ctx->pc = 0x1ffc24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1ffc28: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1ffc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ffc2c: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1ffc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffc30: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc34: 0x90a60348  lbu         $a2, 0x348($a1)
    ctx->pc = 0x1ffc34u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ffc38: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1ffc38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffc3c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x1ffc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1ffc40: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ffc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ffc44: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffc48: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc4c: 0xa0a3034b  sb          $v1, 0x34B($a1)
    ctx->pc = 0x1ffc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 843), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffc50: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc54: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1ffc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1ffc58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ffc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffc5c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x1ffc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffc60: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffc60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffc64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFC64u;
    {
        const bool branch_taken_0x1ffc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc64) {
            ctx->pc = 0x1FFCA8u;
            return;
        }
    }
    ctx->pc = 0x1FFC6Cu;
}
