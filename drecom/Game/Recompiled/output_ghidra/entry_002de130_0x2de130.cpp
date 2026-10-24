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

// Function: entry_002de130
// Address: 0x2de130 - 0x2de194
void entry_002de130_0x2de130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de130_0x2de130");
#endif

    switch (ctx->pc) {
        case 0x2de14cu: goto label_2de14c;
        case 0x2de158u: goto label_2de158;
        default: break;
    }

    ctx->pc = 0x2de130u;

    // 0x2de130: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2de130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de134: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de138: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2de138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2de13c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2de13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2de140: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x2de140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2de144: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DE144u;
    SET_GPR_U32(ctx, 31, 0x2DE14Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DE144u, 0x2DE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE14Cu;
label_2de14c:
    // 0x2de14c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2de14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2de150: 0xc067588  jal         func_19D620
    ctx->pc = 0x2DE150u;
    SET_GPR_U32(ctx, 31, 0x2DE158u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x2DE150u, 0x2DE158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE158u;
label_2de158:
    // 0x2de158: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2de158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2de15c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2de15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2de160: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2de160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2de164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2de164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2de168: 0x0  nop
    ctx->pc = 0x2de168u;
    // NOP
    // 0x2de16c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2de16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2de170: 0x0  nop
    ctx->pc = 0x2de170u;
    // NOP
    // 0x2de174: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE174u;
    {
        const bool branch_taken_0x2de174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2de174) {
            ctx->pc = 0x2DE194u;
            return;
        }
    }
    ctx->pc = 0x2DE17Cu;
    // 0x2de17c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2de17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de180: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2de180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2de184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de188: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2de188u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2de18c: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x2DE18Cu;
    {
        const bool branch_taken_0x2de18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de18c) {
            ctx->pc = 0x2DE45Cu;
            return;
        }
    }
    ctx->pc = 0x2DE194u;
}
