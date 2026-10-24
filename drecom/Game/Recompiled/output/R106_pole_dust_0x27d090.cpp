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

// Function: R106_pole_dust
// Address: 0x27d090 - 0x27d4b0
void R106_pole_dust_0x27d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_pole_dust_0x27d090");
#endif

    switch (ctx->pc) {
        case 0x27d0bcu: goto label_27d0bc;
        case 0x27d10cu: goto label_27d10c;
        case 0x27d114u: goto label_27d114;
        case 0x27d138u: goto label_27d138;
        case 0x27d14cu: goto label_27d14c;
        case 0x27d160u: goto label_27d160;
        case 0x27d168u: goto label_27d168;
        case 0x27d180u: goto label_27d180;
        case 0x27d1a4u: goto label_27d1a4;
        case 0x27d1f4u: goto label_27d1f4;
        case 0x27d1fcu: goto label_27d1fc;
        case 0x27d220u: goto label_27d220;
        case 0x27d234u: goto label_27d234;
        case 0x27d248u: goto label_27d248;
        case 0x27d250u: goto label_27d250;
        case 0x27d268u: goto label_27d268;
        case 0x27d28cu: goto label_27d28c;
        case 0x27d2a0u: goto label_27d2a0;
        case 0x27d2fcu: goto label_27d2fc;
        case 0x27d304u: goto label_27d304;
        case 0x27d328u: goto label_27d328;
        case 0x27d33cu: goto label_27d33c;
        case 0x27d350u: goto label_27d350;
        case 0x27d358u: goto label_27d358;
        case 0x27d370u: goto label_27d370;
        case 0x27d394u: goto label_27d394;
        case 0x27d3a8u: goto label_27d3a8;
        case 0x27d404u: goto label_27d404;
        case 0x27d40cu: goto label_27d40c;
        case 0x27d430u: goto label_27d430;
        case 0x27d444u: goto label_27d444;
        case 0x27d458u: goto label_27d458;
        case 0x27d460u: goto label_27d460;
        case 0x27d478u: goto label_27d478;
        case 0x27d494u: goto label_27d494;
        default: break;
    }

    ctx->pc = 0x27d090u;

    // 0x27d090: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27d090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27d094: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x27d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x27d098: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27d09c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27d0a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27d0a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27d0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27d0a8: 0x8c31f9ec  lw          $s1, -0x614($at)
    ctx->pc = 0x27d0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x27d0ac: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d0acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d0b0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27d0b0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d0b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27D0B4u;
    {
        const bool branch_taken_0x27d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d0b4) {
            ctx->pc = 0x27D188u;
            goto label_27d188;
        }
    }
    ctx->pc = 0x27D0BCu;
label_27d0bc:
    // 0x27d0bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d0bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d0c0: 0x0  nop
    ctx->pc = 0x27d0c0u;
    // NOP
    // 0x27d0c4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27d0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d0c8: 0x3c024690  lui         $v0, 0x4690
    ctx->pc = 0x27d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18064 << 16));
    // 0x27d0cc: 0x3442ec00  ori         $v0, $v0, 0xEC00
    ctx->pc = 0x27d0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60416);
    // 0x27d0d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d0d4: 0x0  nop
    ctx->pc = 0x27d0d4u;
    // NOP
    // 0x27d0d8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27d0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27d0dc: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x27d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x27d0e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27d0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27d0e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d0e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d0e8: 0x0  nop
    ctx->pc = 0x27d0e8u;
    // NOP
    // 0x27d0ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x27d0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27d0f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27d0f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d0f8: 0x0  nop
    ctx->pc = 0x27d0f8u;
    // NOP
    // 0x27d0fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27d0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x27d100: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d104: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x27D104u;
    SET_GPR_U32(ctx, 31, 0x27D10Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x27D10Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D10Cu) { return; }
    ctx->pc = 0x27D10Cu;
