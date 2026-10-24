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

// Function: entry_002dfd08
// Address: 0x2dfd08 - 0x2dfd68
void entry_002dfd08_0x2dfd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfd08_0x2dfd08");
#endif

    switch (ctx->pc) {
        case 0x2dfd18u: goto label_2dfd18;
        case 0x2dfd24u: goto label_2dfd24;
        default: break;
    }

    ctx->pc = 0x2dfd08u;

    // 0x2dfd08: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfd0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dfd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dfd10: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DFD10u;
    SET_GPR_U32(ctx, 31, 0x2DFD18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DFD10u, 0x2DFD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD18u;
label_2dfd18:
    // 0x2dfd18: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfd1c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DFD1Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD24u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DFD1Cu, 0x2DFD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFD24u;
label_2dfd24:
    // 0x2dfd24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfd28: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x2dfd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dfd2c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2dfd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2dfd30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dfd30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dfd34: 0x0  nop
    ctx->pc = 0x2dfd34u;
    // NOP
    // 0x2dfd38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dfd38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dfd3c: 0x0  nop
    ctx->pc = 0x2dfd3cu;
    // NOP
    // 0x2dfd40: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2DFD40u;
    {
        const bool branch_taken_0x2dfd40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dfd40) {
            ctx->pc = 0x2DFD68u;
            return;
        }
    }
    ctx->pc = 0x2DFD48u;
    // 0x2dfd48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dfd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfd4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2dfd4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2dfd50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DFD50u;
    {
        const bool branch_taken_0x2dfd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfd50) {
            ctx->pc = 0x2DFD68u;
            return;
        }
    }
    ctx->pc = 0x2DFD58u;
    // 0x2dfd58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfd5c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x2dfd5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2dfd60: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dfd64: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2dfd64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2dfd68u;
}
