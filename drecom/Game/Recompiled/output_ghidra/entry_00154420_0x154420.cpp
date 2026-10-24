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

// Function: entry_00154420
// Address: 0x154420 - 0x154444
void entry_00154420_0x154420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154420_0x154420");
#endif

    ctx->pc = 0x154420u;

    // 0x154420: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x154420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x154424: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x154424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x154428: 0x30648000  andi        $a0, $v1, 0x8000
    ctx->pc = 0x154428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x15442c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x15442Cu;
    {
        const bool branch_taken_0x15442c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15442c) {
            ctx->pc = 0x154460u;
            return;
        }
    }
    ctx->pc = 0x154434u;
    // 0x154434: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x154434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154438: 0xa203157c  sb          $v1, 0x157C($s0)
    ctx->pc = 0x154438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 3));
    // 0x15443c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15443Cu;
    {
        const bool branch_taken_0x15443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15443c) {
            ctx->pc = 0x154460u;
            return;
        }
    }
    ctx->pc = 0x154444u;
}
