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

// Function: entry_0029c890
// Address: 0x29c890 - 0x29c8c0
void entry_0029c890_0x29c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c890_0x29c890");
#endif

    ctx->pc = 0x29c890u;

    // 0x29c890: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x29c890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x29c894: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x29c894u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x29c898: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x29c898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29c89c: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
    // 0x29c8a0: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x29c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
    // 0x29c8a4: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x29c8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29c8a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29c8ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29c8b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C8B0u;
    {
        const bool branch_taken_0x29c8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c8b0) {
            ctx->pc = 0x29C8C0u;
            return;
        }
    }
    ctx->pc = 0x29C8B8u;
    // 0x29c8b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x29c8bc: 0x0  nop
    ctx->pc = 0x29c8bcu;
    // NOP
    ctx->pc = 0x29c8c0u;
}
