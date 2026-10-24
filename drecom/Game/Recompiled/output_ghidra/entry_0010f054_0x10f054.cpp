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

// Function: entry_0010f054
// Address: 0x10f054 - 0x10f070
void entry_0010f054_0x10f054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f054_0x10f054");
#endif

    switch (ctx->pc) {
        case 0x10f064u: goto label_10f064;
        default: break;
    }

    ctx->pc = 0x10f054u;

    // 0x10f054: 0xae0045f8  sw          $zero, 0x45F8($s0)
    ctx->pc = 0x10f054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17912), GPR_U32(ctx, 0));
    // 0x10f058: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f05c: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F05Cu;
    SET_GPR_U32(ctx, 31, 0x10F064u);
    ctx->pc = 0x10F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F05Cu;
    // 0x10f060: 0x8c4445bc  lw          $a0, 0x45BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F064u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F064u) { return; }
    ctx->pc = 0x10F064u;
label_10f064:
    // 0x10f064: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10f068: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x10f068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x10f06c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x10f070u;
}
