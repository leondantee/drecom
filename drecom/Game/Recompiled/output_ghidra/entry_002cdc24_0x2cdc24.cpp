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

// Function: entry_002cdc24
// Address: 0x2cdc24 - 0x2cdce8
void entry_002cdc24_0x2cdc24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cdc24_0x2cdc24");
#endif

    switch (ctx->pc) {
        case 0x2cdc50u: goto label_2cdc50;
        case 0x2cdc6cu: goto label_2cdc6c;
        case 0x2cdc84u: goto label_2cdc84;
        case 0x2cdc90u: goto label_2cdc90;
        case 0x2cdca0u: goto label_2cdca0;
        case 0x2cdcacu: goto label_2cdcac;
        default: break;
    }

    ctx->pc = 0x2cdc24u;

    // 0x2cdc24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc2c: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x2cdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x2cdc30: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2cdc30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2cdc34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2cdc34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2cdc38: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cdc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cdc3c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2cdc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cdc40: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2cdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2cdc44: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2cdc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2cdc48: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CDC48u;
    SET_GPR_U32(ctx, 31, 0x2CDC50u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CDC48u, 0x2CDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC50u;
label_2cdc50:
    // 0x2cdc50: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2cdc50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2cdc54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc58: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2cdc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cdc5c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2cdc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdc60: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2cdc60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cdc64: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CDC64u;
    SET_GPR_U32(ctx, 31, 0x2CDC6Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CDC64u, 0x2CDC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC6Cu;
label_2cdc6c:
    // 0x2cdc6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc70: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2cdc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2cdc74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc78: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cdc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cdc7c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CDC7Cu;
    SET_GPR_U32(ctx, 31, 0x2CDC84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CDC7Cu, 0x2CDC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC84u;
label_2cdc84:
    // 0x2cdc84: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdc84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc88: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2CDC88u;
    SET_GPR_U32(ctx, 31, 0x2CDC90u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2CDC88u, 0x2CDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDC90u;
label_2cdc90:
    // 0x2cdc90: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdc94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cdc94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cdc98: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CDC98u;
    SET_GPR_U32(ctx, 31, 0x2CDCA0u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CDC98u, 0x2CDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCA0u;
label_2cdca0:
    // 0x2cdca0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdca4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CDCA4u;
    SET_GPR_U32(ctx, 31, 0x2CDCACu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CDCA4u, 0x2CDCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDCACu;
label_2cdcac:
    // 0x2cdcac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdcb0: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cdcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cdcb4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cdcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cdcb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cdcb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cdcbc: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cdcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cdcc0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cdcc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cdcc4: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2cdcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2cdcc8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cdcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdccc: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2cdcccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2cdcd0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CDCD0u;
    {
        const bool branch_taken_0x2cdcd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdcd0) {
            ctx->pc = 0x2CDCE8u;
            return;
        }
    }
    ctx->pc = 0x2CDCD8u;
    // 0x2cdcd8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cdcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cdcdc: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x2cdcdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x2cdce0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cdce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cdce4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x2cdce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2cdce8u;
}
