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

// Function: entry_00194f10
// Address: 0x194f10 - 0x194f50
void entry_00194f10_0x194f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194f10_0x194f10");
#endif

    ctx->pc = 0x194f10u;

    // 0x194f10: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x194f10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x194f14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194f18: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x194f18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x194f1c: 0x1020fec3  beqz        $at, . + 4 + (-0x13D << 2)
    ctx->pc = 0x194F1Cu;
    {
        const bool branch_taken_0x194f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f1c) {
            ctx->pc = 0x194A2Cu;
            return;
        }
    }
    ctx->pc = 0x194F24u;
    // 0x194f24: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x194f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x194f28: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x194f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x194f2c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x194f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194f30: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194F30u;
    {
        const bool branch_taken_0x194f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f30) {
            ctx->pc = 0x194F50u;
            return;
        }
    }
    ctx->pc = 0x194F38u;
    // 0x194f38: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x194f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x194f3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194F3Cu;
    {
        const bool branch_taken_0x194f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194f3c) {
            ctx->pc = 0x194F50u;
            return;
        }
    }
    ctx->pc = 0x194F44u;
    // 0x194f44: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x194f44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x194f48: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x194F48u;
    {
        const bool branch_taken_0x194f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194f48) {
            ctx->pc = 0x1953ACu;
            return;
        }
    }
    ctx->pc = 0x194F50u;
}
