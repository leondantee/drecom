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

// Function: entry_001da950
// Address: 0x1da950 - 0x1da97c
void entry_001da950_0x1da950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da950_0x1da950");
#endif

    ctx->pc = 0x1da950u;

    // 0x1da950: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x1da950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x1da954: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DA954u;
    {
        const bool branch_taken_0x1da954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da954) {
            ctx->pc = 0x1DA990u;
            return;
        }
    }
    ctx->pc = 0x1DA95Cu;
    // 0x1da95c: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x1da95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x1da960: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA960u;
    {
        const bool branch_taken_0x1da960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da960) {
            ctx->pc = 0x1DA97Cu;
            return;
        }
    }
    ctx->pc = 0x1DA968u;
    // 0x1da968: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1da968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1da96c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da970: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da974: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DA974u;
    {
        const bool branch_taken_0x1da974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da974) {
            ctx->pc = 0x1DA9A8u;
            return;
        }
    }
    ctx->pc = 0x1DA97Cu;
}
