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

// Function: entry_001bfaec
// Address: 0x1bfaec - 0x1bfb44
void entry_001bfaec_0x1bfaec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfaec_0x1bfaec");
#endif

    switch (ctx->pc) {
        case 0x1bfb0cu: goto label_1bfb0c;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb34u: goto label_1bfb34;
        default: break;
    }

    ctx->pc = 0x1bfaecu;

    // 0x1bfaec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bfaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bfaf0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bfaf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bfaf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfaf8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bfaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bfafc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1bfafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bfb00: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1bfb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1bfb04: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BFB04u;
    SET_GPR_U32(ctx, 31, 0x1BFB0Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BFB04u, 0x1BFB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB0Cu;
label_1bfb0c:
    // 0x1bfb0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bfb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb14: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bfb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb18: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bfb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bfb1c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BFB1Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB24u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BFB1Cu, 0x1BFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB24u;
label_1bfb24:
    // 0x1bfb24: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bfb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bfb28: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bfb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bfb2c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1BFB2Cu;
    SET_GPR_U32(ctx, 31, 0x1BFB34u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1BFB2Cu, 0x1BFB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB34u;
label_1bfb34:
    // 0x1bfb34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bfb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bfb38: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bfb38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bfb3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bfb40: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bfb40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bfb44u;
}
