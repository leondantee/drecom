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

// Function: entry_00164750
// Address: 0x164750 - 0x164764
void entry_00164750_0x164750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164750_0x164750");
#endif

    ctx->pc = 0x164750u;

    // 0x164750: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x164750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x164754: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x164754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x164758: 0x240300a1  addiu       $v1, $zero, 0xA1
    ctx->pc = 0x164758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x16475c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16475cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164760: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x164760u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    ctx->pc = 0x164764u;
}
