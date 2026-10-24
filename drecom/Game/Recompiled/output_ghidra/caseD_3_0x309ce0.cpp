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
// Address: 0x309ce0 - 0x309e04
void caseD_3_0x309ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x309ce0");
#endif

    switch (ctx->pc) {
        case 0x309d18u: goto label_309d18;
        case 0x309d78u: goto label_309d78;
        case 0x309da4u: goto label_309da4;
        case 0x309db4u: goto label_309db4;
        case 0x309dc0u: goto label_309dc0;
        default: break;
    }

    ctx->pc = 0x309ce0u;

    // 0x309ce0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x309ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x309ce4: 0x24429730  addiu       $v0, $v0, -0x68D0
    ctx->pc = 0x309ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940464));
    // 0x309ce8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x309ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309cec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x309cecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399730u));
    // 0x309cf0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x309cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x309cf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309cf8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x309cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x309cfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d00: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x309d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x309d04: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x309d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x309d08: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x309d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x309d0c: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x309d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x309d10: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x309D10u;
    SET_GPR_U32(ctx, 31, 0x309D18u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x309D10u, 0x309D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309D18u;
label_309d18:
    // 0x309d18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x309d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d1c: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x309d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d20: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x309d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x309d24: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x309d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x309d28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x309d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309d2c: 0x0  nop
    ctx->pc = 0x309d2cu;
    // NOP
    // 0x309d30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x309d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309d34: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x309d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x309d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309d3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d40: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x309d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x309d44: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x309d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x309d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309d4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d50: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x309d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x309d54: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x309d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x309d58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d5c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x309d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x309d60: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x309d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309d64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d68: 0xc4401280  lwc1        $f0, 0x1280($v0)
    ctx->pc = 0x309d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x309d6c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x309d6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x309d70: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x309D70u;
    SET_GPR_U32(ctx, 31, 0x309D78u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x309D70u, 0x309D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309D78u;
label_309d78:
    // 0x309d78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d7c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x309d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x309d80: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x309d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x309d84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x309d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d88: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x309d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x309d8c: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x309d8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x309d90: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x309d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x309d94: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x309d94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x309d98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309d9c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x309D9Cu;
    SET_GPR_U32(ctx, 31, 0x309DA4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x309D9Cu, 0x309DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309DA4u;
label_309da4:
    // 0x309da4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309da8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x309da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309dac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x309DACu;
    SET_GPR_U32(ctx, 31, 0x309DB4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309DACu, 0x309DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309DB4u;
label_309db4:
    // 0x309db4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309db8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x309DB8u;
    SET_GPR_U32(ctx, 31, 0x309DC0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x309DB8u, 0x309DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309DC0u;
label_309dc0:
    // 0x309dc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309dc4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x309dc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x309dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309dcc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x309dccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x309dd0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x309dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x309dd4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x309dd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x309dd8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x309dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x309ddc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x309ddcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x309de0: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x309de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x309de4: 0x14200043  bnez        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x309DE4u;
    {
        const bool branch_taken_0x309de4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x309de4) {
            ctx->pc = 0x309EF4u;
            return;
        }
    }
    ctx->pc = 0x309DECu;
    // 0x309dec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x309decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309df0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x309df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x309df4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x309df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x309df8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x309df8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x309dfc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x309DFCu;
    {
        const bool branch_taken_0x309dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309dfc) {
            ctx->pc = 0x309EF4u;
            return;
        }
    }
    ctx->pc = 0x309E04u;
}
