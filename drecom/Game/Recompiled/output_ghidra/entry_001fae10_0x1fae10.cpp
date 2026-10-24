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

// Function: entry_001fae10
// Address: 0x1fae10 - 0x1fae5c
void entry_001fae10_0x1fae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fae10_0x1fae10");
#endif

    ctx->pc = 0x1fae10u;

    // 0x1fae10: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae14: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fae14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fae18: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fae18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae1c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1fae1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fae20: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
    ctx->pc = 0x1FAE20u;
    {
        const bool branch_taken_0x1fae20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fae20) {
            ctx->pc = 0x1FACA0u;
            return;
        }
    }
    ctx->pc = 0x1FAE28u;
    // 0x1fae28: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae2c: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fae2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fae30: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fae30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae34: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae38: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1fae38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fae3c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fae3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fae44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fae44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fae48: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1fae48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fae4c: 0xa0640346  sb          $a0, 0x346($v1)
    ctx->pc = 0x1fae4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fae50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fae50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fae54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FAE54u;
    {
        const bool branch_taken_0x1fae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae54) {
            ctx->pc = 0x1FAE98u;
            return;
        }
    }
    ctx->pc = 0x1FAE5Cu;
}
