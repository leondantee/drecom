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

// Function: entry_002c6678
// Address: 0x2c6678 - 0x2c6734
void entry_002c6678_0x2c6678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c6678_0x2c6678");
#endif

    switch (ctx->pc) {
        case 0x2c6688u: goto label_2c6688;
        case 0x2c66a8u: goto label_2c66a8;
        case 0x2c66b8u: goto label_2c66b8;
        case 0x2c66c4u: goto label_2c66c4;
        case 0x2c66e4u: goto label_2c66e4;
        default: break;
    }

    ctx->pc = 0x2c6678u;

    // 0x2c6678: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c6678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c667c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c667cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6680: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C6680u;
    SET_GPR_U32(ctx, 31, 0x2C6688u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C6680u, 0x2C6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6688u;
label_2c6688:
    // 0x2c6688: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c668c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6690: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2c6690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6694: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c6694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6698: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c6698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c669c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c66a0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C66A0u;
    SET_GPR_U32(ctx, 31, 0x2C66A8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C66A0u, 0x2C66A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66A8u;
label_2c66a8:
    // 0x2c66a8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c66a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c66ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c66acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c66b0: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C66B0u;
    SET_GPR_U32(ctx, 31, 0x2C66B8u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C66B0u, 0x2C66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66B8u;
label_2c66b8:
    // 0x2c66b8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2c66b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c66bc: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C66BCu;
    SET_GPR_U32(ctx, 31, 0x2C66C4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C66BCu, 0x2C66C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66C4u;
label_2c66c4:
    // 0x2c66c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2c66c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c66c8: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x2c66c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x2c66cc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c66d0: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x2c66d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c66d4: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C66D4u;
    {
        const bool branch_taken_0x2c66d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c66d4) {
            ctx->pc = 0x2C6734u;
            return;
        }
    }
    ctx->pc = 0x2C66DCu;
    // 0x2c66dc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C66DCu;
    SET_GPR_U32(ctx, 31, 0x2C66E4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C66DCu, 0x2C66E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66E4u;
label_2c66e4:
    // 0x2c66e4: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2c66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2c66e8: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2c66e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2c66ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c66ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c66f0: 0x0  nop
    ctx->pc = 0x2c66f0u;
    // NOP
    // 0x2c66f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c66f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c66f8: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c66f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c66fc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c66fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6700: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x2c6700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6704: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2c6704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2c6708: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c6708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c670c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2c670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6710: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6714: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x2c6714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c6718: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c671c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6720: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x2c6720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6724: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6728: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c6728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c672c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6730: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2c6730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    ctx->pc = 0x2c6734u;
}
