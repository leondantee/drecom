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

// Function: entry_001a14b0
// Address: 0x1a14b0 - 0x1a14e8
void entry_001a14b0_0x1a14b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a14b0_0x1a14b0");
#endif

    ctx->pc = 0x1a14b0u;

    // 0x1a14b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a14b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a14b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a14b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a14b8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a14b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a14bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A14BCu;
    {
        const bool branch_taken_0x1a14bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14bc) {
            ctx->pc = 0x1A1528u;
            return;
        }
    }
    ctx->pc = 0x1A14C4u;
    // 0x1a14c4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a14c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a14c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a14c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a14cc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A14CCu;
    {
        const bool branch_taken_0x1a14cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a14cc) {
            ctx->pc = 0x1A14E8u;
            return;
        }
    }
    ctx->pc = 0x1A14D4u;
    // 0x1a14d4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a14d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a14d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a14dc: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1a14dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a14e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A14E0u;
    {
        const bool branch_taken_0x1a14e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14e0) {
            ctx->pc = 0x1A1528u;
            return;
        }
    }
    ctx->pc = 0x1A14E8u;
}
