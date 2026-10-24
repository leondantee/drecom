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

// Function: entry_001f6300
// Address: 0x1f6300 - 0x1f63f8
void entry_001f6300_0x1f6300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6300_0x1f6300");
#endif

    switch (ctx->pc) {
        case 0x1f6334u: goto label_1f6334;
        case 0x1f639cu: goto label_1f639c;
        case 0x1f63f0u: goto label_1f63f0;
        default: break;
    }

    ctx->pc = 0x1f6300u;

    // 0x1f6300: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f6300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6304: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1f6304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f6308: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f630c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1f630cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f6310: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f6310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6314: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f6314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f6318: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f6318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f631c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f631cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6320: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1f6320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1f6324: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f6324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f6328: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f6328u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f632c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F632Cu;
    SET_GPR_U32(ctx, 31, 0x1F6334u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F632Cu, 0x1F6334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6334u;
label_1f6334:
    // 0x1f6334: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1f6334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1f6338: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f633c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f633cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f6340: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6344: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1f6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6348: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f6348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f634c: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x1f634cu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6350: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6354: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f6354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f6358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f635c: 0x0  nop
    ctx->pc = 0x1f635cu;
    // NOP
    // 0x1f6360: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f6360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f6364: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6368: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1f6368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f636c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f636cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f6370: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x1f6370u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6374: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6374u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6378: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f6378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f637c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f637cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6384: 0x0  nop
    ctx->pc = 0x1f6384u;
    // NOP
    // 0x1f6388: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f6388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f638c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6390: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f6390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1f6394: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F6394u;
    SET_GPR_U32(ctx, 31, 0x1F639Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F6394u, 0x1F639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F639Cu;
label_1f639c:
    // 0x1f639c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f639cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f63a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f63a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f63a4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F63A4u;
    {
        const bool branch_taken_0x1f63a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f63a4) {
            ctx->pc = 0x1F63F8u;
            return;
        }
    }
    ctx->pc = 0x1F63ACu;
    // 0x1f63ac: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1f63acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f63b0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f63b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f63b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f63b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f63b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f63b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f63bc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1f63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f63c0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f63c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f63c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f63c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f63c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f63c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f63cc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f63ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f63d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f63d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f63d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f63d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f63dc: 0x24060a0b  addiu       $a2, $zero, 0xA0B
    ctx->pc = 0x1f63dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2571));
    // 0x1f63e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f63e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f63e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f63e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f63e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F63E8u;
    SET_GPR_U32(ctx, 31, 0x1F63F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F63E8u, 0x1F63F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F63F0u;
label_1f63f0:
    // 0x1f63f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F63F0u;
    {
        const bool branch_taken_0x1f63f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f63f0) {
            ctx->pc = 0x1F643Cu;
            return;
        }
    }
    ctx->pc = 0x1F63F8u;
}
