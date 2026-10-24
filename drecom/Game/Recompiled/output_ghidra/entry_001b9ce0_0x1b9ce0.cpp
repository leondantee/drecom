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

// Function: entry_001b9ce0
// Address: 0x1b9ce0 - 0x1b9d30
void entry_001b9ce0_0x1b9ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9ce0_0x1b9ce0");
#endif

    switch (ctx->pc) {
        case 0x1b9d04u: goto label_1b9d04;
        default: break;
    }

    ctx->pc = 0x1b9ce0u;

    // 0x1b9ce0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9ce4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1b9ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9ce8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9cec: 0xc4601284  lwc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b9cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9cf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9cf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b9cf4: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x1b9cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x1b9cf8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b9cf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b9cfc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B9CFCu;
    SET_GPR_U32(ctx, 31, 0x1B9D04u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B9CFCu, 0x1B9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D04u;
label_1b9d04:
    // 0x1b9d04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b9d04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b9d08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9d0c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1b9d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1b9d10: 0x106003d0  beqz        $v1, . + 4 + (0x3D0 << 2)
    ctx->pc = 0x1B9D10u;
    {
        const bool branch_taken_0x1b9d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9d10) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1B9D18u;
    // 0x1b9d18: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9d1c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b9d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b9d20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b9d24: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1b9d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9d28: 0x100003ca  b           . + 4 + (0x3CA << 2)
    ctx->pc = 0x1B9D28u;
    {
        const bool branch_taken_0x1b9d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9d28) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1B9D30u;
}
