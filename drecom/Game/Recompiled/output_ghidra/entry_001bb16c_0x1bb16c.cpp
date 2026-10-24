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

// Function: entry_001bb16c
// Address: 0x1bb16c - 0x1bb1b8
void entry_001bb16c_0x1bb16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb16c_0x1bb16c");
#endif

    switch (ctx->pc) {
        case 0x1bb190u: goto label_1bb190;
        default: break;
    }

    ctx->pc = 0x1bb16cu;

    // 0x1bb16c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb170: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1bb170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb174: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bb174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb178: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bb178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb17c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bb17cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bb180: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1bb180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1bb184: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bb184u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bb188: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BB188u;
    SET_GPR_U32(ctx, 31, 0x1BB190u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BB188u, 0x1BB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB190u;
label_1bb190:
    // 0x1bb190: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb194: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bb194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bb198: 0x1060025d  beqz        $v1, . + 4 + (0x25D << 2)
    ctx->pc = 0x1BB198u;
    {
        const bool branch_taken_0x1bb198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb198) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB1A0u;
    // 0x1bb1a0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bb1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb1a4: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1bb1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1bb1a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bb1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bb1ac: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x1bb1acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bb1b0: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x1BB1B0u;
    {
        const bool branch_taken_0x1bb1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb1b0) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB1B8u;
}
