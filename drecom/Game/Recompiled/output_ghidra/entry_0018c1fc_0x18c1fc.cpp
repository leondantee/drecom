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

// Function: entry_0018c1fc
// Address: 0x18c1fc - 0x18c218
void entry_0018c1fc_0x18c1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c1fc_0x18c1fc");
#endif

    ctx->pc = 0x18c1fcu;

    // 0x18c1fc: 0x92020140  lbu         $v0, 0x140($s0)
    ctx->pc = 0x18c1fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x18c200: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C204u;
    {
        const bool branch_taken_0x18c204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c204) {
            ctx->pc = 0x18C218u;
            return;
        }
    }
    ctx->pc = 0x18C20Cu;
    // 0x18c20c: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c210: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18c210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x18c214: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18c218u;
}
