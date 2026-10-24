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

// Function: entry_002972e0
// Address: 0x2972e0 - 0x2972fc
void entry_002972e0_0x2972e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002972e0_0x2972e0");
#endif

    ctx->pc = 0x2972e0u;

    // 0x2972e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2972e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2972e4: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x2972e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2972e8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x2972e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2972ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2972ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2972f0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2972f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2972f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2972F4u;
    {
        const bool branch_taken_0x2972f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2972f4) {
            ctx->pc = 0x297328u;
            return;
        }
    }
    ctx->pc = 0x2972FCu;
}
