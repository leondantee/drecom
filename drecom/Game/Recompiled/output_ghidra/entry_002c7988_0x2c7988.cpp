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

// Function: entry_002c7988
// Address: 0x2c7988 - 0x2c7a8c
void entry_002c7988_0x2c7988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7988_0x2c7988");
#endif

    switch (ctx->pc) {
        case 0x2c79b4u: goto label_2c79b4;
        case 0x2c79d0u: goto label_2c79d0;
        case 0x2c79e8u: goto label_2c79e8;
        case 0x2c79f4u: goto label_2c79f4;
        case 0x2c7a04u: goto label_2c7a04;
        case 0x2c7a10u: goto label_2c7a10;
        default: break;
    }

    ctx->pc = 0x2c7988u;

    // 0x2c7988: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c7988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c798c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c798cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7990: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x2c7990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x2c7994: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x2c7994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x2c7998: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c7998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c799c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c799cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c79a0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c79a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c79a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c79a8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c79a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c79ac: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C79ACu;
    SET_GPR_U32(ctx, 31, 0x2C79B4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C79ACu, 0x2C79B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79B4u;
label_2c79b4:
    // 0x2c79b4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c79b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2c79b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79bc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c79bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c79c0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c79c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c79c4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c79c4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c79c8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C79C8u;
    SET_GPR_U32(ctx, 31, 0x2C79D0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C79C8u, 0x2C79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79D0u;
label_2c79d0:
    // 0x2c79d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c79d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2c79d8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c79d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79dc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2c79dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c79e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C79E0u;
    SET_GPR_U32(ctx, 31, 0x2C79E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C79E0u, 0x2C79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79E8u;
label_2c79e8:
    // 0x2c79e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c79e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79ec: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2C79ECu;
    SET_GPR_U32(ctx, 31, 0x2C79F4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2C79ECu, 0x2C79F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C79F4u;
label_2c79f4:
    // 0x2c79f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c79f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c79f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c79fc: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C79FCu;
    SET_GPR_U32(ctx, 31, 0x2C7A04u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C79FCu, 0x2C7A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A04u;
label_2c7a04:
    // 0x2c7a04: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c7a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a08: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2C7A08u;
    SET_GPR_U32(ctx, 31, 0x2C7A10u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2C7A08u, 0x2C7A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7A10u;
label_2c7a10:
    // 0x2c7a10: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a14: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2c7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2c7a18: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2c7a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2c7a1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c7a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7a20: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2c7a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7a24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c7a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c7a28: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2c7a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2c7a2c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7a34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c7a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7a38: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C7A38u;
    {
        const bool branch_taken_0x2c7a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7a38) {
            ctx->pc = 0x2C7A8Cu;
            return;
        }
    }
    ctx->pc = 0x2C7A40u;
    // 0x2c7a40: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2c7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2c7a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7a48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a4c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2c7a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2c7a50: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7a54: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c7a58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7a5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a60: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c7a60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7a64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a68: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c7a68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7a6c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a70: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c7a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7a74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c7a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c7a7c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2c7a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c7a80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c7a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c7a84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7a88: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2c7a88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2c7a8cu;
}
