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

// Function: entry_0020e504
// Address: 0x20e504 - 0x20e548
void entry_0020e504_0x20e504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e504_0x20e504");
#endif

    switch (ctx->pc) {
        case 0x20e540u: goto label_20e540;
        default: break;
    }

    ctx->pc = 0x20e504u;

    // 0x20e504: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e508: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x20e508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x20e50c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20e510: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20e510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20e514: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20E514u;
    {
        const bool branch_taken_0x20e514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e514) {
            ctx->pc = 0x20E548u;
            return;
        }
    }
    ctx->pc = 0x20E51Cu;
    // 0x20e51c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e520: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x20e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e524: 0x3c024013  lui         $v0, 0x4013
    ctx->pc = 0x20e524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16403 << 16));
    // 0x20e528: 0x34427207  ori         $v0, $v0, 0x7207
    ctx->pc = 0x20e528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29191);
    // 0x20e52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e530: 0x0  nop
    ctx->pc = 0x20e530u;
    // NOP
    // 0x20e534: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x20e534u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20e538: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x20E538u;
    SET_GPR_U32(ctx, 31, 0x20E540u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20E538u, 0x20E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E540u;
label_20e540:
    // 0x20e540: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x20e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20e544: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20e544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x20e548u;
}
