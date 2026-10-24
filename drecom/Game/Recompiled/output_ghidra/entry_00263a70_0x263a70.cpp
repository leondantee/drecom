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

// Function: entry_00263a70
// Address: 0x263a70 - 0x263ab8
void entry_00263a70_0x263a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263a70_0x263a70");
#endif

    switch (ctx->pc) {
        case 0x263a8cu: goto label_263a8c;
        default: break;
    }

    ctx->pc = 0x263a70u;

    // 0x263a70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263a74: 0xa7a2005a  sh          $v0, 0x5A($sp)
    ctx->pc = 0x263a74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x263a78: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x263a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x263a7c: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x263a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x263a80: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x263a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x263a84: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x263A84u;
    SET_GPR_U32(ctx, 31, 0x263A8Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x263A84u, 0x263A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A8Cu;
label_263a8c:
    // 0x263a8c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x263a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263a90: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263a94: 0xe4600190  swc1        $f0, 0x190($v1)
    ctx->pc = 0x263a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 400), bits); }
    // 0x263a98: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x263a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263a9c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263aa0: 0xe4600194  swc1        $f0, 0x194($v1)
    ctx->pc = 0x263aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 404), bits); }
    // 0x263aa4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x263aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263aa8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263aac: 0xe4600198  swc1        $f0, 0x198($v1)
    ctx->pc = 0x263aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 408), bits); }
    // 0x263ab0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x263AB0u;
    {
        const bool branch_taken_0x263ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263ab0) {
            ctx->pc = 0x263BD8u;
            return;
        }
    }
    ctx->pc = 0x263AB8u;
}
