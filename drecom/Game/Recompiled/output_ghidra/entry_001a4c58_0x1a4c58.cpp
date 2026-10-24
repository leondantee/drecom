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

// Function: entry_001a4c58
// Address: 0x1a4c58 - 0x1a4c8c
void entry_001a4c58_0x1a4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4c58_0x1a4c58");
#endif

    ctx->pc = 0x1a4c58u;

    // 0x1a4c58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4c5c: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4c60: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4c64: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1a4c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1a4c68: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4C68u;
    {
        const bool branch_taken_0x1a4c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c68) {
            ctx->pc = 0x1A4C8Cu;
            return;
        }
    }
    ctx->pc = 0x1A4C70u;
    // 0x1a4c70: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c74: 0x90630318  lbu         $v1, 0x318($v1)
    ctx->pc = 0x1a4c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 792)));
    // 0x1a4c78: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a4c78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4c7c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a4c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a4c80: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1a4c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4c84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c88: 0xa0640318  sb          $a0, 0x318($v1)
    ctx->pc = 0x1a4c88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 792), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1a4c8cu;
}
