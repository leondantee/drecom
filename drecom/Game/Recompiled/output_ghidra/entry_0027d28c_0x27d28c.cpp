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

// Function: entry_0027d28c
// Address: 0x27d28c - 0x27d358
void entry_0027d28c_0x27d28c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d28c_0x27d28c");
#endif

    switch (ctx->pc) {
        case 0x27d2a0u: goto label_27d2a0;
        case 0x27d2fcu: goto label_27d2fc;
        case 0x27d304u: goto label_27d304;
        case 0x27d328u: goto label_27d328;
        case 0x27d33cu: goto label_27d33c;
        case 0x27d350u: goto label_27d350;
        default: break;
    }

    ctx->pc = 0x27d28cu;

    // 0x27d28c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d28cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d290: 0x0  nop
    ctx->pc = 0x27d290u;
    // NOP
    // 0x27d294: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27d294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d298: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27D298u;
    SET_GPR_U32(ctx, 31, 0x27D2A0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27D298u, 0x27D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D2A0u;
label_27d2a0:
    // 0x27d2a0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x27d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x27d2a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27d2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x27d2a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d2ac: 0x0  nop
    ctx->pc = 0x27d2acu;
    // NOP
    // 0x27d2b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27d2b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d2b4: 0x3c024690  lui         $v0, 0x4690
    ctx->pc = 0x27d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18064 << 16));
    // 0x27d2b8: 0x3442ec00  ori         $v0, $v0, 0xEC00
    ctx->pc = 0x27d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60416);
    // 0x27d2bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d2bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d2c0: 0x0  nop
    ctx->pc = 0x27d2c0u;
    // NOP
    // 0x27d2c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27d2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27d2c8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27d2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27d2cc: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x27d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x27d2d0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27d2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27d2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d2d8: 0x0  nop
    ctx->pc = 0x27d2d8u;
    // NOP
    // 0x27d2dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x27d2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27d2e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27d2e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d2e8: 0x0  nop
    ctx->pc = 0x27d2e8u;
    // NOP
    // 0x27d2ec: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27d2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x27d2f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d2f4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x27D2F4u;
    SET_GPR_U32(ctx, 31, 0x27D2FCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x27D2FCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D2FCu) { return; }
    ctx->pc = 0x27D2FCu;
label_27d2fc:
    // 0x27d2fc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D2FCu;
    SET_GPR_U32(ctx, 31, 0x27D304u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D2FCu, 0x27D304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D304u;
label_27d304:
    // 0x27d304: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27d304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x27d308: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27d308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27d30c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d310: 0x0  nop
    ctx->pc = 0x27d310u;
    // NOP
    // 0x27d314: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27d314u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d318: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d31c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d320: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x27D320u;
    SET_GPR_U32(ctx, 31, 0x27D328u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x27D328u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D328u) { return; }
    ctx->pc = 0x27D328u;
label_27d328:
    // 0x27d328: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27d328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d32c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d330: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27d330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d334: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x27D334u;
    SET_GPR_U32(ctx, 31, 0x27D33Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x27D33Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D33Cu) { return; }
    ctx->pc = 0x27D33Cu;
label_27d33c:
    // 0x27d33c: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x27d33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x27d340: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27d340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d344: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x27d344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d348: 0xc0870ec  jal         func_21C3B0
    ctx->pc = 0x27D348u;
    SET_GPR_U32(ctx, 31, 0x27D350u);
    ctx->pc = 0x21C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3B0u, 0x27D348u, 0x27D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D350u;
label_27d350:
    // 0x27d350: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x27d350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d354: 0x0  nop
    ctx->pc = 0x27d354u;
    // NOP
    ctx->pc = 0x27d358u;
}
