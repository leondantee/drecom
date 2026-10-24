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

// Function: caseD_6
// Address: 0x26c790 - 0x26c7f0
void caseD_6_0x26c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x26c790");
#endif

    ctx->pc = 0x26c790u;

    // 0x26c790: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c794: 0x84e813ac  lh          $t0, 0x13AC($a3)
    ctx->pc = 0x26c794u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 5036)));
    // 0x26c798: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26C798u;
    {
        const bool branch_taken_0x26c798 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c798) {
            ctx->pc = 0x26C7F0u;
            return;
        }
    }
    ctx->pc = 0x26C7A0u;
    // 0x26c7a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c7a4: 0x904413a4  lbu         $a0, 0x13A4($v0)
    ctx->pc = 0x26c7a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5028)));
    // 0x26c7a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x26c7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x26c7ac: 0x28450002  slti        $a1, $v0, 0x2
    ctx->pc = 0x26c7acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26c7b0: 0x14a0000f  bnez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x26C7B0u;
    {
        const bool branch_taken_0x26c7b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c7b0) {
            ctx->pc = 0x26C7F0u;
            return;
        }
    }
    ctx->pc = 0x26C7B8u;
    // 0x26c7b8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x26c7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c7bc: 0x90c709df  lbu         $a3, 0x9DF($a2)
    ctx->pc = 0x26c7bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x26c7c0: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x26c7c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x26c7c4: 0x31020010  andi        $v0, $t0, 0x10
    ctx->pc = 0x26c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x26c7c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C7C8u;
    {
        const bool branch_taken_0x26c7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7c8) {
            ctx->pc = 0x26C7F0u;
            return;
        }
    }
    ctx->pc = 0x26C7D0u;
    // 0x26c7d0: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x26c7d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c7d4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x26c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x26c7d8: 0x30450080  andi        $a1, $v0, 0x80
    ctx->pc = 0x26c7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x26c7dc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C7DCu;
    {
        const bool branch_taken_0x26c7dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c7dc) {
            ctx->pc = 0x26C7F0u;
            return;
        }
    }
    ctx->pc = 0x26C7E4u;
    // 0x26c7e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c7e8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x26c7e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c7ec: 0xace61b68  sw          $a2, 0x1B68($a3)
    ctx->pc = 0x26c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7016), GPR_U32(ctx, 6));
    ctx->pc = 0x26c7f0u;
}
