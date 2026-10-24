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

// Function: entry_00220934
// Address: 0x220934 - 0x220954
void entry_00220934_0x220934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00220934_0x220934");
#endif

    ctx->pc = 0x220934u;

    // 0x220934: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x220934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220938: 0x908611ee  lbu         $a2, 0x11EE($a0)
    ctx->pc = 0x220938u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4590)));
    // 0x22093c: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x22093Cu;
    {
        const bool branch_taken_0x22093c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x22093c) {
            ctx->pc = 0x220954u;
            return;
        }
    }
    ctx->pc = 0x220944u;
    // 0x220944: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x220944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x220948: 0xa46011f4  sh          $zero, 0x11F4($v1)
    ctx->pc = 0x220948u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4596), (uint16_t)GPR_U32(ctx, 0));
    // 0x22094c: 0x1000051f  b           . + 4 + (0x51F << 2)
    ctx->pc = 0x22094Cu;
    {
        const bool branch_taken_0x22094c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22094c) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x220954u;
}
