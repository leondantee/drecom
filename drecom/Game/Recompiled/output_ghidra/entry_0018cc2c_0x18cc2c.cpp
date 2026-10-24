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

// Function: entry_0018cc2c
// Address: 0x18cc2c - 0x18cc48
void entry_0018cc2c_0x18cc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cc2c_0x18cc2c");
#endif

    ctx->pc = 0x18cc2cu;

    // 0x18cc2c: 0x92020370  lbu         $v0, 0x370($s0)
    ctx->pc = 0x18cc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x18cc30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cc34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CC34u;
    {
        const bool branch_taken_0x18cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc34) {
            ctx->pc = 0x18CC48u;
            return;
        }
    }
    ctx->pc = 0x18CC3Cu;
    // 0x18cc3c: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cc3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18cc40: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x18cc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x18cc44: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cc44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18cc48u;
}
