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

// Function: entry_0028e280
// Address: 0x28e280 - 0x28e2a4
void entry_0028e280_0x28e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028e280_0x28e280");
#endif

    ctx->pc = 0x28e280u;

    // 0x28e280: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28e280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28e284: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x28e284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28e288: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E288u;
    {
        const bool branch_taken_0x28e288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e288) {
            ctx->pc = 0x28E2A4u;
            return;
        }
    }
    ctx->pc = 0x28E290u;
    // 0x28e290: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28e294: 0x2443e7d0  addiu       $v1, $v0, -0x1830
    ctx->pc = 0x28e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961104));
    // 0x28e298: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x28e298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x28e29c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28E29Cu;
    {
        const bool branch_taken_0x28e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e29c) {
            ctx->pc = 0x28E2CCu;
            return;
        }
    }
    ctx->pc = 0x28E2A4u;
}
