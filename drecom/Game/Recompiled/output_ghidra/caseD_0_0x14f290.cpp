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

// Function: caseD_0
// Address: 0x14f290 - 0x14f2c4
void caseD_0_0x14f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14f290");
#endif

    switch (ctx->pc) {
        case 0x14f2bcu: goto label_14f2bc;
        default: break;
    }

    ctx->pc = 0x14f290u;

    // 0x14f290: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x14f290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x14f294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f298: 0x0  nop
    ctx->pc = 0x14f298u;
    // NOP
    // 0x14f29c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x14f29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x14f2a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14f2a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14f2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14f2a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x14f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f2ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14f2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14f2b0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x14f2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14f2b4: 0xc0bbca0  jal         func_2EF280
    ctx->pc = 0x14F2B4u;
    SET_GPR_U32(ctx, 31, 0x14F2BCu);
    ctx->pc = 0x2EF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF280u, 0x14F2B4u, 0x14F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2BCu;
label_14f2bc:
    // 0x14f2bc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x14F2BCu;
    {
        const bool branch_taken_0x14f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f2bc) {
            ctx->pc = 0x14F3C8u;
            return;
        }
    }
    ctx->pc = 0x14F2C4u;
}
