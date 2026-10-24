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

// Function: entry_0027d0bc
// Address: 0x27d0bc - 0x27d168
void entry_0027d0bc_0x27d0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027d0bc_0x27d0bc");
#endif

    switch (ctx->pc) {
        case 0x27d10cu: goto label_27d10c;
        case 0x27d114u: goto label_27d114;
        case 0x27d138u: goto label_27d138;
        case 0x27d14cu: goto label_27d14c;
        case 0x27d160u: goto label_27d160;
        default: break;
    }

    ctx->pc = 0x27d0bcu;

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
    ctx->pc = 0x27d168u;
}
