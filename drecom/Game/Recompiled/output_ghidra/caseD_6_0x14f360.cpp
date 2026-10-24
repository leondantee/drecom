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

// Function: caseD_6
// Address: 0x14f360 - 0x14f398
void caseD_6_0x14f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x14f360");
#endif

    switch (ctx->pc) {
        case 0x14f390u: goto label_14f390;
        default: break;
    }

    ctx->pc = 0x14f360u;

    // 0x14f360: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x14f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x14f364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f368: 0x0  nop
    ctx->pc = 0x14f368u;
    // NOP
    // 0x14f36c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x14f36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14f370: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x14f370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x14f374: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x14f374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f378: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14f378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f37c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x14f37cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14f380: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x14f380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x14f384: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f388: 0xc0bbca0  jal         func_2EF280
    ctx->pc = 0x14F388u;
    SET_GPR_U32(ctx, 31, 0x14F390u);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F388u, 0x14F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F390u;
label_14f390:
    // 0x14f390: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F390u;
    {
        const bool branch_taken_0x14f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f390) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F398u;
}
