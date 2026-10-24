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

// Function: entry_00246738
// Address: 0x246738 - 0x246788
void entry_00246738_0x246738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246738_0x246738");
#endif

    ctx->pc = 0x246738u;

    // 0x246738: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x246738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24673c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24673cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x246740: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x246740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x246744: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246748: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x246748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24674c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x24674cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x246750: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x246750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x246754: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x246754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x246758: 0x3450ffff  ori         $s0, $v0, 0xFFFF
    ctx->pc = 0x246758u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24675c: 0x901024  and         $v0, $a0, $s0
    ctx->pc = 0x24675cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x246760: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x246764: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x246764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x246768: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x246768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24676c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x24676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x246770: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x246770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x246774: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x246774u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246778: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x246778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x24677c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24677cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x246780: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x246780u;
    SET_GPR_U32(ctx, 31, 0x246788u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x246780u, 0x246788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246788u;
}
