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

// Function: entry_0012e7e0
// Address: 0x12e7e0 - 0x12e81c
void entry_0012e7e0_0x12e7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e7e0_0x12e7e0");
#endif

    switch (ctx->pc) {
        case 0x12e804u: goto label_12e804;
        case 0x12e810u: goto label_12e810;
        default: break;
    }

    ctx->pc = 0x12e7e0u;

    // 0x12e7e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e7e4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12e7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12e7e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12e7ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x12e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x12e7f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12E7F0u;
    {
        const bool branch_taken_0x12e7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e7f0) {
            ctx->pc = 0x12E81Cu;
            return;
        }
    }
    ctx->pc = 0x12E7F8u;
    // 0x12e7f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e7fc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12E7FCu;
    SET_GPR_U32(ctx, 31, 0x12E804u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12E7FCu, 0x12E804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E804u;
label_12e804:
    // 0x12e804: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12e804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12e808: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12E808u;
    SET_GPR_U32(ctx, 31, 0x12E810u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12E808u, 0x12E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E810u;
label_12e810:
    // 0x12e810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12e814: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x12e814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12e818: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12e818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x12e81cu;
}
