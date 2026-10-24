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

// Function: entry_001eac58
// Address: 0x1eac58 - 0x1eac7c
void entry_001eac58_0x1eac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac58_0x1eac58");
#endif

    ctx->pc = 0x1eac58u;

    // 0x1eac58: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1eac58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1eac5c: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x1eac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1eac60: 0x2c4601f4  sltiu       $a2, $v0, 0x1F4
    ctx->pc = 0x1eac60u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)500) ? 1 : 0);
    // 0x1eac64: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAC64u;
    {
        const bool branch_taken_0x1eac64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eac64) {
            ctx->pc = 0x1EAC7Cu;
            return;
        }
    }
    ctx->pc = 0x1EAC6Cu;
    // 0x1eac6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac70: 0x8fb00138  lw          $s0, 0x138($sp)
    ctx->pc = 0x1eac70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1eac74: 0x26131330  addiu       $s3, $s0, 0x1330
    ctx->pc = 0x1eac74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1eac78: 0xa66400aa  sh          $a0, 0xAA($s3)
    ctx->pc = 0x1eac78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 170), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1eac7cu;
}
