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

// Function: caseD_2
// Address: 0x12b3c8 - 0x12b48c
void caseD_2_0x12b3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x12b3c8");
#endif

    switch (ctx->pc) {
        case 0x12b3ecu: goto label_12b3ec;
        case 0x12b414u: goto label_12b414;
        case 0x12b42cu: goto label_12b42c;
        case 0x12b444u: goto label_12b444;
        case 0x12b458u: goto label_12b458;
        case 0x12b47cu: goto label_12b47c;
        default: break;
    }

    ctx->pc = 0x12b3c8u;

    // 0x12b3c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b3cc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12b3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b3d0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12b3d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12b3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b3dc: 0x0  nop
    ctx->pc = 0x12b3dcu;
    // NOP
    // 0x12b3e0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12b3e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b3e4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12B3E4u;
    SET_GPR_U32(ctx, 31, 0x12B3ECu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12B3E4u, 0x12B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3ECu;
label_12b3ec:
    // 0x12b3ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b3f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12b3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12b3f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b3f8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x12b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b3fc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12b400: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x12b400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x12b404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12b404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b408: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12b408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12b40c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12B40Cu;
    SET_GPR_U32(ctx, 31, 0x12B414u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12B40Cu, 0x12B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B414u;
label_12b414:
    // 0x12b414: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x12b414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x12b418: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12b41c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12b41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12b420: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b424: 0xc067844  jal         func_19E110
    ctx->pc = 0x12B424u;
    SET_GPR_U32(ctx, 31, 0x12B42Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x12B424u, 0x12B42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B42Cu;
label_12b42c:
    // 0x12b42c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b430: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12b434: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12b438: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x12b438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x12b43c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12B43Cu;
    SET_GPR_U32(ctx, 31, 0x12B444u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12B444u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12B444u) { return; }
    ctx->pc = 0x12B444u;
label_12b444:
    // 0x12b444: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b448: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12b44c: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x12b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x12b450: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12B450u;
    SET_GPR_U32(ctx, 31, 0x12B458u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12B450u, 0x12B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B458u;
label_12b458:
    // 0x12b458: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b45c: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x12b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12b460: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x12b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b464: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x12b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x12b468: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x12b468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x12b46c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b470: 0x24460080  addiu       $a2, $v0, 0x80
    ctx->pc = 0x12b470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x12b474: 0xc040c00  jal         func_103000
    ctx->pc = 0x12B474u;
    SET_GPR_U32(ctx, 31, 0x12B47Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x12B47Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12B47Cu) { return; }
    ctx->pc = 0x12B47Cu;
label_12b47c:
    // 0x12b47c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x12b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x12b480: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12b480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12b484: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b488: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12b488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12b48cu;
}
