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

// Function: entry_00135460
// Address: 0x135460 - 0x135498
void entry_00135460_0x135460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135460_0x135460");
#endif

    switch (ctx->pc) {
        case 0x13546cu: goto label_13546c;
        case 0x135490u: goto label_135490;
        default: break;
    }

    ctx->pc = 0x135460u;

    // 0x135460: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135464: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x135464u;
    SET_GPR_U32(ctx, 31, 0x13546Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x135464u, 0x13546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13546Cu;
label_13546c:
    // 0x13546c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x13546cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x135470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135474: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x135474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135478: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x135478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x13547c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x13547cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135480: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135484: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x135484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135488: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x135488u;
    SET_GPR_U32(ctx, 31, 0x135490u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x135490u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135490u) { return; }
    ctx->pc = 0x135490u;
label_135490:
    // 0x135490: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x135490u;
    {
        const bool branch_taken_0x135490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135490) {
            ctx->pc = 0x1354E0u;
            return;
        }
    }
    ctx->pc = 0x135498u;
}
