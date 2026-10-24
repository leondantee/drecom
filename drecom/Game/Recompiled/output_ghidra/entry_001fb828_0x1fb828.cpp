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

// Function: entry_001fb828
// Address: 0x1fb828 - 0x1fb868
void entry_001fb828_0x1fb828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb828_0x1fb828");
#endif

    ctx->pc = 0x1fb828u;

    // 0x1fb828: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb82c: 0x90650348  lbu         $a1, 0x348($v1)
    ctx->pc = 0x1fb82cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x1fb830: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fb830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb834: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x1fb834u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1fb838: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FB838u;
    {
        const bool branch_taken_0x1fb838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb838) {
            ctx->pc = 0x1FB7ECu;
            return;
        }
    }
    ctx->pc = 0x1FB840u;
    // 0x1fb840: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb844: 0x90c50348  lbu         $a1, 0x348($a2)
    ctx->pc = 0x1fb844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 840)));
    // 0x1fb848: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1fb848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb84c: 0x146000b2  bnez        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1FB84Cu;
    {
        const bool branch_taken_0x1fb84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb84c) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB854u;
    // 0x1fb854: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb85c: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x1fb85cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x1fb860: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1FB860u;
    {
        const bool branch_taken_0x1fb860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb860) {
            ctx->pc = 0x1FBB38u;
            return;
        }
    }
    ctx->pc = 0x1FB868u;
}
