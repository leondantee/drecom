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

// Function: entry_00320fe0
// Address: 0x320fe0 - 0x321004
void entry_00320fe0_0x320fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320fe0_0x320fe0");
#endif

    ctx->pc = 0x320fe0u;

    // 0x320fe0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320fe4: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x320fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x320fe8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320fec: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x320fecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x320ff0: 0x1020fff3  beqz        $at, . + 4 + (-0xD << 2)
    ctx->pc = 0x320FF0u;
    {
        const bool branch_taken_0x320ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ff0) {
            ctx->pc = 0x320FC0u;
            return;
        }
    }
    ctx->pc = 0x320FF8u;
    // 0x320ff8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320ff8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320ffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x320FFCu;
    {
        const bool branch_taken_0x320ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ffc) {
            ctx->pc = 0x321030u;
            return;
        }
    }
    ctx->pc = 0x321004u;
}
