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

// Function: entry_0027d394
// Address: 0x27d394 - 0x27d460
void entry_0027d394_0x27d394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d394_0x27d394");
#endif

    switch (ctx->pc) {
        case 0x27d3a8u: goto label_27d3a8;
        case 0x27d404u: goto label_27d404;
        case 0x27d40cu: goto label_27d40c;
        case 0x27d430u: goto label_27d430;
        case 0x27d444u: goto label_27d444;
        case 0x27d458u: goto label_27d458;
        default: break;
    }

    ctx->pc = 0x27d394u;

    // 0x27d394: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d398: 0x0  nop
    ctx->pc = 0x27d398u;
    // NOP
    // 0x27d39c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27d39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d3a0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27D3A0u;
    SET_GPR_U32(ctx, 31, 0x27D3A8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27D3A0u, 0x27D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3A8u;
label_27d3a8:
    // 0x27d3a8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x27d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x27d3ac: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27d3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x27d3b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d3b4: 0x0  nop
    ctx->pc = 0x27d3b4u;
    // NOP
    // 0x27d3b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d3b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d3bc: 0x3c024690  lui         $v0, 0x4690
    ctx->pc = 0x27d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18064 << 16));
    // 0x27d3c0: 0x3442ec00  ori         $v0, $v0, 0xEC00
    ctx->pc = 0x27d3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60416);
    // 0x27d3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d3c8: 0x0  nop
    ctx->pc = 0x27d3c8u;
    // NOP
    // 0x27d3cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27d3ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27d3d0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27d3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27d3d4: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x27d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x27d3d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27d3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27d3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d3e0: 0x0  nop
    ctx->pc = 0x27d3e0u;
    // NOP
    // 0x27d3e4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x27d3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27d3e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27d3ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d3f0: 0x0  nop
    ctx->pc = 0x27d3f0u;
    // NOP
    // 0x27d3f4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27d3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x27d3f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d3fc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x27D3FCu;
    SET_GPR_U32(ctx, 31, 0x27D404u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x27D404u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D404u) { return; }
    ctx->pc = 0x27D404u;
label_27d404:
    // 0x27d404: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D404u;
    SET_GPR_U32(ctx, 31, 0x27D40Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D404u, 0x27D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D40Cu;
label_27d40c:
    // 0x27d40c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x27d410: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27d410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27d414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d418: 0x0  nop
    ctx->pc = 0x27d418u;
    // NOP
    // 0x27d41c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27d41cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d420: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d424: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d428: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x27D428u;
    SET_GPR_U32(ctx, 31, 0x27D430u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x27D430u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D430u) { return; }
    ctx->pc = 0x27D430u;
label_27d430:
    // 0x27d430: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27d430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d434: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d438: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27d438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d43c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x27D43Cu;
    SET_GPR_U32(ctx, 31, 0x27D444u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x27D444u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D444u) { return; }
    ctx->pc = 0x27D444u;
label_27d444:
    // 0x27d444: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x27d444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x27d448: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27d448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d44c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x27d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d450: 0xc0870ec  jal         func_21C3B0
    ctx->pc = 0x27D450u;
    SET_GPR_U32(ctx, 31, 0x27D458u);
    ctx->pc = 0x21C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3B0u, 0x27D450u, 0x27D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D458u;
label_27d458:
    // 0x27d458: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x27d458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d45c: 0x0  nop
    ctx->pc = 0x27d45cu;
    // NOP
    ctx->pc = 0x27d460u;
}
