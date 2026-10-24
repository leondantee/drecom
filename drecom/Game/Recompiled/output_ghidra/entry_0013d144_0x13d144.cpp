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

// Function: entry_0013d144
// Address: 0x13d144 - 0x13d168
void entry_0013d144_0x13d144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d144_0x13d144");
#endif

    ctx->pc = 0x13d144u;

    // 0x13d144: 0x8e910008  lw          $s1, 0x8($s4)
    ctx->pc = 0x13d144u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x13d148: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x13d148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x13d14c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D14Cu;
    {
        const bool branch_taken_0x13d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d14c) {
            ctx->pc = 0x13D168u;
            return;
        }
    }
    ctx->pc = 0x13D154u;
    // 0x13d154: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d158: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13d158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d15c: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x13d15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13d160: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x13d160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13d164: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x13d164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13d168u;
}
