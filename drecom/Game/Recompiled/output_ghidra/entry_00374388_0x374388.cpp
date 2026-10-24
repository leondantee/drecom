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

// Function: entry_00374388
// Address: 0x374388 - 0x3743a8
void entry_00374388_0x374388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00374388_0x374388");
#endif

    ctx->pc = 0x374388u;

    // 0x374388: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x374388u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x37438c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37438cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x374390: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x374390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x374394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x374394u;
    {
        const bool branch_taken_0x374394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374394) {
            ctx->pc = 0x3743A8u;
            return;
        }
    }
    ctx->pc = 0x37439Cu;
    // 0x37439c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x37439cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x3743a0: 0x3063ffbf  andi        $v1, $v1, 0xFFBF
    ctx->pc = 0x3743a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65471);
    // 0x3743a4: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x3743a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x3743a8u;
}
