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

// Function: entry_001259bc
// Address: 0x1259bc - 0x125a60
void entry_001259bc_0x1259bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001259bc_0x1259bc");
#endif

    switch (ctx->pc) {
        case 0x1259ccu: goto label_1259cc;
        default: break;
    }

    ctx->pc = 0x1259bcu;

    // 0x1259bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1259bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1259c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1259c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1259c4: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1259C4u;
    SET_GPR_U32(ctx, 31, 0x1259CCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1259C4u, 0x1259CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1259CCu;
label_1259cc:
    // 0x1259cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1259CCu;
    {
        const bool branch_taken_0x1259cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1259cc) {
            ctx->pc = 0x125A60u;
            return;
        }
    }
    ctx->pc = 0x1259D4u;
    // 0x1259d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1259d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1259d8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1259d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1259dc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1259dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1259e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1259e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1259e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1259e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1259e8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1259e8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1259ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1259ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1259f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1259f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1259f4: 0x0  nop
    ctx->pc = 0x1259f4u;
    // NOP
    // 0x1259f8: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1259F8u;
    {
        const bool branch_taken_0x1259f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1259f8) {
            ctx->pc = 0x125A60u;
            return;
        }
    }
    ctx->pc = 0x125A00u;
    // 0x125a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125a04: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x125a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x125a08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x125a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x125a0c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x125a0cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125a10: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x125a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x125a14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125a18: 0x0  nop
    ctx->pc = 0x125a18u;
    // NOP
    // 0x125a1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x125a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x125a20: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x125a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125a24: 0x0  nop
    ctx->pc = 0x125a24u;
    // NOP
    // 0x125a28: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x125A28u;
    {
        const bool branch_taken_0x125a28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x125a28) {
            ctx->pc = 0x125A60u;
            return;
        }
    }
    ctx->pc = 0x125A30u;
    // 0x125a30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125a34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125a38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125a3c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x125a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x125a40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125a44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125a48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125a4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125a50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125a54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125a54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125a58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125a5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x125a60u;
}
