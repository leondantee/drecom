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

// Function: entry_001c9690
// Address: 0x1c9690 - 0x1c96ec
void entry_001c9690_0x1c9690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9690_0x1c9690");
#endif

    switch (ctx->pc) {
        case 0x1c96b4u: goto label_1c96b4;
        default: break;
    }

    ctx->pc = 0x1c9690u;

    // 0x1c9690: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9694: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1c9694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9698: 0x8fb10088  lw          $s1, 0x88($sp)
    ctx->pc = 0x1c9698u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c969c: 0xc6201284  lwc1        $f0, 0x1284($s1)
    ctx->pc = 0x1c969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c96a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c96a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c96a4: 0xe6201284  swc1        $f0, 0x1284($s1)
    ctx->pc = 0x1c96a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4740), bits); }
    // 0x1c96a8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c96a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c96ac: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C96ACu;
    SET_GPR_U32(ctx, 31, 0x1C96B4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C96ACu, 0x1C96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96B4u;
label_1c96b4:
    // 0x1c96b4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c96b4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c96b8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c96bc: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1c96bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1c96c0: 0x106001d0  beqz        $v1, . + 4 + (0x1D0 << 2)
    ctx->pc = 0x1C96C0u;
    {
        const bool branch_taken_0x1c96c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96c0) {
            ctx->pc = 0x1C9E04u;
            return;
        }
    }
    ctx->pc = 0x1C96C8u;
    // 0x1c96c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c96cc: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1c96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1c96d0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C96D0u;
    {
        const bool branch_taken_0x1c96d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96d0) {
            ctx->pc = 0x1C96ECu;
            return;
        }
    }
    ctx->pc = 0x1C96D8u;
    // 0x1c96d8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1c96d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c96dc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c96e0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1c96e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c96e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C96E4u;
    {
        const bool branch_taken_0x1c96e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c96e4) {
            ctx->pc = 0x1C96FCu;
            return;
        }
    }
    ctx->pc = 0x1C96ECu;
}
