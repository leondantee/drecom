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

// Function: entry_0012ee08
// Address: 0x12ee08 - 0x12ee48
void entry_0012ee08_0x12ee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ee08_0x12ee08");
#endif

    switch (ctx->pc) {
        case 0x12ee24u: goto label_12ee24;
        case 0x12ee34u: goto label_12ee34;
        default: break;
    }

    ctx->pc = 0x12ee08u;

    // 0x12ee08: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x12ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x12ee0c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12ee10: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x12ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x12ee14: 0x24450570  addiu       $a1, $v0, 0x570
    ctx->pc = 0x12ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x12ee18: 0x26061200  addiu       $a2, $s0, 0x1200
    ctx->pc = 0x12ee18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x12ee1c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12EE1Cu;
    SET_GPR_U32(ctx, 31, 0x12EE24u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12EE1Cu, 0x12EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE24u;
label_12ee24:
    // 0x12ee24: 0xc7ac0130  lwc1        $f12, 0x130($sp)
    ctx->pc = 0x12ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ee28: 0xc7ad0138  lwc1        $f13, 0x138($sp)
    ctx->pc = 0x12ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12ee2c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x12EE2Cu;
    SET_GPR_U32(ctx, 31, 0x12EE34u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x12EE2Cu, 0x12EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE34u;
label_12ee34:
    // 0x12ee34: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x12ee34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x12ee38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ee3c: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x12ee3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x12ee40: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12ee40u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x12ee44: 0x0  nop
    ctx->pc = 0x12ee44u;
    // NOP
    ctx->pc = 0x12ee48u;
}
