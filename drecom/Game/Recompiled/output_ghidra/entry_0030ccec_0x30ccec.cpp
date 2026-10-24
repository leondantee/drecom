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

// Function: entry_0030ccec
// Address: 0x30ccec - 0x30cd74
void entry_0030ccec_0x30ccec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030ccec_0x30ccec");
#endif

    switch (ctx->pc) {
        case 0x30cd0cu: goto label_30cd0c;
        case 0x30cd2cu: goto label_30cd2c;
        case 0x30cd4cu: goto label_30cd4c;
        default: break;
    }

    ctx->pc = 0x30ccecu;

    // 0x30ccec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccf0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ccf4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30ccf8: 0x24065a01  addiu       $a2, $zero, 0x5A01
    ctx->pc = 0x30ccf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x30ccfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30ccfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cd00: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30cd00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30cd04: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30CD04u;
    SET_GPR_U32(ctx, 31, 0x30CD0Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30CD04u, 0x30CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD0Cu;
label_30cd0c:
    // 0x30cd0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd10: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cd14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd18: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x30cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x30cd1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x30cd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30cd20: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x30cd20u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30cd24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30CD24u;
    SET_GPR_U32(ctx, 31, 0x30CD2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30CD24u, 0x30CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD2Cu;
label_30cd2c:
    // 0x30cd2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x30cd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x30cd34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd38: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x30cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x30cd3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd40: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x30cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cd44: 0xc0c3640  jal         func_30D900
    ctx->pc = 0x30CD44u;
    SET_GPR_U32(ctx, 31, 0x30CD4Cu);
    ctx->pc = 0x30D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D900u, 0x30CD44u, 0x30CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CD4Cu;
label_30cd4c:
    // 0x30cd4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd50: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x30cd50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30cd54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cd58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd5c: 0x8c421310  lw          $v0, 0x1310($v0)
    ctx->pc = 0x30cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x30cd60: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x30cd60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x30cd64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30cd68: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30cd68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30cd6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30cd70: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30cd70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30cd74u;
}
