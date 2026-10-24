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

// Function: entry_00338ccc
// Address: 0x338ccc - 0x338cec
void entry_00338ccc_0x338ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338ccc_0x338ccc");
#endif

    ctx->pc = 0x338cccu;

    // 0x338ccc: 0x83a20070  lb          $v0, 0x70($sp)
    ctx->pc = 0x338cccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338cd0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338cd4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338cd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338cd8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338CD8u;
    {
        const bool branch_taken_0x338cd8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338cd8) {
            ctx->pc = 0x338CECu;
            return;
        }
    }
    ctx->pc = 0x338CE0u;
    // 0x338ce0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x338ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338ce4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338CE4u;
    {
        const bool branch_taken_0x338ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ce4) {
            ctx->pc = 0x338CF0u;
            return;
        }
    }
    ctx->pc = 0x338CECu;
}