label_27d10c:
    // 0x27d10c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D10Cu;
    SET_GPR_U32(ctx, 31, 0x27D114u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D10Cu, 0x27D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D114u;
label_27d114:
    // 0x27d114: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27d114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x27d118: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27d118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27d11c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d120: 0x0  nop
    ctx->pc = 0x27d120u;
    // NOP
    // 0x27d124: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27d124u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d128: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d12c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d130: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x27D130u;
    SET_GPR_U32(ctx, 31, 0x27D138u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x27D138u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D138u) { return; }
    ctx->pc = 0x27D138u;
label_27d138:
    // 0x27d138: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27d138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d13c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d140: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27d140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d144: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x27D144u;
    SET_GPR_U32(ctx, 31, 0x27D14Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x27D14Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D14Cu) { return; }
    ctx->pc = 0x27D14Cu;
label_27d14c:
    // 0x27d14c: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x27d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x27d150: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27d150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d154: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x27d154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27d158: 0xc0870ec  jal         func_21C3B0
    ctx->pc = 0x27D158u;
    SET_GPR_U32(ctx, 31, 0x27D160u);
    ctx->pc = 0x21C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3B0u, 0x27D158u, 0x27D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D160u;
label_27d160:
    // 0x27d160: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x27d160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d164: 0x0  nop
    ctx->pc = 0x27d164u;
    // NOP
label_27d168:
    // 0x27d168: 0x1200ffd4  beqz        $s0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x27D168u;
    {
        const bool branch_taken_0x27d168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d168) {
            ctx->pc = 0x27D0BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d0bc;
        }
    }
    ctx->pc = 0x27D170u;
    // 0x27d170: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27d170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27d174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d178: 0xc084964  jal         func_212590
    ctx->pc = 0x27D178u;
    SET_GPR_U32(ctx, 31, 0x27D180u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27D178u, 0x27D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D180u;
label_27d180:
    // 0x27d180: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27d184: 0x0  nop
    ctx->pc = 0x27d184u;
    // NOP
label_27d188:
    // 0x27d188: 0x2e420064  sltiu       $v0, $s2, 0x64
    ctx->pc = 0x27d188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x27d18c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27D18Cu;
    {
        const bool branch_taken_0x27d18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d18c) {
            ctx->pc = 0x27D168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d168;
        }
    }
    ctx->pc = 0x27D194u;
    // 0x27d194: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d194u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d198: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27d198u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d19c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27D19Cu;
    {
        const bool branch_taken_0x27d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d19c) {
            ctx->pc = 0x27D270u;
            goto label_27d270;
        }
    }
    ctx->pc = 0x27D1A4u;
label_27d1a4:
    // 0x27d1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27d1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1a8: 0x0  nop
    ctx->pc = 0x27d1a8u;
    // NOP
    // 0x27d1ac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x27d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d1b0: 0x3c024690  lui         $v0, 0x4690
    ctx->pc = 0x27d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18064 << 16));
    // 0x27d1b4: 0x3442ec00  ori         $v0, $v0, 0xEC00
    ctx->pc = 0x27d1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60416);
    // 0x27d1b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d1b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1bc: 0x0  nop
    ctx->pc = 0x27d1bcu;
    // NOP
    // 0x27d1c0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27d1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27d1c4: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x27d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x27d1c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27d1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27d1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1d0: 0x0  nop
    ctx->pc = 0x27d1d0u;
    // NOP
    // 0x27d1d4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x27d1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27d1d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27d1dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27d1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27d1e0: 0x0  nop
    ctx->pc = 0x27d1e0u;
    // NOP
    // 0x27d1e4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x27d1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x27d1e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d1ec: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x27D1ECu;
    SET_GPR_U32(ctx, 31, 0x27D1F4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x27D1F4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D1F4u) { return; }
    ctx->pc = 0x27D1F4u;
