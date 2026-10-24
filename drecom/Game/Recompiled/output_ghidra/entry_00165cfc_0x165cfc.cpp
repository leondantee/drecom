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

// Function: entry_00165cfc
// Address: 0x165cfc - 0x165d18
void entry_00165cfc_0x165cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165cfc_0x165cfc");
#endif

    switch (ctx->pc) {
        case 0x165d0cu: goto label_165d0c;
        default: break;
    }

    ctx->pc = 0x165cfcu;

label_165cfc:
    // 0x165cfc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x165cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x165d00: 0x2444eaf0  addiu       $a0, $v0, -0x1510
    ctx->pc = 0x165d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
    // 0x165d04: 0xc085f16  jal         func_217C58
    ctx->pc = 0x165D04u;
    SET_GPR_U32(ctx, 31, 0x165D0Cu);
    ctx->pc = 0x217C58u;
    {
        ctx->pc = 0x165D0Cu;
        ps2_stubs::sceSifRebootIop(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x165D0Cu) { return; }
    ctx->pc = 0x165D0Cu;
label_165d0c:
    // 0x165d0c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x165D0Cu;
    {
        const bool branch_taken_0x165d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165d0c) {
            ctx->pc = 0x165CFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165cfc;
        }
    }
    ctx->pc = 0x165D14u;
    // 0x165d14: 0x0  nop
    ctx->pc = 0x165d14u;
    // NOP
    ctx->pc = 0x165d18u;
}
