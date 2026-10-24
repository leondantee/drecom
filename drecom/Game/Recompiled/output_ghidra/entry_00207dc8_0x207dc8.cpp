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

// Function: entry_00207dc8
// Address: 0x207dc8 - 0x207e78
void entry_00207dc8_0x207dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207dc8_0x207dc8");
#endif

    ctx->pc = 0x207dc8u;

    // 0x207dc8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207dcc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x207dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x207dd0: 0x244207c0  addiu       $v0, $v0, 0x7C0
    ctx->pc = 0x207dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x207dd4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207dd8: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x207dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x207ddc: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x207ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x207de0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x207de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x207de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207de8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207dec: 0xe42092f0  swc1        $f0, -0x6D10($at)
    ctx->pc = 0x207decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F0u, _value); } while (0); }
    // 0x207df0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207df4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x207df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x207df8: 0xc44107f4  lwc1        $f1, 0x7F4($v0)
    ctx->pc = 0x207df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207dfc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x207dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x207e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207e04: 0x0  nop
    ctx->pc = 0x207e04u;
    // NOP
    // 0x207e08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x207e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x207e0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x207e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x207e10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e14: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x207e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x207e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207e1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e20: 0xe42092f8  swc1        $f0, -0x6D08($at)
    ctx->pc = 0x207e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F8u, _value); } while (0); }
    // 0x207e24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x207e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x207e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207e2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e30: 0xe42092fc  swc1        $f0, -0x6D04($at)
    ctx->pc = 0x207e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192FCu, _value); } while (0); }
    // 0x207e34: 0x3c0244da  lui         $v0, 0x44DA
    ctx->pc = 0x207e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17626 << 16));
    // 0x207e38: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x207e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x207e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207e40: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e44: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x207e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x207e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207e4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e50: 0xa4229304  sh          $v0, -0x6CFC($at)
    ctx->pc = 0x207e50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x207e54: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e58: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x207e58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x207e5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207e60: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x207e60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x207e64: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207e68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207e6c: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x207e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x207e70: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x207E70u;
    SET_GPR_U32(ctx, 31, 0x207E78u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x207E70u, 0x207E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E78u;
}
