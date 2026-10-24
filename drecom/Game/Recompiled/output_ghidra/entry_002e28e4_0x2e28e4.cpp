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

// Function: entry_002e28e4
// Address: 0x2e28e4 - 0x2e2924
void entry_002e28e4_0x2e28e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e28e4_0x2e28e4");
#endif

    switch (ctx->pc) {
        case 0x2e2904u: goto label_2e2904;
        default: break;
    }

    ctx->pc = 0x2e28e4u;

    // 0x2e28e4: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x2e28e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e28e8: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2e28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2e28ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e28ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e28f0: 0x0  nop
    ctx->pc = 0x2e28f0u;
    // NOP
    // 0x2e28f4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e28f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e28f8: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2e28f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2e28fc: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x2E28FCu;
    SET_GPR_U32(ctx, 31, 0x2E2904u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x2E28FCu, 0x2E2904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2904u;
label_2e2904:
    // 0x2e2904: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2e2908: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2908u;
    {
        const bool branch_taken_0x2e2908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2908) {
            ctx->pc = 0x2E2924u;
            return;
        }
    }
    ctx->pc = 0x2E2910u;
    // 0x2e2910: 0x860300c8  lh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2e2914: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e2914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e2918: 0xa60300c8  sh          $v1, 0xC8($s0)
    ctx->pc = 0x2e2918u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e291c: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x2E291Cu;
    {
        const bool branch_taken_0x2e291c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e291c) {
            ctx->pc = 0x2E2BB8u;
            return;
        }
    }
    ctx->pc = 0x2E2924u;
}
