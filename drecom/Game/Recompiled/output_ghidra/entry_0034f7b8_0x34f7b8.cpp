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

// Function: entry_0034f7b8
// Address: 0x34f7b8 - 0x34f844
void entry_0034f7b8_0x34f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f7b8_0x34f7b8");
#endif

    switch (ctx->pc) {
        case 0x34f7e4u: goto label_34f7e4;
        case 0x34f7f0u: goto label_34f7f0;
        default: break;
    }

    ctx->pc = 0x34f7b8u;

    // 0x34f7b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7bc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f7c0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x34f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f7c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7c8: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x34f7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f7cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f7ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f7d0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34f7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34f7d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f7d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f7dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x34F7DCu;
    SET_GPR_U32(ctx, 31, 0x34F7E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x34F7DCu, 0x34F7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7E4u;
label_34f7e4:
    // 0x34f7e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7e8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x34F7E8u;
    SET_GPR_U32(ctx, 31, 0x34F7F0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x34F7E8u, 0x34F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F7F0u;
label_34f7f0:
    // 0x34f7f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f7f4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x34f7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x34f7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34f7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f7fc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x34f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x34f800: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34F800u;
    {
        const bool branch_taken_0x34f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f800) {
            ctx->pc = 0x34F844u;
            return;
        }
    }
    ctx->pc = 0x34F808u;
    // 0x34f808: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f80c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f810: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f814: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f818: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x34f818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34f81c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34f81cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34f820: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x34f820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x34f824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f828: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34f828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34f82c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34f830: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x34f830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x34f834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34f834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34f838: 0x0  nop
    ctx->pc = 0x34f838u;
    // NOP
    // 0x34f83c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x34f83cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34f840: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34f840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    ctx->pc = 0x34f844u;
}
