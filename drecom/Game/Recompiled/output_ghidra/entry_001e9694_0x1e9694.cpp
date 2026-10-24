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

// Function: entry_001e9694
// Address: 0x1e9694 - 0x1e9700
void entry_001e9694_0x1e9694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9694_0x1e9694");
#endif

    switch (ctx->pc) {
        case 0x1e96e8u: goto label_1e96e8;
        case 0x1e96f4u: goto label_1e96f4;
        default: break;
    }

    ctx->pc = 0x1e9694u;

    // 0x1e9694: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9698: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e9698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e969c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e96a0: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e96a4: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e96a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e96a8: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e96a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e96ac: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1e96acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1e96b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e96b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e96b4: 0x0  nop
    ctx->pc = 0x1e96b4u;
    // NOP
    // 0x1e96b8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e96b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e96bc: 0x8fa60198  lw          $a2, 0x198($sp)
    ctx->pc = 0x1e96bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e96c0: 0xc4c01204  lwc1        $f0, 0x1204($a2)
    ctx->pc = 0x1e96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e96c4: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e96c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e96c8: 0x2402170e  addiu       $v0, $zero, 0x170E
    ctx->pc = 0x1e96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e96cc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e96ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e96d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e96d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e96d4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1e96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e96d8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e96d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e96dc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e96dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e96e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E96E0u;
    SET_GPR_U32(ctx, 31, 0x1E96E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E96E0u, 0x1E96E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96E8u;
label_1e96e8:
    // 0x1e96e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e96e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e96ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E96ECu;
    SET_GPR_U32(ctx, 31, 0x1E96F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E96ECu, 0x1E96F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E96F4u;
label_1e96f4:
    // 0x1e96f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e96f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e96f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E96F8u;
    {
        const bool branch_taken_0x1e96f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e96f8) {
            ctx->pc = 0x1E9788u;
            return;
        }
    }
    ctx->pc = 0x1E9700u;
}
