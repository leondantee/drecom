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

// Function: entry_002c76cc
// Address: 0x2c76cc - 0x2c77c0
void entry_002c76cc_0x2c76cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c76cc_0x2c76cc");
#endif

    switch (ctx->pc) {
        case 0x2c76f8u: goto label_2c76f8;
        case 0x2c7700u: goto label_2c7700;
        case 0x2c77b8u: goto label_2c77b8;
        default: break;
    }

    ctx->pc = 0x2c76ccu;

    // 0x2c76cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c76d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c76d4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c76d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c76d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c76d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c76dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c76dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c76e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c76e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c76e4: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c76e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c76e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c76e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c76ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c76ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c76f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C76F0u;
    SET_GPR_U32(ctx, 31, 0x2C76F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C76F0u, 0x2C76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C76F8u;
label_2c76f8:
    // 0x2c76f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C76F8u;
    SET_GPR_U32(ctx, 31, 0x2C7700u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C76F8u, 0x2C7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7700u;
label_2c7700:
    // 0x2c7700: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c7700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c7704: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2c7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2c7708: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2c7708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c770c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c7710: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c7710u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c7714: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7718: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c7718u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c771c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c771cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7720: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7724: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7728: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c7728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c772c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2c772cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2c7730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7734: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7738: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c773c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c773cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c7740: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7744: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c7744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7748: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c7748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c774c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c7750: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c7750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c7754: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c7754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c7758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c775c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7760: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7764: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2c7764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2c7768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c7768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c776c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c776cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7770: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c7770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7774: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2c7774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2c7778: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c777c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c7780: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c7780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c7784: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c7784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c7788: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c7788u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c778c: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c778cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c7790: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7790u;
    {
        const bool branch_taken_0x2c7790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7790) {
            ctx->pc = 0x2C77C0u;
            return;
        }
    }
    ctx->pc = 0x2C7798u;
    // 0x2c7798: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c7798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c779c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c779cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c77a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c77a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c77a4: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2c77a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2c77a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c77a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c77ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c77acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c77b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C77B0u;
    SET_GPR_U32(ctx, 31, 0x2C77B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C77B0u, 0x2C77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77B8u;
label_2c77b8:
    // 0x2c77b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C77B8u;
    {
        const bool branch_taken_0x2c77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c77b8) {
            ctx->pc = 0x2C77E0u;
            return;
        }
    }
    ctx->pc = 0x2C77C0u;
}
