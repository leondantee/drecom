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

// Function: entry_001353f4
// Address: 0x1353f4 - 0x135434
void entry_001353f4_0x1353f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001353f4_0x1353f4");
#endif

    switch (ctx->pc) {
        case 0x135418u: goto label_135418;
        case 0x13542cu: goto label_13542c;
        default: break;
    }

    ctx->pc = 0x1353f4u;

    // 0x1353f4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1353f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1353f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1353F8u;
    {
        const bool branch_taken_0x1353f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353f8) {
            ctx->pc = 0x135434u;
            return;
        }
    }
    ctx->pc = 0x135400u;
    // 0x135400: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135404: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x135404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135408: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x135408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13540c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x13540cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135410: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x135410u;
    SET_GPR_U32(ctx, 31, 0x135418u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x135410u, 0x135418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135418u;
label_135418:
    // 0x135418: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13541c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13541cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135420: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x135420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x135424: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x135424u;
    SET_GPR_U32(ctx, 31, 0x13542Cu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x13542Cu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13542Cu) { return; }
    ctx->pc = 0x13542Cu;
label_13542c:
    // 0x13542c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13542Cu;
    {
        const bool branch_taken_0x13542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13542c) {
            ctx->pc = 0x135460u;
            return;
        }
    }
    ctx->pc = 0x135434u;
}
