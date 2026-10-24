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

// Function: entry_002156ec
// Address: 0x2156ec - 0x2156fc
void entry_002156ec_0x2156ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002156ec_0x2156ec");
#endif

    ctx->pc = 0x2156ecu;

    // 0x2156ec: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2156ECu;
    {
        const bool branch_taken_0x2156ec = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2156ec) {
            ctx->pc = 0x2156FCu;
            return;
        }
    }
    ctx->pc = 0x2156F4u;
    // 0x2156f4: 0xc084a94  jal         func_212A50
    ctx->pc = 0x2156F4u;
    SET_GPR_U32(ctx, 31, 0x2156FCu);
    ctx->pc = 0x212A50u;
    {
        ctx->pc = 0x2156FCu;
        ps2_syscalls::iSignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2156FCu) { return; }
    ctx->pc = 0x2156FCu;
}
