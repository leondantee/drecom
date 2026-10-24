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

// Function: caseD_3
// Address: 0x1328a8 - 0x132978
void caseD_3_0x1328a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x1328a8");
#endif

    switch (ctx->pc) {
        case 0x1328ccu: goto label_1328cc;
        case 0x1328d8u: goto label_1328d8;
        case 0x1328e8u: goto label_1328e8;
        case 0x132918u: goto label_132918;
        default: break;
    }

    ctx->pc = 0x1328a8u;

    // 0x1328a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1328a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1328ac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1328acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1328b0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1328b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1328b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1328b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1328b8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1328b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1328bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1328bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1328c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1328c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1328c4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1328C4u;
    SET_GPR_U32(ctx, 31, 0x1328CCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1328C4u, 0x1328CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328CCu;
label_1328cc:
    // 0x1328cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1328ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1328d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1328D0u;
    SET_GPR_U32(ctx, 31, 0x1328D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1328D0u, 0x1328D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328D8u;
label_1328d8:
    // 0x1328d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1328d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1328dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1328dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1328e0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1328E0u;
    SET_GPR_U32(ctx, 31, 0x1328E8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1328E0u, 0x1328E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328E8u;
label_1328e8:
    // 0x1328e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1328e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1328ec: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1328ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1328f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1328f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1328f4: 0x0  nop
    ctx->pc = 0x1328f4u;
    // NOP
    // 0x1328f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1328f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1328fc: 0x0  nop
    ctx->pc = 0x1328fcu;
    // NOP
    // 0x132900: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x132900u;
    {
        const bool branch_taken_0x132900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132900) {
            ctx->pc = 0x132978u;
            return;
        }
    }
    ctx->pc = 0x132908u;
    // 0x132908: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13290c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x13290cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x132910: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x132910u;
    SET_GPR_U32(ctx, 31, 0x132918u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x132910u, 0x132918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132918u;
label_132918:
    // 0x132918: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x132918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
    // 0x13291c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x13291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x132920: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x132920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132924: 0x0  nop
    ctx->pc = 0x132924u;
    // NOP
    // 0x132928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13292c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x13292cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x132930: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132934: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13293c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13293cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132940: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132944: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132948: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13294c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x13294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132950: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132954: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x132954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132958: 0x0  nop
    ctx->pc = 0x132958u;
    // NOP
    // 0x13295c: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x13295Cu;
    {
        const bool branch_taken_0x13295c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13295c) {
            ctx->pc = 0x132A08u;
            return;
        }
    }
    ctx->pc = 0x132964u;
    // 0x132964: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132968: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13296c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13296cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132970: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x132970u;
    {
        const bool branch_taken_0x132970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132970) {
            ctx->pc = 0x132A08u;
            return;
        }
    }
    ctx->pc = 0x132978u;
}
