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

// Function: entry_00127d58
// Address: 0x127d58 - 0x127e04
void entry_00127d58_0x127d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127d58_0x127d58");
#endif

    switch (ctx->pc) {
        case 0x127d68u: goto label_127d68;
        default: break;
    }

    ctx->pc = 0x127d58u;

    // 0x127d58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127d5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127d60: 0xc05d25c  jal         func_174970
    ctx->pc = 0x127D60u;
    SET_GPR_U32(ctx, 31, 0x127D68u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127D60u, 0x127D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127D68u;
label_127d68:
    // 0x127d68: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x127D68u;
    {
        const bool branch_taken_0x127d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d68) {
            ctx->pc = 0x127E40u;
            return;
        }
    }
    ctx->pc = 0x127D70u;
    // 0x127d70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127d74: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127d78: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127d7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127d80: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127d84: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127d84u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127d88: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127d88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x127d8c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x127d8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127d90: 0x0  nop
    ctx->pc = 0x127d90u;
    // NOP
    // 0x127d94: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x127D94u;
    {
        const bool branch_taken_0x127d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127d94) {
            ctx->pc = 0x127E40u;
            return;
        }
    }
    ctx->pc = 0x127D9Cu;
    // 0x127d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127da0: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127da4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127da8: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127da8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127dac: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127db4: 0x0  nop
    ctx->pc = 0x127db4u;
    // NOP
    // 0x127db8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x127db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x127dbc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x127dbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127dc0: 0x0  nop
    ctx->pc = 0x127dc0u;
    // NOP
    // 0x127dc4: 0x4501001e  bc1t        . + 4 + (0x1E << 2)
    ctx->pc = 0x127DC4u;
    {
        const bool branch_taken_0x127dc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127dc4) {
            ctx->pc = 0x127E40u;
            return;
        }
    }
    ctx->pc = 0x127DCCu;
    // 0x127dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127dd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127dd4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127dd8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x127dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x127ddc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127de0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127de4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127de8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127dec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127df0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127df0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127df4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127df8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x127dfc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x127DFCu;
    {
        const bool branch_taken_0x127dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127dfc) {
            ctx->pc = 0x127E40u;
            return;
        }
    }
    ctx->pc = 0x127E04u;
}
