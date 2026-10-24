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

// Function: entry_002efa78
// Address: 0x2efa78 - 0x2efa94
void entry_002efa78_0x2efa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002efa78_0x2efa78");
#endif

    ctx->pc = 0x2efa78u;

    // 0x2efa78: 0x93a200b8  lbu         $v0, 0xB8($sp)
    ctx->pc = 0x2efa78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2efa7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2efa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2efa80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFA80u;
    {
        const bool branch_taken_0x2efa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efa80) {
            ctx->pc = 0x2EFA94u;
            return;
        }
    }
    ctx->pc = 0x2EFA88u;
    // 0x2efa88: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2efa88u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2efa8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EFA8Cu;
    {
        const bool branch_taken_0x2efa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efa8c) {
            ctx->pc = 0x2EFA98u;
            return;
        }
    }
    ctx->pc = 0x2EFA94u;
}
