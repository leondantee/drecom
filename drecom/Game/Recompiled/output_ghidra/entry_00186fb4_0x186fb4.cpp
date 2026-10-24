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

// Function: entry_00186fb4
// Address: 0x186fb4 - 0x187018
void entry_00186fb4_0x186fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186fb4_0x186fb4");
#endif

    switch (ctx->pc) {
        case 0x186fd8u: goto label_186fd8;
        case 0x186ff0u: goto label_186ff0;
        case 0x18700cu: goto label_18700c;
        default: break;
    }

    ctx->pc = 0x186fb4u;

    // 0x186fb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x186fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186fbc: 0x0  nop
    ctx->pc = 0x186fbcu;
    // NOP
    // 0x186fc0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x186fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x186fc4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x186fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x186fc8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x186fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x186fcc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x186fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x186fd0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x186FD0u;
    SET_GPR_U32(ctx, 31, 0x186FD8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x186FD8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x186FD8u) { return; }
    ctx->pc = 0x186FD8u;
label_186fd8:
    // 0x186fd8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x186fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x186fdc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x186fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186fe0: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x186fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x186fe4: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x186fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x186fe8: 0xc05aa7c  jal         func_16A9F0
    ctx->pc = 0x186FE8u;
    SET_GPR_U32(ctx, 31, 0x186FF0u);
    ctx->pc = 0x16A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A9F0u, 0x186FE8u, 0x186FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186FF0u;
label_186ff0:
    // 0x186ff0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x186ff0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x186ff4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x186FF4u;
    {
        const bool branch_taken_0x186ff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ff4) {
            ctx->pc = 0x187018u;
            return;
        }
    }
    ctx->pc = 0x186FFCu;
    // 0x186ffc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x186ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x187000: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x187000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x187004: 0xc040c9e  jal         func_103278
    ctx->pc = 0x187004u;
    SET_GPR_U32(ctx, 31, 0x18700Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x18700Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18700Cu) { return; }
    ctx->pc = 0x18700Cu;
label_18700c:
    // 0x18700c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18700cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x187010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187010u;
    {
        const bool branch_taken_0x187010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187010) {
            ctx->pc = 0x18701Cu;
            return;
        }
    }
    ctx->pc = 0x187018u;
}
