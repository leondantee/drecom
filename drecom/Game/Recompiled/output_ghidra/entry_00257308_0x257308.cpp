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

// Function: entry_00257308
// Address: 0x257308 - 0x257320
void entry_00257308_0x257308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257308_0x257308");
#endif

    ctx->pc = 0x257308u;

    // 0x257308: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25730c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25730cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257310: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x257310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x257314: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x257314u;
    {
        const bool branch_taken_0x257314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257314) {
            ctx->pc = 0x257350u;
            return;
        }
    }
    ctx->pc = 0x25731Cu;
    // 0x25731c: 0x0  nop
    ctx->pc = 0x25731cu;
    // NOP
    ctx->pc = 0x257320u;
}
