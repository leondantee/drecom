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

// Function: entry_0029f054
// Address: 0x29f054 - 0x29f110
void entry_0029f054_0x29f054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f054_0x29f054");
#endif

    switch (ctx->pc) {
        case 0x29f090u: goto label_29f090;
        case 0x29f0c4u: goto label_29f0c4;
        default: break;
    }

    ctx->pc = 0x29f054u;

    // 0x29f054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f058: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f05c: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x29f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x29f060: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29f060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29f064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29f064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f068: 0x0  nop
    ctx->pc = 0x29f068u;
    // NOP
    // 0x29f06c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29f06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f070: 0x0  nop
    ctx->pc = 0x29f070u;
    // NOP
    // 0x29f074: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x29F074u;
    {
        const bool branch_taken_0x29f074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f074) {
            ctx->pc = 0x29F110u;
            return;
        }
    }
    ctx->pc = 0x29F07Cu;
    // 0x29f07c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f080: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x29f080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x29f084: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29f084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f088: 0xc05cd90  jal         func_173640
    ctx->pc = 0x29F088u;
    SET_GPR_U32(ctx, 31, 0x29F090u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x29F088u, 0x29F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F090u;
label_29f090:
    // 0x29f090: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29F090u;
    {
        const bool branch_taken_0x29f090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f090) {
            ctx->pc = 0x29F110u;
            return;
        }
    }
    ctx->pc = 0x29F098u;
    // 0x29f098: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29f098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f09c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0a0: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x29f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x29f0a4: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x29f0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x29f0a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29f0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29f0ac: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29f0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29f0b0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29f0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f0b4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f0b8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29f0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29f0bc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x29F0BCu;
    SET_GPR_U32(ctx, 31, 0x29F0C4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x29F0BCu, 0x29F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0C4u;
label_29f0c4:
    // 0x29f0c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29F0C4u;
    {
        const bool branch_taken_0x29f0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f0c4) {
            ctx->pc = 0x29F110u;
            return;
        }
    }
    ctx->pc = 0x29F0CCu;
    // 0x29f0cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f0d4: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x29f0d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x29f0d8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F0D8u;
    {
        const bool branch_taken_0x29f0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f0d8) {
            ctx->pc = 0x29F110u;
            return;
        }
    }
    ctx->pc = 0x29F0E0u;
    // 0x29f0e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f0e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f0ec: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29f0f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f0f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f0fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f100: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f104: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f108: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f10c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29f110u;
}
