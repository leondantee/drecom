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

// Function: entry_0017d684
// Address: 0x17d684 - 0x17d6b0
void entry_0017d684_0x17d684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017d684_0x17d684");
#endif

    ctx->pc = 0x17d684u;

    // 0x17d684: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17d684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17d688: 0x942200cc  lhu         $v0, 0xCC($at)
    ctx->pc = 0x17d688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D00CCu));
    // 0x17d68c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17d690: 0x30430010  andi        $v1, $v0, 0x10
    ctx->pc = 0x17d690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x17d694: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D694u;
    {
        const bool branch_taken_0x17d694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d694) {
            ctx->pc = 0x17D6B0u;
            return;
        }
    }
    ctx->pc = 0x17D69Cu;
    // 0x17d69c: 0x938280a8  lbu         $v0, -0x7F58($gp)
    ctx->pc = 0x17d69cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934696)));
    // 0x17d6a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17d6a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17d6a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17d6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17d6ac: 0xa38380a8  sb          $v1, -0x7F58($gp)
    ctx->pc = 0x17d6acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934696), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x17d6b0u;
}
