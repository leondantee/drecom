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

// Function: entry_001a4b34
// Address: 0x1a4b34 - 0x1a4b68
void entry_001a4b34_0x1a4b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4b34_0x1a4b34");
#endif

    ctx->pc = 0x1a4b34u;

    // 0x1a4b34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4b38: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x1a4b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x1a4b3c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4b40: 0x30640100  andi        $a0, $v1, 0x100
    ctx->pc = 0x1a4b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1a4b44: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4B44u;
    {
        const bool branch_taken_0x1a4b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b44) {
            ctx->pc = 0x1A4B68u;
            return;
        }
    }
    ctx->pc = 0x1A4B4Cu;
    // 0x1a4b4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4b50: 0x90630319  lbu         $v1, 0x319($v1)
    ctx->pc = 0x1a4b50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 793)));
    // 0x1a4b54: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1a4b54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a4b58: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1a4b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1a4b5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a4b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a4b60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4b64: 0xa0830319  sb          $v1, 0x319($a0)
    ctx->pc = 0x1a4b64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 793), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a4b68u;
}
