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

// Function: entry_00135434
// Address: 0x135434 - 0x135460
void entry_00135434_0x135434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135434_0x135434");
#endif

    switch (ctx->pc) {
        case 0x13544cu: goto label_13544c;
        default: break;
    }

    ctx->pc = 0x135434u;

    // 0x135434: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135438: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x135438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13543c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x13543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135440: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x135440u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135444: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x135444u;
    SET_GPR_U32(ctx, 31, 0x13544Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x135444u, 0x13544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13544Cu;
label_13544c:
    // 0x13544c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13544cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135450: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135454: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x135458: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x135458u;
    SET_GPR_U32(ctx, 31, 0x135460u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x135460u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135460u) { return; }
    ctx->pc = 0x135460u;
}
