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

// Function: entry_0031ff18
// Address: 0x31ff18 - 0x31ff40
void entry_0031ff18_0x31ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ff18_0x31ff18");
#endif

    ctx->pc = 0x31ff18u;

    // 0x31ff18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ff1c: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x31ff1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x31ff20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31ff20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31ff24: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x31ff24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31ff28: 0x1020ffec  beqz        $at, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31FF28u;
    {
        const bool branch_taken_0x31ff28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ff28) {
            ctx->pc = 0x31FEDCu;
            return;
        }
    }
    ctx->pc = 0x31FF30u;
    // 0x31ff30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ff34: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x31ff34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x31ff38: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x31FF38u;
    {
        const bool branch_taken_0x31ff38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ff38) {
            ctx->pc = 0x31FFF0u;
            return;
        }
    }
    ctx->pc = 0x31FF40u;
}
