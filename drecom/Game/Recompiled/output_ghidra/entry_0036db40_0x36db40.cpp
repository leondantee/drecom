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

// Function: entry_0036db40
// Address: 0x36db40 - 0x36dc18
void entry_0036db40_0x36db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036db40_0x36db40");
#endif

    switch (ctx->pc) {
        case 0x36db4cu: goto label_36db4c;
        case 0x36db70u: goto label_36db70;
        case 0x36db84u: goto label_36db84;
        case 0x36db98u: goto label_36db98;
        case 0x36dbacu: goto label_36dbac;
        case 0x36dbb8u: goto label_36dbb8;
        case 0x36dbf4u: goto label_36dbf4;
        case 0x36dc14u: goto label_36dc14;
        default: break;
    }

    ctx->pc = 0x36db40u;

    // 0x36db40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x36db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36db44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DB44u;
    SET_GPR_U32(ctx, 31, 0x36DB4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DB44u, 0x36DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB4Cu;
label_36db4c:
    // 0x36db4c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36db50: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36db50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36db54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36db54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36db58: 0x0  nop
    ctx->pc = 0x36db58u;
    // NOP
    // 0x36db5c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x36db5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36db60: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36db64: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x36db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36db68: 0xc067844  jal         func_19E110
    ctx->pc = 0x36DB68u;
    SET_GPR_U32(ctx, 31, 0x36DB70u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x36DB68u, 0x36DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DB70u;
label_36db70:
    // 0x36db70: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x36db70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36db74: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36db74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36db78: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x36db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36db7c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x36DB7Cu;
    SET_GPR_U32(ctx, 31, 0x36DB84u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x36DB84u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DB84u) { return; }
    ctx->pc = 0x36DB84u;
label_36db84:
    // 0x36db84: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36db84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36db88: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36db88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x36db8c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x36db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36db90: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36DB90u;
    SET_GPR_U32(ctx, 31, 0x36DB98u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36DB98u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36DB98u) { return; }
    ctx->pc = 0x36DB98u;
label_36db98:
    // 0x36db98: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36db98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36db9c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dba0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36dba0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36dba4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36DBA4u;
    SET_GPR_U32(ctx, 31, 0x36DBACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36DBA4u, 0x36DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBACu;
label_36dbac:
    // 0x36dbac: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x36dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36dbb0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36DBB0u;
    SET_GPR_U32(ctx, 31, 0x36DBB8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36DBB0u, 0x36DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBB8u;
label_36dbb8:
    // 0x36dbb8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x36dbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x36dbbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36dbbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36dbc0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36dbc4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x36dbc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x36dbc8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x36dbc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x36dbcc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x36dbccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36dbd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbd4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36dbd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36dbd8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x36dbd8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbdc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x36dbdcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbe0: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x36dbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dbe4: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x36dbe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36dbe8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x36dbe8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36dbec: 0xc0de66c  jal         func_3799B0
    ctx->pc = 0x36DBECu;
    SET_GPR_U32(ctx, 31, 0x36DBF4u);
    ctx->pc = 0x3799B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3799B0u, 0x36DBECu, 0x36DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DBF4u;
label_36dbf4:
    // 0x36dbf4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x36dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x36dbf8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x36dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36dbfc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x36dc00: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x36dc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36dc04: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x36dc04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36dc08: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x36dc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36dc0c: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x36DC0Cu;
    SET_GPR_U32(ctx, 31, 0x36DC14u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x36DC0Cu, 0x36DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DC14u;
label_36dc14:
    // 0x36dc14: 0x0  nop
    ctx->pc = 0x36dc14u;
    // NOP
    ctx->pc = 0x36dc18u;
}
