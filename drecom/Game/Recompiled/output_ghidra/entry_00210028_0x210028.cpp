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

// Function: entry_00210028
// Address: 0x210028 - 0x210164
void entry_00210028_0x210028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210028_0x210028");
#endif

    switch (ctx->pc) {
        case 0x210068u: goto label_210068;
        case 0x210094u: goto label_210094;
        case 0x2100a0u: goto label_2100a0;
        case 0x2100d4u: goto label_2100d4;
        case 0x2100fcu: goto label_2100fc;
        case 0x210160u: goto label_210160;
        default: break;
    }

    ctx->pc = 0x210028u;

    // 0x210028: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x210028u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x21002c: 0x85471278  lh          $a3, 0x1278($t2)
    ctx->pc = 0x21002cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4728)));
    // 0x210030: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x210030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
    // 0x210034: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x210034u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x210038: 0x286602b6  slti        $a2, $v1, 0x2B6
    ctx->pc = 0x210038u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)694) ? 1 : 0);
    // 0x21003c: 0x14c00049  bnez        $a2, . + 4 + (0x49 << 2)
    ctx->pc = 0x21003Cu;
    {
        const bool branch_taken_0x21003c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21003c) {
            ctx->pc = 0x210164u;
            return;
        }
    }
    ctx->pc = 0x210044u;
    // 0x210044: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210048: 0x84691278  lh          $t1, 0x1278($v1)
    ctx->pc = 0x210048u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x21004c: 0x9543c  dsll32      $t2, $t1, 16
    ctx->pc = 0x21004cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 16));
    // 0x210050: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x210050u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x210054: 0x294102c2  slti        $at, $t2, 0x2C2
    ctx->pc = 0x210054u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)706) ? 1 : 0);
    // 0x210058: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x210058u;
    {
        const bool branch_taken_0x210058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x210058) {
            ctx->pc = 0x210164u;
            return;
        }
    }
    ctx->pc = 0x210060u;
    // 0x210060: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210060u;
    SET_GPR_U32(ctx, 31, 0x210068u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210060u, 0x210068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210068u;
label_210068:
    // 0x210068: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x210068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x21006c: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x21006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x210070: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210070u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210074: 0x0  nop
    ctx->pc = 0x210074u;
    // NOP
    // 0x210078: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21007c: 0xe7a00504  swc1        $f0, 0x504($sp)
    ctx->pc = 0x21007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1284), bits); }
    // 0x210080: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x210080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x210084: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x210084u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x210088: 0xc7ac0504  lwc1        $f12, 0x504($sp)
    ctx->pc = 0x210088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21008c: 0xc067844  jal         func_19E110
    ctx->pc = 0x21008Cu;
    SET_GPR_U32(ctx, 31, 0x210094u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x21008Cu, 0x210094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210094u;
label_210094:
    // 0x210094: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210094u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210098: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210098u;
    SET_GPR_U32(ctx, 31, 0x2100A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210098u, 0x2100A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100A0u;
label_2100a0:
    // 0x2100a0: 0x3c0a4049  lui         $t2, 0x4049
    ctx->pc = 0x2100a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16457 << 16));
    // 0x2100a4: 0x35490fdb  ori         $t1, $t2, 0xFDB
    ctx->pc = 0x2100a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)4059);
    // 0x2100a8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x2100a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2100ac: 0x0  nop
    ctx->pc = 0x2100acu;
    // NOP
    // 0x2100b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2100b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2100b4: 0xe7a00504  swc1        $f0, 0x504($sp)
    ctx->pc = 0x2100b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1284), bits); }
    // 0x2100b8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x2100b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2100bc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2100bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2100c0: 0x27a301d0  addiu       $v1, $sp, 0x1D0
    ctx->pc = 0x2100c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2100c4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2100c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2100c8: 0xc7ac0504  lwc1        $f12, 0x504($sp)
    ctx->pc = 0x2100c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2100cc: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2100CCu;
    SET_GPR_U32(ctx, 31, 0x2100D4u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2100D4u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2100D4u) { return; }
    ctx->pc = 0x2100D4u;
label_2100d4:
    // 0x2100d4: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2100d4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2100d8: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x2100d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x2100dc: 0x2542a490  addiu       $v0, $t2, -0x5B70
    ctx->pc = 0x2100dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943888));
    // 0x2100e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2100e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2100e4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x2100e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x2100e8: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x2100e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x2100ec: 0x24c7a490  addiu       $a3, $a2, -0x5B70
    ctx->pc = 0x2100ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943888));
    // 0x2100f0: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2100f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2100f4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2100F4u;
    SET_GPR_U32(ctx, 31, 0x2100FCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2100FCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2100FCu) { return; }
    ctx->pc = 0x2100FCu;
label_2100fc:
    // 0x2100fc: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2100fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210100: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x210104: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x210104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x210108: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x210108u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x21010c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x21010cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x210110: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x210110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210114: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210118: 0x3c0a0039  lui         $t2, 0x39
    ctx->pc = 0x210118u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57 << 16));
    // 0x21011c: 0x254aa480  addiu       $t2, $t2, -0x5B80
    ctx->pc = 0x21011cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943872));
    // 0x210120: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x210120u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x210124: 0x8fa70528  lw          $a3, 0x528($sp)
    ctx->pc = 0x210124u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210128: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x210128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x21012c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21012cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x210130: 0x2469a490  addiu       $t1, $v1, -0x5B70
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943888));
    // 0x210134: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x210138: 0xc42ca4b0  lwc1        $f12, -0x5B50($at)
    ctx->pc = 0x210138u;
    { uint32_t bits = FAST_READ32(0x38A4B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21013c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x210140: 0xc42da4b8  lwc1        $f13, -0x5B48($at)
    ctx->pc = 0x210140u;
    { uint32_t bits = FAST_READ32(0x38A4B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x210144: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x210144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x210148: 0xc42ea4c0  lwc1        $f14, -0x5B40($at)
    ctx->pc = 0x210148u;
    { uint32_t bits = FAST_READ32(0x38A4C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21014c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x21014cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x210150: 0x246aa4a0  addiu       $t2, $v1, -0x5B60
    ctx->pc = 0x210150u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x210154: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210154u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210158: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x210158u;
    SET_GPR_U32(ctx, 31, 0x210160u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x210158u, 0x210160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210160u;
label_210160:
    // 0x210160: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210160u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x210164u;
}
