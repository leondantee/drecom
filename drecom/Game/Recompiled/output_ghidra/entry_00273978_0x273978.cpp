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

// Function: entry_00273978
// Address: 0x273978 - 0x273990
void entry_00273978_0x273978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273978_0x273978");
#endif

    ctx->pc = 0x273978u;

    // 0x273978: 0x214302a  slt         $a2, $s0, $s4
    ctx->pc = 0x273978u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x27397c: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x27397Cu;
    {
        const bool branch_taken_0x27397c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x27397c) {
            ctx->pc = 0x2738C4u;
            return;
        }
    }
    ctx->pc = 0x273984u;
    // 0x273984: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x273984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x273988: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x273988u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x27398c: 0x0  nop
    ctx->pc = 0x27398cu;
    // NOP
    ctx->pc = 0x273990u;
}
