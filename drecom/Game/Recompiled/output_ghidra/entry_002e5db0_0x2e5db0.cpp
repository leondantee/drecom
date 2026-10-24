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

// Function: entry_002e5db0
// Address: 0x2e5db0 - 0x2e5e1c
void entry_002e5db0_0x2e5db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5db0_0x2e5db0");
#endif

    switch (ctx->pc) {
        case 0x2e5dd4u: goto label_2e5dd4;
        case 0x2e5de4u: goto label_2e5de4;
        default: break;
    }

    ctx->pc = 0x2e5db0u;

    // 0x2e5db0: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x2e5db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5db4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5db8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e5db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5dbc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e5dc0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e5dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e5dc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e5dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5dc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e5dcc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E5DCCu;
    SET_GPR_U32(ctx, 31, 0x2E5DD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E5DCCu, 0x2E5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DD4u;
label_2e5dd4:
    // 0x2e5dd4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5dd8: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2e5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2e5ddc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E5DDCu;
    SET_GPR_U32(ctx, 31, 0x2E5DE4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E5DDCu, 0x2E5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DE4u;
label_2e5de4:
    // 0x2e5de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5de8: 0x0  nop
    ctx->pc = 0x2e5de8u;
    // NOP
    // 0x2e5dec: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e5df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5df4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5df8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2e5df8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e5dfc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e5e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e04: 0x0  nop
    ctx->pc = 0x2e5e04u;
    // NOP
    // 0x2e5e08: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e5e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e5e0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e10: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5e14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e5e18: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e5e18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2e5e1cu;
}
