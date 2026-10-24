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

// Function: entry_001ffe68
// Address: 0x1ffe68 - 0x1ffeb8
void entry_001ffe68_0x1ffe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffe68_0x1ffe68");
#endif

    ctx->pc = 0x1ffe68u;

    // 0x1ffe68: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe6c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x1ffe6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1ffe70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ffe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe74: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1ffe74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1ffe78: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFE78u;
    {
        const bool branch_taken_0x1ffe78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe78) {
            ctx->pc = 0x1FFE2Cu;
            return;
        }
    }
    ctx->pc = 0x1FFE80u;
    // 0x1ffe80: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe84: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1ffe84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1ffe88: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ffe88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe8c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffe8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffe90: 0x90a30346  lbu         $v1, 0x346($a1)
    ctx->pc = 0x1ffe90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1ffe94: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1ffe94u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffe98: 0x2a4082a  slt         $at, $s5, $a0
    ctx->pc = 0x1ffe98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ffe9c: 0x14200038  bnez        $at, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FFE9Cu;
    {
        const bool branch_taken_0x1ffe9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffe9c) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFEA4u;
    // 0x1ffea4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1ffea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffea8: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffeac: 0xa0b00abc  sb          $s0, 0xABC($a1)
    ctx->pc = 0x1ffeacu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2748), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ffeb0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1FFEB0u;
    {
        const bool branch_taken_0x1ffeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffeb0) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFEB8u;
}
