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

// Function: entry_00208f0c
// Address: 0x208f0c - 0x208f90
void entry_00208f0c_0x208f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208f0c_0x208f0c");
#endif

    switch (ctx->pc) {
        case 0x208f78u: goto label_208f78;
        case 0x208f88u: goto label_208f88;
        default: break;
    }

    ctx->pc = 0x208f0cu;

    // 0x208f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208f10: 0x0  nop
    ctx->pc = 0x208f10u;
    // NOP
    // 0x208f14: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x208f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208f1c: 0x0  nop
    ctx->pc = 0x208f1cu;
    // NOP
    // 0x208f20: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x208f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208f28: 0x0  nop
    ctx->pc = 0x208f28u;
    // NOP
    // 0x208f2c: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x208f30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208f34: 0x24429430  addiu       $v0, $v0, -0x6BD0
    ctx->pc = 0x208f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939696));
    // 0x208f38: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208f38u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x619430u));
    // 0x208f3c: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x208f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x208f40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208f40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x208f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208f48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208f4c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x208f4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x208f50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x208f54: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x208f54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x208f58: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x208f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x208f5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x208f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x208f60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x208f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x208f64: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x208f64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x208f68: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x208f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x208f6c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x208f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x208f70: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x208F70u;
    SET_GPR_U32(ctx, 31, 0x208F78u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x208F70u, 0x208F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F78u;
label_208f78:
    // 0x208f78: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x208f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x208f7c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x208f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x208f80: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x208F80u;
    SET_GPR_U32(ctx, 31, 0x208F88u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x208F80u, 0x208F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208F88u;
label_208f88:
    // 0x208f88: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x208F88u;
    {
        const bool branch_taken_0x208f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f88) {
            ctx->pc = 0x209030u;
            return;
        }
    }
    ctx->pc = 0x208F90u;
}
