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

// Function: caseD_2
// Address: 0x162aec - 0x162b18
void caseD_2_0x162aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x162aec");
#endif

    switch (ctx->pc) {
        case 0x162b0cu: goto label_162b0c;
        default: break;
    }

    ctx->pc = 0x162aecu;

    // 0x162aec: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162af0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x162af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x162af4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162afc: 0x0  nop
    ctx->pc = 0x162afcu;
    // NOP
    // 0x162b00: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x162b00u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x162b04: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x162B04u;
    SET_GPR_U32(ctx, 31, 0x162B0Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162B04u, 0x162B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B0Cu;
label_162b0c:
    // 0x162b0c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x162b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x162b10: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x162B10u;
    {
        const bool branch_taken_0x162b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162b10) {
            ctx->pc = 0x162B90u;
            return;
        }
    }
    ctx->pc = 0x162B18u;
}
