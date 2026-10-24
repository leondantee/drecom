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

// Function: caseD_7
// Address: 0x14f398 - 0x14f3c8
void caseD_7_0x14f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x14f398");
#endif

    ctx->pc = 0x14f398u;

    // 0x14f398: 0x3c04c1a0  lui         $a0, 0xC1A0
    ctx->pc = 0x14f398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49568 << 16));
    // 0x14f39c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14f39cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f3a0: 0x0  nop
    ctx->pc = 0x14f3a0u;
    // NOP
    // 0x14f3a4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x14f3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14f3a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f3ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f3b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f3b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14f3b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x14f3b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14f3bc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f3c0: 0xc0bbca0  jal         func_2EF280
    ctx->pc = 0x14F3C0u;
    SET_GPR_U32(ctx, 31, 0x14F3C8u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F3C0u, 0x14F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3C8u;
}
