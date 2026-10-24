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

// Function: caseD_1
// Address: 0x303e28 - 0x303eec
void caseD_1_0x303e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x303e28");
#endif

    switch (ctx->pc) {
        case 0x303e54u: goto label_303e54;
        case 0x303e68u: goto label_303e68;
        case 0x303e80u: goto label_303e80;
        case 0x303e8cu: goto label_303e8c;
        case 0x303e9cu: goto label_303e9c;
        case 0x303ea8u: goto label_303ea8;
        default: break;
    }

    ctx->pc = 0x303e28u;

    // 0x303e28: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x303e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x303e2c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x303e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x303e30: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x303e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x303e34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303e38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303e3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303e40: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x303e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x303e44: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x303e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303e48: 0xc44d1264  lwc1        $f13, 0x1264($v0)
    ctx->pc = 0x303e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x303e4c: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x303E4Cu;
    SET_GPR_U32(ctx, 31, 0x303E54u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x303E4Cu, 0x303E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E54u;
label_303e54:
    // 0x303e54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303e58: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x303e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303e5c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x303e5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303e60: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x303E60u;
    SET_GPR_U32(ctx, 31, 0x303E68u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x303E60u, 0x303E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E68u;
label_303e68:
    // 0x303e68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303e6c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x303e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x303e70: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303e74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303e74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303e78: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x303E78u;
    SET_GPR_U32(ctx, 31, 0x303E80u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303E78u, 0x303E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E80u;
label_303e80:
    // 0x303e80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303e84: 0xc05cd10  jal         func_173440
    ctx->pc = 0x303E84u;
    SET_GPR_U32(ctx, 31, 0x303E8Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x303E84u, 0x303E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E8Cu;
label_303e8c:
    // 0x303e8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303e90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x303e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x303e94: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x303E94u;
    SET_GPR_U32(ctx, 31, 0x303E9Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x303E94u, 0x303E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303E9Cu;
label_303e9c:
    // 0x303e9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303ea0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x303EA0u;
    SET_GPR_U32(ctx, 31, 0x303EA8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x303EA0u, 0x303EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303EA8u;
label_303ea8:
    // 0x303ea8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303eac: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x303eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x303eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x303eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x303eb4: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x303eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x303eb8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x303eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x303ebc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x303ebcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x303ec0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x303ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x303ec4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x303ec4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x303ec8: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x303ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x303ecc: 0x142000b9  bnez        $at, . + 4 + (0xB9 << 2)
    ctx->pc = 0x303ECCu;
    {
        const bool branch_taken_0x303ecc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x303ecc) {
            ctx->pc = 0x3041B4u;
            return;
        }
    }
    ctx->pc = 0x303ED4u;
    // 0x303ed4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303ed8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x303ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x303edc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x303edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x303ee0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x303ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x303ee4: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x303EE4u;
    {
        const bool branch_taken_0x303ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303ee4) {
            ctx->pc = 0x3041B4u;
            return;
        }
    }
    ctx->pc = 0x303EECu;
}
