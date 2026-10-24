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

// Function: entry_00376fa4
// Address: 0x376fa4 - 0x377064
void entry_00376fa4_0x376fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376fa4_0x376fa4");
#endif

    switch (ctx->pc) {
        case 0x376fb4u: goto label_376fb4;
        case 0x376ff4u: goto label_376ff4;
        case 0x377008u: goto label_377008;
        case 0x377014u: goto label_377014;
        default: break;
    }

    ctx->pc = 0x376fa4u;

    // 0x376fa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376fa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376fa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376fac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376FACu;
    SET_GPR_U32(ctx, 31, 0x376FB4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376FACu, 0x376FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FB4u;
label_376fb4:
    // 0x376fb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x376fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376fb8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x376fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376fbc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x376fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x376fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376fc4: 0x0  nop
    ctx->pc = 0x376fc4u;
    // NOP
    // 0x376fc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376fcc: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x376fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x376fd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376fd4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376fd8: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x376fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x376fdc: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x376fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x376fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376fe4: 0x0  nop
    ctx->pc = 0x376fe4u;
    // NOP
    // 0x376fe8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x376fe8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376fec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376FECu;
    SET_GPR_U32(ctx, 31, 0x376FF4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376FECu, 0x376FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376FF4u;
label_376ff4:
    // 0x376ff4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x376ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x376ff8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376ffc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x376ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377000: 0xc05cd10  jal         func_173440
    ctx->pc = 0x377000u;
    SET_GPR_U32(ctx, 31, 0x377008u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x377000u, 0x377008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377008u;
label_377008:
    // 0x377008: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x377008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37700c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37700Cu;
    SET_GPR_U32(ctx, 31, 0x377014u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37700Cu, 0x377014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377014u;
label_377014:
    // 0x377014: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x377014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377018: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x377018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37701c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x377020: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x377020u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x377024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x377024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377028: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37702c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x37702cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x377030: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377034: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x377034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x377038: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x377038u;
    {
        const bool branch_taken_0x377038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377038) {
            ctx->pc = 0x377064u;
            return;
        }
    }
    ctx->pc = 0x377040u;
    // 0x377040: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x377040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x377044: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x377044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377048: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x377048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37704c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x377050: 0x245110b0  addiu       $s1, $v0, 0x10B0
    ctx->pc = 0x377050u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x377054: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x377054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x377058: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x377058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x37705c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x37705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x377060: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x377060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    ctx->pc = 0x377064u;
}