label_27d1f4:
    // 0x27d1f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27D1F4u;
    SET_GPR_U32(ctx, 31, 0x27D1FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27D1F4u, 0x27D1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D1FCu;
label_27d1fc:
    // 0x27d1fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x27d200: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27d200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27d204: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27d204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27d208: 0x0  nop
    ctx->pc = 0x27d208u;
    // NOP
    // 0x27d20c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27d20cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27d210: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d214: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d218: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x27D218u;
    SET_GPR_U32(ctx, 31, 0x27D220u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x27D220u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D220u) { return; }
    ctx->pc = 0x27D220u;
label_27d220:
    // 0x27d220: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27d220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d224: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27d224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27d228: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27d228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d22c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x27D22Cu;
    SET_GPR_U32(ctx, 31, 0x27D234u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x27D234u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27D234u) { return; }
    ctx->pc = 0x27D234u;
label_27d234:
    // 0x27d234: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x27d234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x27d238: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x27d238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27d23c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x27d23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d240: 0xc0870ec  jal         func_21C3B0
    ctx->pc = 0x27D240u;
    SET_GPR_U32(ctx, 31, 0x27D248u);
    ctx->pc = 0x21C3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C3B0u, 0x27D240u, 0x27D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D248u;
label_27d248:
    // 0x27d248: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x27d248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27d24c: 0x0  nop
    ctx->pc = 0x27d24cu;
    // NOP
label_27d250:
    // 0x27d250: 0x1200ffd4  beqz        $s0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x27D250u;
    {
        const bool branch_taken_0x27d250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d250) {
            ctx->pc = 0x27D1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d1a4;
        }
    }
    ctx->pc = 0x27D258u;
    // 0x27d258: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27d258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27d25c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d260: 0xc084964  jal         func_212590
    ctx->pc = 0x27D260u;
    SET_GPR_U32(ctx, 31, 0x27D268u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27D260u, 0x27D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D268u;
label_27d268:
    // 0x27d268: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27d26c: 0x0  nop
    ctx->pc = 0x27d26cu;
    // NOP
label_27d270:
    // 0x27d270: 0x2e42003c  sltiu       $v0, $s2, 0x3C
    ctx->pc = 0x27d270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x27d274: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27D274u;
    {
        const bool branch_taken_0x27d274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d274) {
            ctx->pc = 0x27D250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d250;
        }
    }
    ctx->pc = 0x27D27Cu;
    // 0x27d27c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d27cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d280: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27d280u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d284: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27D284u;
    {
        const bool branch_taken_0x27d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d284) {
            ctx->pc = 0x27D378u;
            goto label_27d378;
        }
    }
    ctx->pc = 0x27D28Cu;
label_27d28c:
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
label_27d358:
    // 0x27d358: 0x1200ffcc  beqz        $s0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27D358u;
    {
        const bool branch_taken_0x27d358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d358) {
            ctx->pc = 0x27D28Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d28c;
        }
    }
    ctx->pc = 0x27D360u;
    // 0x27d360: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27d360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27d364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d368: 0xc084964  jal         func_212590
    ctx->pc = 0x27D368u;
    SET_GPR_U32(ctx, 31, 0x27D370u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27D368u, 0x27D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D370u;
label_27d370:
    // 0x27d370: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27d374: 0x0  nop
    ctx->pc = 0x27d374u;
    // NOP
label_27d378:
    // 0x27d378: 0x2e4200a0  sltiu       $v0, $s2, 0xA0
    ctx->pc = 0x27d378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x27d37c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27D37Cu;
    {
        const bool branch_taken_0x27d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d37c) {
            ctx->pc = 0x27D358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d358;
        }
    }
    ctx->pc = 0x27D384u;
    // 0x27d384: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27d384u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d388: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27d388u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27d38c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27D38Cu;
    {
        const bool branch_taken_0x27d38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d38c) {
            ctx->pc = 0x27D480u;
            goto label_27d480;
        }
    }
    ctx->pc = 0x27D394u;
label_27d394:
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
label_27d460:
    // 0x27d460: 0x1200ffcc  beqz        $s0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x27D460u;
    {
        const bool branch_taken_0x27d460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d460) {
            ctx->pc = 0x27D394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d394;
        }
    }
    ctx->pc = 0x27D468u;
    // 0x27d468: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27d468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x27d46c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27d46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d470: 0xc084964  jal         func_212590
    ctx->pc = 0x27D470u;
    SET_GPR_U32(ctx, 31, 0x27D478u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27D470u, 0x27D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D478u;
label_27d478:
    // 0x27d478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27d478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27d47c: 0x0  nop
    ctx->pc = 0x27d47cu;
    // NOP
label_27d480:
    // 0x27d480: 0x2e420097  sltiu       $v0, $s2, 0x97
    ctx->pc = 0x27d480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)151) ? 1 : 0);
    // 0x27d484: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27D484u;
    {
        const bool branch_taken_0x27d484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d484) {
            ctx->pc = 0x27D460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d460;
        }
    }
    ctx->pc = 0x27D48Cu;
    // 0x27d48c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27D48Cu;
    SET_GPR_U32(ctx, 31, 0x27D494u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27D48Cu, 0x27D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D494u;
label_27d494:
    // 0x27d494: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27d494u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d49c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d4a4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x27d4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x27d4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D4B0u;
}
