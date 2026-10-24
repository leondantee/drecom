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

// Function: entry_00200060
// Address: 0x200060 - 0x2000b0
void entry_00200060_0x200060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200060_0x200060");
#endif

    ctx->pc = 0x200060u;

    // 0x200060: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x200060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200064: 0x90640348  lbu         $a0, 0x348($v1)
    ctx->pc = 0x200064u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x200068: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x200068u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x20006c: 0x207182b  sltu        $v1, $s0, $a3
    ctx->pc = 0x20006cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x200070: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x200070u;
    {
        const bool branch_taken_0x200070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200070) {
            ctx->pc = 0x1FFFB0u;
            return;
        }
    }
    ctx->pc = 0x200078u;
    // 0x200078: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x200078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x20007c: 0x90c302ab  lbu         $v1, 0x2AB($a2)
    ctx->pc = 0x20007cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 683)));
    // 0x200080: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x200080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x200084: 0x10a00045  beqz        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x200084u;
    {
        const bool branch_taken_0x200084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x200084) {
            ctx->pc = 0x20019Cu;
            return;
        }
    }
    ctx->pc = 0x20008Cu;
    // 0x20008c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x20008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x200090: 0x906602ab  lbu         $a2, 0x2AB($v1)
    ctx->pc = 0x200090u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 683)));
    // 0x200094: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x200094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x200098: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x200098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x20009c: 0x14a60033  bne         $a1, $a2, . + 4 + (0x33 << 2)
    ctx->pc = 0x20009Cu;
    {
        const bool branch_taken_0x20009c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x20009c) {
            ctx->pc = 0x20016Cu;
            return;
        }
    }
    ctx->pc = 0x2000A4u;
    // 0x2000a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2000a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2000a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2000A8u;
    {
        const bool branch_taken_0x2000a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2000a8) {
            ctx->pc = 0x2000D8u;
            return;
        }
    }
    ctx->pc = 0x2000B0u;
}
