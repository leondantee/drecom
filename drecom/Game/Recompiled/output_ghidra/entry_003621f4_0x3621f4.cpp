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

// Function: entry_003621f4
// Address: 0x3621f4 - 0x362240
void entry_003621f4_0x3621f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003621f4_0x3621f4");
#endif

    switch (ctx->pc) {
        case 0x3621fcu: goto label_3621fc;
        case 0x362230u: goto label_362230;
        case 0x36223cu: goto label_36223c;
        default: break;
    }

    ctx->pc = 0x3621f4u;

    // 0x3621f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3621F4u;
    SET_GPR_U32(ctx, 31, 0x3621FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3621F4u, 0x3621FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621FCu;
label_3621fc:
    // 0x3621fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3621fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x362200: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x362200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x362204: 0x0  nop
    ctx->pc = 0x362204u;
    // NOP
    // 0x362208: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x362208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36220c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x36220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362210: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x362210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x362214: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x362214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x362218: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x362218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x36221c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36221cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362220: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x362220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x362224: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x362224u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362228: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x362228u;
    SET_GPR_U32(ctx, 31, 0x362230u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x362228u, 0x362230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362230u;
label_362230:
    // 0x362230: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x362230u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x362234: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x362234u;
    SET_GPR_U32(ctx, 31, 0x36223Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x362234u, 0x36223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36223Cu;
label_36223c:
    // 0x36223c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36223cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x362240u;
}
