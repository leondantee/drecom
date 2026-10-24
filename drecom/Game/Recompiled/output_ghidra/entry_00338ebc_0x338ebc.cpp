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

// Function: entry_00338ebc
// Address: 0x338ebc - 0x338edc
void entry_00338ebc_0x338ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338ebc_0x338ebc");
#endif

    ctx->pc = 0x338ebcu;

    // 0x338ebc: 0x83a20070  lb          $v0, 0x70($sp)
    ctx->pc = 0x338ebcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338ec0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x338ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x338ec4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x338ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x338ec8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338EC8u;
    {
        const bool branch_taken_0x338ec8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x338ec8) {
            ctx->pc = 0x338EDCu;
            return;
        }
    }
    ctx->pc = 0x338ED0u;
    // 0x338ed0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x338ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338ed4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x338ED4u;
    {
        const bool branch_taken_0x338ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x338ed4) {
            ctx->pc = 0x338EE0u;
            return;
        }
    }
    ctx->pc = 0x338EDCu;
}
