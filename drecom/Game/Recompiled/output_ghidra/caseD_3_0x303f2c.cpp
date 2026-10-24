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
// Address: 0x303f2c - 0x303fdc
void caseD_3_0x303f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x303f2c");
#endif

    switch (ctx->pc) {
        case 0x303f58u: goto label_303f58;
        case 0x303f6cu: goto label_303f6c;
        case 0x303f84u: goto label_303f84;
        case 0x303f90u: goto label_303f90;
        default: break;
    }

    ctx->pc = 0x303f2cu;

    // 0x303f2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f30: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x303f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f38: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x303f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x303f3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x303f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x303f40: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x303f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x303f44: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x303f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x303f48: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x303f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x303f4c: 0xc46d1264  lwc1        $f13, 0x1264($v1)
    ctx->pc = 0x303f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x303f50: 0xc05c8f8  jal         func_1723E0
    ctx->pc = 0x303F50u;
    SET_GPR_U32(ctx, 31, 0x303F58u);
    ctx->pc = 0x1723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1723E0u, 0x303F50u, 0x303F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F58u;
label_303f58:
    // 0x303f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f5c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x303f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303f60: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x303f60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303f64: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x303F64u;
    SET_GPR_U32(ctx, 31, 0x303F6Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x303F64u, 0x303F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F6Cu;
label_303f6c:
    // 0x303f6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f70: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x303f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x303f74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x303f78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x303f7c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x303F7Cu;
    SET_GPR_U32(ctx, 31, 0x303F84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x303F7Cu, 0x303F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F84u;
label_303f84:
    // 0x303f84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x303f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f88: 0xc05cd10  jal         func_173440
    ctx->pc = 0x303F88u;
    SET_GPR_U32(ctx, 31, 0x303F90u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x303F88u, 0x303F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303F90u;
label_303f90:
    // 0x303f90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303f94: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x303f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x303f98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x303f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x303f9c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x303f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x303fa0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x303FA0u;
    {
        const bool branch_taken_0x303fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303fa0) {
            ctx->pc = 0x303FDCu;
            return;
        }
    }
    ctx->pc = 0x303FA8u;
    // 0x303fa8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303fac: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x303facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303fb0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x303fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303fb4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x303fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x303fb8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x303fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x303fbc: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x303fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x303fc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x303fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x303fc4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x303fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303fc8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x303fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x303fcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x303fccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303fd0: 0x0  nop
    ctx->pc = 0x303fd0u;
    // NOP
    // 0x303fd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303fd8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x303fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x303fdcu;
}
