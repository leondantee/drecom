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

// Function: entry_0018c0cc
// Address: 0x18c0cc - 0x18c100
void entry_0018c0cc_0x18c0cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c0cc_0x18c0cc");
#endif

    ctx->pc = 0x18c0ccu;

    // 0x18c0cc: 0x9202013b  lbu         $v0, 0x13B($s0)
    ctx->pc = 0x18c0ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 315)));
    // 0x18c0d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c0d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c0d8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18C0D8u;
    {
        const bool branch_taken_0x18c0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c0d8) {
            ctx->pc = 0x18C100u;
            return;
        }
    }
    ctx->pc = 0x18C0E0u;
    // 0x18c0e0: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x18c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x18c0e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18C0E4u;
    {
        const bool branch_taken_0x18c0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0e4) {
            ctx->pc = 0x18C13Cu;
            return;
        }
    }
    ctx->pc = 0x18C0ECu;
    // 0x18c0ec: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c0ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c0f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x18c0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x18c0f4: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c0f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18C0F8u;
    {
        const bool branch_taken_0x18c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c0f8) {
            ctx->pc = 0x18C13Cu;
            return;
        }
    }
    ctx->pc = 0x18C100u;
}
