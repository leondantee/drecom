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

// Function: entry_002a1a60
// Address: 0x2a1a60 - 0x2a1b08
void entry_002a1a60_0x2a1a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1a60_0x2a1a60");
#endif

    switch (ctx->pc) {
        case 0x2a1a70u: goto label_2a1a70;
        case 0x2a1a7cu: goto label_2a1a7c;
        case 0x2a1a8cu: goto label_2a1a8c;
        case 0x2a1a98u: goto label_2a1a98;
        case 0x2a1aa4u: goto label_2a1aa4;
        case 0x2a1aecu: goto label_2a1aec;
        default: break;
    }

    ctx->pc = 0x2a1a60u;

    // 0x2a1a60: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1a64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1a68: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1A68u;
    SET_GPR_U32(ctx, 31, 0x2A1A70u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1A68u, 0x2A1A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A70u;
label_2a1a70:
    // 0x2a1a70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a74: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A1A74u;
    SET_GPR_U32(ctx, 31, 0x2A1A7Cu);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A1A74u, 0x2A1A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A7Cu;
label_2a1a7c:
    // 0x2a1a7c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1a80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1a84: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1A84u;
    SET_GPR_U32(ctx, 31, 0x2A1A8Cu);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1A84u, 0x2A1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A8Cu;
label_2a1a8c:
    // 0x2a1a8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a90: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A1A90u;
    SET_GPR_U32(ctx, 31, 0x2A1A98u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A1A90u, 0x2A1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1A98u;
label_2a1a98:
    // 0x2a1a98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1a9c: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A1A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A1AA4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A1A9Cu, 0x2A1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AA4u;
label_2a1aa4:
    // 0x2a1aa4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2a1aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1aa8: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2a1aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a1aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1ab0: 0x0  nop
    ctx->pc = 0x2a1ab0u;
    // NOP
    // 0x2a1ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a1ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1ab8: 0x0  nop
    ctx->pc = 0x2a1ab8u;
    // NOP
    // 0x2a1abc: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x2A1ABCu;
    {
        const bool branch_taken_0x2a1abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1abc) {
            ctx->pc = 0x2A1D84u;
            return;
        }
    }
    ctx->pc = 0x2A1AC4u;
    // 0x2a1ac4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ac8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1acc: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x2a1accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x2a1ad0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2a1ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2a1ad4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1ad8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1adc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a1adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1ae0: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1ae4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2A1AE4u;
    SET_GPR_U32(ctx, 31, 0x2A1AECu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2A1AE4u, 0x2A1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AECu;
label_2a1aec:
    // 0x2a1aec: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2A1AECu;
    {
        const bool branch_taken_0x2a1aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1aec) {
            ctx->pc = 0x2A1D84u;
            return;
        }
    }
    ctx->pc = 0x2A1AF4u;
    // 0x2a1af4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1af8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1afc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2a1afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1b00: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2A1B00u;
    {
        const bool branch_taken_0x2a1b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b00) {
            ctx->pc = 0x2A1D84u;
            return;
        }
    }
    ctx->pc = 0x2A1B08u;
}
