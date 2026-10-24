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

// Function: entry_00127ebc
// Address: 0x127ebc - 0x127f68
void entry_00127ebc_0x127ebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127ebc_0x127ebc");
#endif

    switch (ctx->pc) {
        case 0x127eccu: goto label_127ecc;
        default: break;
    }

    ctx->pc = 0x127ebcu;

    // 0x127ebc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x127ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127ec4: 0xc05d25c  jal         func_174970
    ctx->pc = 0x127EC4u;
    SET_GPR_U32(ctx, 31, 0x127ECCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x127EC4u, 0x127ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127ECCu;
label_127ecc:
    // 0x127ecc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x127ECCu;
    {
        const bool branch_taken_0x127ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127ecc) {
            ctx->pc = 0x127F68u;
            return;
        }
    }
    ctx->pc = 0x127ED4u;
    // 0x127ed4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127ed8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127edc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127ee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x127ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x127ee4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127ee8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x127ee8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x127eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x127eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x127ef0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x127ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127ef4: 0x0  nop
    ctx->pc = 0x127ef4u;
    // NOP
    // 0x127ef8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x127EF8u;
    {
        const bool branch_taken_0x127ef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x127ef8) {
            ctx->pc = 0x127F68u;
            return;
        }
    }
    ctx->pc = 0x127F00u;
    // 0x127f00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127f04: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x127f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x127f08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x127f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x127f0c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x127f0cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x127f10: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x127f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x127f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x127f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x127f18: 0x0  nop
    ctx->pc = 0x127f18u;
    // NOP
    // 0x127f1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x127f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x127f20: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x127f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x127f24: 0x0  nop
    ctx->pc = 0x127f24u;
    // NOP
    // 0x127f28: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x127F28u;
    {
        const bool branch_taken_0x127f28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x127f28) {
            ctx->pc = 0x127F68u;
            return;
        }
    }
    ctx->pc = 0x127F30u;
    // 0x127f30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127f34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127f38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127f3c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x127f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x127f40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127f44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127f48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127f4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127f50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127f54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127f58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127f5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x127f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x127f60: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x127F60u;
    {
        const bool branch_taken_0x127f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127f60) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x127F68u;
}
