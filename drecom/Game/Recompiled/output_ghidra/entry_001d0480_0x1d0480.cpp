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

// Function: entry_001d0480
// Address: 0x1d0480 - 0x1d04d8
void entry_001d0480_0x1d0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0480_0x1d0480");
#endif

    switch (ctx->pc) {
        case 0x1d04a4u: goto label_1d04a4;
        default: break;
    }

    ctx->pc = 0x1d0480u;

    // 0x1d0480: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0484: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1d0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0488: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d048c: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0490: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1d0490u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d0494: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1d0494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1d0498: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d0498u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d049c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1D049Cu;
    SET_GPR_U32(ctx, 31, 0x1D04A4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1D049Cu, 0x1D04A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04A4u;
label_1d04a4:
    // 0x1d04a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d04a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1d04a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1d04ac: 0x1060015c  beqz        $v1, . + 4 + (0x15C << 2)
    ctx->pc = 0x1D04ACu;
    {
        const bool branch_taken_0x1d04ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04ac) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D04B4u;
    // 0x1d04b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d04b8: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1d04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1d04bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D04BCu;
    {
        const bool branch_taken_0x1d04bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04bc) {
            ctx->pc = 0x1D04D8u;
            return;
        }
    }
    ctx->pc = 0x1D04C4u;
    // 0x1d04c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d04c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d04cc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1d04ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d04d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D04D0u;
    {
        const bool branch_taken_0x1d04d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04d0) {
            ctx->pc = 0x1D04E8u;
            return;
        }
    }
    ctx->pc = 0x1D04D8u;
}
