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

// Function: caseD_0
// Address: 0x14a3e0 - 0x14a4b8
void caseD_0_0x14a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x14a3e0");
#endif

    switch (ctx->pc) {
        case 0x14a468u: goto label_14a468;
        case 0x14a478u: goto label_14a478;
        case 0x14a49cu: goto label_14a49c;
        default: break;
    }

    ctx->pc = 0x14a3e0u;

    // 0x14a3e0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14a3e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a3e8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x14a3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x14a3ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a3f0: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x14a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a3f4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x14a3f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a3fc: 0x0  nop
    ctx->pc = 0x14a3fcu;
    // NOP
    // 0x14a400: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x14a400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14a404: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a408: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x14a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a40c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14a40cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14a410: 0x3c024426  lui         $v0, 0x4426
    ctx->pc = 0x14a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17446 << 16));
    // 0x14a414: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x14a418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14a418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14a41c: 0x0  nop
    ctx->pc = 0x14a41cu;
    // NOP
    // 0x14a420: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14a420u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14a424: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a428: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x14a428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x14a42c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a430: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x14a430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x14a434: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14a434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14a438: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x14a438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a43c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14a43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14a440: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a444: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x14a444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x14a448: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a44c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a450: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x14a450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x14a454: 0x24060a03  addiu       $a2, $zero, 0xA03
    ctx->pc = 0x14a454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2563));
    // 0x14a458: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x14a458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x14a45c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14a45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a460: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14A460u;
    SET_GPR_U32(ctx, 31, 0x14A468u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14A460u, 0x14A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A468u;
label_14a468:
    // 0x14a468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a46c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x14a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14a470: 0xc058b98  jal         func_162E60
    ctx->pc = 0x14A470u;
    SET_GPR_U32(ctx, 31, 0x14A478u);
    ctx->pc = 0x162E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162E60u, 0x14A470u, 0x14A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A478u;
label_14a478:
    // 0x14a478: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x14a478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x14a47c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14a480: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14a480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14a484: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a48c: 0x24641b40  addiu       $a0, $v1, 0x1B40
    ctx->pc = 0x14a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x14a490: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x14a494: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x14A494u;
    SET_GPR_U32(ctx, 31, 0x14A49Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x14A49Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14A49Cu) { return; }
    ctx->pc = 0x14A49Cu;
label_14a49c:
    // 0x14a49c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14a4a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a4a4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x14a4a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x14a4a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14a4ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14a4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14a4b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a4b4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14a4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14a4b8u;
}
