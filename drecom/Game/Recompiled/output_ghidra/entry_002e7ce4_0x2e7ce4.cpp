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

// Function: entry_002e7ce4
// Address: 0x2e7ce4 - 0x2e7d24
void entry_002e7ce4_0x2e7ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7ce4_0x2e7ce4");
#endif

    switch (ctx->pc) {
        case 0x2e7d04u: goto label_2e7d04;
        default: break;
    }

    ctx->pc = 0x2e7ce4u;

    // 0x2e7ce4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x2e7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e7ce8: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2e7ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2e7cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e7cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7cf0: 0x0  nop
    ctx->pc = 0x2e7cf0u;
    // NOP
    // 0x2e7cf4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e7cf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e7cf8: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x2e7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2e7cfc: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E7CFCu;
    SET_GPR_U32(ctx, 31, 0x2E7D04u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E7CFCu, 0x2E7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7D04u;
label_2e7d04:
    // 0x2e7d04: 0x860300e8  lh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7d04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2e7d08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E7D08u;
    {
        const bool branch_taken_0x2e7d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d08) {
            ctx->pc = 0x2E7D24u;
            return;
        }
    }
    ctx->pc = 0x2E7D10u;
    // 0x2e7d10: 0x860300e8  lh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2e7d14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e7d18: 0xa60300e8  sh          $v1, 0xE8($s0)
    ctx->pc = 0x2e7d18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 232), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e7d1c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2E7D1Cu;
    {
        const bool branch_taken_0x2e7d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7d1c) {
            ctx->pc = 0x2E7FB8u;
            return;
        }
    }
    ctx->pc = 0x2E7D24u;
}
