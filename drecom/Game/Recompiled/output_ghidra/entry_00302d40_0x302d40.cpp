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

// Function: entry_00302d40
// Address: 0x302d40 - 0x302ddc
void entry_00302d40_0x302d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302d40_0x302d40");
#endif

    switch (ctx->pc) {
        case 0x302d60u: goto label_302d60;
        case 0x302d80u: goto label_302d80;
        case 0x302da0u: goto label_302da0;
        default: break;
    }

    ctx->pc = 0x302d40u;

    // 0x302d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x302d4c: 0x24061402  addiu       $a2, $zero, 0x1402
    ctx->pc = 0x302d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5122));
    // 0x302d50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x302d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302d54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x302d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302d58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302D58u;
    SET_GPR_U32(ctx, 31, 0x302D60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302D58u, 0x302D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D60u;
label_302d60:
    // 0x302d60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d64: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x302d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302d68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d6c: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x302d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x302d70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x302d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x302d74: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x302d74u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x302d78: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x302D78u;
    SET_GPR_U32(ctx, 31, 0x302D80u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x302D78u, 0x302D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302D80u;
label_302d80:
    // 0x302d80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d84: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x302d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x302d88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d8c: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x302d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x302d90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302d94: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x302d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302d98: 0xc0c2038  jal         func_3080E0
    ctx->pc = 0x302D98u;
    SET_GPR_U32(ctx, 31, 0x302DA0u);
    ctx->pc = 0x3080E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3080E0u, 0x302D98u, 0x302DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DA0u;
label_302da0:
    // 0x302da0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302da4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x302da4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x302da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302dac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302db0: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x302db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x302db4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x302db4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x302db8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302dbc: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x302dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x302dc0: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x302dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x302dc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x302dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x302dc8: 0xac821338  sw          $v0, 0x1338($a0)
    ctx->pc = 0x302dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 2));
    // 0x302dcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302dd0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x302dd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302dd8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x302dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x302ddcu;
}
