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

// Function: entry_00171230
// Address: 0x171230 - 0x171270
void entry_00171230_0x171230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171230_0x171230");
#endif

    ctx->pc = 0x171230u;

    // 0x171230: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x171230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171234: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x171238: 0x9422cc88  lhu         $v0, -0x3378($at)
    ctx->pc = 0x171238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x47CC88u));
    // 0x17123c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x17123cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x171240: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x171240u;
    {
        const bool branch_taken_0x171240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x171240) {
            ctx->pc = 0x171270u;
            return;
        }
    }
    ctx->pc = 0x171248u;
    // 0x171248: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17124c: 0x9437cc8a  lhu         $s7, -0x3376($at)
    ctx->pc = 0x17124cu;
    SET_GPR_ZE32(ctx, 23, (uint16_t)FAST_READ16(0x47CC8Au));
    // 0x171250: 0x32f0ffff  andi        $s0, $s7, 0xFFFF
    ctx->pc = 0x171250u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x171254: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x171254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x171258: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x171258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17125c: 0x9423cc8e  lhu         $v1, -0x3372($at)
    ctx->pc = 0x17125cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x47CC8Eu));
    // 0x171260: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x171260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x171264: 0x10830078  beq         $a0, $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x171264u;
    {
        const bool branch_taken_0x171264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x171264) {
            ctx->pc = 0x171448u;
            return;
        }
    }
    ctx->pc = 0x17126Cu;
    // 0x17126c: 0x0  nop
    ctx->pc = 0x17126cu;
    // NOP
    ctx->pc = 0x171270u;
}
