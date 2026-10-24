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

// Function: entry_00155428
// Address: 0x155428 - 0x155484
void entry_00155428_0x155428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155428_0x155428");
#endif

    switch (ctx->pc) {
        case 0x15543cu: goto label_15543c;
        default: break;
    }

    ctx->pc = 0x155428u;

    // 0x155428: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15542c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15542cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x155430: 0xc44c124c  lwc1        $f12, 0x124C($v0)
    ctx->pc = 0x155430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x155434: 0xc067844  jal         func_19E110
    ctx->pc = 0x155434u;
    SET_GPR_U32(ctx, 31, 0x15543Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x155434u, 0x15543Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15543Cu;
label_15543c:
    // 0x15543c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155440: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155444: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x155444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155448: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x155448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x15544c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155450: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155454: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x155454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155458: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x155458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15545c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15545cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155460: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x155464: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x155464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x155468: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x155468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x15546c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15546cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x155470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x155470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155474: 0x0  nop
    ctx->pc = 0x155474u;
    // NOP
    // 0x155478: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x155478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x15547c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x15547Cu;
    {
        const bool branch_taken_0x15547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15547c) {
            ctx->pc = 0x15557Cu;
            return;
        }
    }
    ctx->pc = 0x155484u;
}
