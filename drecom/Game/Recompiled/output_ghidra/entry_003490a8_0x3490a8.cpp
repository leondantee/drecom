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

// Function: entry_003490a8
// Address: 0x3490a8 - 0x34910c
void entry_003490a8_0x3490a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003490a8_0x3490a8");
#endif

    switch (ctx->pc) {
        case 0x3490b8u: goto label_3490b8;
        default: break;
    }

    ctx->pc = 0x3490a8u;

    // 0x3490a8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x3490a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3490acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3490b0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3490B0u;
    SET_GPR_U32(ctx, 31, 0x3490B8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3490B0u, 0x3490B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490B8u;
label_3490b8:
    // 0x3490b8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3490b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490bc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3490bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3490c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3490c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3490c4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3490c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3490c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3490C8u;
    {
        const bool branch_taken_0x3490c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3490c8) {
            ctx->pc = 0x34910Cu;
            return;
        }
    }
    ctx->pc = 0x3490D0u;
    // 0x3490d0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3490d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3490d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3490d8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3490d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3490dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3490dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490e0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x3490e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3490e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3490e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3490e8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x3490e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x3490ec: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3490ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3490f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x3490f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3490f4: 0x3c023f6b  lui         $v0, 0x3F6B
    ctx->pc = 0x3490f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16235 << 16));
    // 0x3490f8: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x3490f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x3490fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3490fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349100: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x349100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349104: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x349104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349108: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x349108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x34910cu;
}
