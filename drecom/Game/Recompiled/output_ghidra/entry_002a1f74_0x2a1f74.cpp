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

// Function: entry_002a1f74
// Address: 0x2a1f74 - 0x2a20c0
void entry_002a1f74_0x2a1f74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1f74_0x2a1f74");
#endif

    switch (ctx->pc) {
        case 0x2a1fa0u: goto label_2a1fa0;
        case 0x2a1fbcu: goto label_2a1fbc;
        case 0x2a1fd4u: goto label_2a1fd4;
        case 0x2a1fe0u: goto label_2a1fe0;
        case 0x2a1ff0u: goto label_2a1ff0;
        default: break;
    }

    ctx->pc = 0x2a1f74u;

    // 0x2a1f74: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f78: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2a1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f80: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2a1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1f84: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1f88: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2a1f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1f8c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a1f90: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a1f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a1f94: 0xc46d0018  lwc1        $f13, 0x18($v1)
    ctx->pc = 0x2a1f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a1f98: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A1F98u;
    SET_GPR_U32(ctx, 31, 0x2A1FA0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A1F98u, 0x2A1FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FA0u;
label_2a1fa0:
    // 0x2a1fa0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a1fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2a1fa4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fa8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1fac: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2a1facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1fb0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a1fb0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a1fb4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1FB4u;
    SET_GPR_U32(ctx, 31, 0x2A1FBCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1FB4u, 0x2A1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FBCu;
label_2a1fbc:
    // 0x2a1fbc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fc0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a1fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a1fc4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1fc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1fcc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1FCCu;
    SET_GPR_U32(ctx, 31, 0x2A1FD4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1FCCu, 0x2A1FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FD4u;
label_2a1fd4:
    // 0x2a1fd4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fd8: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A1FD8u;
    SET_GPR_U32(ctx, 31, 0x2A1FE0u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A1FD8u, 0x2A1FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FE0u;
label_2a1fe0:
    // 0x2a1fe0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1fe4: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x2a1fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2a1fe8: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1FE8u;
    SET_GPR_U32(ctx, 31, 0x2A1FF0u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1FE8u, 0x2A1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1FF0u;
label_2a1ff0:
    // 0x2a1ff0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1ff4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a1ff8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1ffc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A1FFCu;
    {
        const bool branch_taken_0x2a1ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1ffc) {
            ctx->pc = 0x2A20C0u;
            return;
        }
    }
    ctx->pc = 0x2A2004u;
    // 0x2a2004: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2008: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a200c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2010: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2a2010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2014: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a2014u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2018: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a201c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a201cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2020: 0x0  nop
    ctx->pc = 0x2a2020u;
    // NOP
    // 0x2a2024: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2024u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2028: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a2028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a202c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a202cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2030: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a2034: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2038: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2a2038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a203c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a203cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2040: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a2044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2048: 0x0  nop
    ctx->pc = 0x2a2048u;
    // NOP
    // 0x2a204c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a204cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2050: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2a2050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a2054: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2058: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a205c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2060: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2a2060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2064: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2a2064u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2a2068: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2a2068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2a206c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a206cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2070: 0x0  nop
    ctx->pc = 0x2a2070u;
    // NOP
    // 0x2a2074: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a2074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a2078: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2a2078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a207c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2080: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a2080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2084: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2a2084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2088: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a2088u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a208c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2a208cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2a2090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a2094: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2a2094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a2098: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2a2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a209c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a209cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a20a0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2a20a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2a20a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a20a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a20a8: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a20a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a20ac: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2a20acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a20b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a20b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a20b4: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x2a20b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x2a20b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2A20B8u;
    {
        const bool branch_taken_0x2a20b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a20b8) {
            ctx->pc = 0x2A2188u;
            return;
        }
    }
    ctx->pc = 0x2A20C0u;
}
