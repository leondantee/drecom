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

// Function: entry_001ff9d0
// Address: 0x1ff9d0 - 0x1ffa2c
void entry_001ff9d0_0x1ff9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff9d0_0x1ff9d0");
#endif

    ctx->pc = 0x1ff9d0u;

    // 0x1ff9d0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9d4: 0x8c630364  lw          $v1, 0x364($v1)
    ctx->pc = 0x1ff9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1ff9d8: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1FF9D8u;
    {
        const bool branch_taken_0x1ff9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff9d8) {
            ctx->pc = 0x1FFAA0u;
            return;
        }
    }
    ctx->pc = 0x1FF9E0u;
    // 0x1ff9e0: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9e4: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x1ff9e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x1ff9e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ff9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ff9ec: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x1ff9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ff9f0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff9f4: 0x90a40348  lbu         $a0, 0x348($a1)
    ctx->pc = 0x1ff9f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 840)));
    // 0x1ff9f8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ff9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ff9fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ff9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ffa00: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1ffa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1ffa04: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1ffa04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffa08: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa0c: 0xa070034b  sb          $s0, 0x34B($v1)
    ctx->pc = 0x1ffa0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ffa10: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffa14: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x1ffa14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x1ffa18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ffa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ffa1c: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x1ffa1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffa20: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1ffa20u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ffa24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFA24u;
    {
        const bool branch_taken_0x1ffa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffa24) {
            ctx->pc = 0x1FFA68u;
            return;
        }
    }
    ctx->pc = 0x1FFA2Cu;
}
