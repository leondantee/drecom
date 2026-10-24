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

// Function: entry_0028f9ec
// Address: 0x28f9ec - 0x28fca0
void entry_0028f9ec_0x28f9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028f9ec_0x28f9ec");
#endif

    switch (ctx->pc) {
        case 0x28faccu: goto label_28facc;
        case 0x28fb08u: goto label_28fb08;
        case 0x28fb38u: goto label_28fb38;
        case 0x28fb64u: goto label_28fb64;
        default: break;
    }

    ctx->pc = 0x28f9ecu;

    // 0x28f9ec: 0x82025de8  lb          $v0, 0x5DE8($s0)
    ctx->pc = 0x28f9ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28f9f0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x28f9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28f9f4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28f9f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28f9f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f9fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fa00: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x28fa00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28fa04: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x28fa04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x28fa08: 0x24626010  addiu       $v0, $v1, 0x6010
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24592));
    // 0x28fa0c: 0x46a821  addu        $s5, $v0, $a2
    ctx->pc = 0x28fa0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x28fa10: 0x72a09628  paddub      $s2, $s5, $zero
    ctx->pc = 0x28fa10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x28fa14: 0x240301a2  addiu       $v1, $zero, 0x1A2
    ctx->pc = 0x28fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    // 0x28fa18: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28fa18u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28fa1c: 0x2402011b  addiu       $v0, $zero, 0x11B
    ctx->pc = 0x28fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    // 0x28fa20: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x28fa20u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fa24: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x28fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28fa28: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28fa2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x28fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fa30: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x28fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x28fa34: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x28fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x28fa38: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28fa3c: 0x62b823  subu        $s7, $v1, $v0
    ctx->pc = 0x28fa3cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fa40: 0xafb700f8  sw          $s7, 0xF8($sp)
    ctx->pc = 0x28fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 23));
    // 0x28fa44: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x28fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x28fa48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28fa4c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x28fa4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x28fa50: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x28fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28fa54: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x28fa54u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fa58: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x28fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x28fa5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28fa60: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28fa60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28fa64: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x28fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x28fa68: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x28fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x28fa6c: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x28fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x28fa70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28fa74: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28fa74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28fa78: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x28fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28fa7c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28fa7cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fa80: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x28fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x28fa84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28fa88: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28fa88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x28fa8c: 0x3c21823  subu        $v1, $fp, $v0
    ctx->pc = 0x28fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x28fa90: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x28fa90u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28fa94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x28fa98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28fa98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fa9c: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28fa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28faa0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28faa0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28faa4: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x28faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x28faa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28faa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28faac: 0x0  nop
    ctx->pc = 0x28faacu;
    // NOP
    // 0x28fab0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28fab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28fab4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28fab4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fab8: 0x0  nop
    ctx->pc = 0x28fab8u;
    // NOP
    // 0x28fabc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28fabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28fac0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x28fac0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28fac4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28FAC4u;
    SET_GPR_U32(ctx, 31, 0x28FACCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28FAC4u, 0x28FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FACCu;
label_28facc:
    // 0x28facc: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28faccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fad0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x28fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x28fad4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28fad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fad8: 0xc6006620  lwc1        $f0, 0x6620($s0)
    ctx->pc = 0x28fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 26144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28fadc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x28fadcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x28fae0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x28fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x28fae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28fae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fae8: 0x0  nop
    ctx->pc = 0x28fae8u;
    // NOP
    // 0x28faec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28faecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28faf0: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x28faf0u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28faf4: 0x0  nop
    ctx->pc = 0x28faf4u;
    // NOP
    // 0x28faf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28faf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28fafc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x28fafcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x28fb00: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28FB00u;
    SET_GPR_U32(ctx, 31, 0x28FB08u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28FB00u, 0x28FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB08u;
label_28fb08:
    // 0x28fb08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28fb08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fb0c: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28fb0cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28fb10: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x28fb10u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fb14: 0x0  nop
    ctx->pc = 0x28fb14u;
    // NOP
    // 0x28fb18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28fb18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28fb1c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x28fb20: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28fb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x28fb24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28fb24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fb28: 0x0  nop
    ctx->pc = 0x28fb28u;
    // NOP
    // 0x28fb2c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28fb2cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28fb30: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28FB30u;
    SET_GPR_U32(ctx, 31, 0x28FB38u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28FB30u, 0x28FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB38u;
label_28fb38:
    // 0x28fb38: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28fb38u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fb3c: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x28fb3cu;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fb40: 0x0  nop
    ctx->pc = 0x28fb40u;
    // NOP
    // 0x28fb44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28fb44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28fb48: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x28fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x28fb4c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x28fb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x28fb50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28fb50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fb54: 0x0  nop
    ctx->pc = 0x28fb54u;
    // NOP
    // 0x28fb58: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x28fb58u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28fb5c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28FB5Cu;
    SET_GPR_U32(ctx, 31, 0x28FB64u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28FB5Cu, 0x28FB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FB64u;
label_28fb64:
    // 0x28fb64: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x28fb64u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28fb68: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28fb6c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28fb70: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x28fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x28fb74: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x28fb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x28fb78: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x28fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x28fb7c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x28fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x28fb80: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x28fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28fb84: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28fb88: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x28fb8c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28fb90: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x28fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28fb94: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x28fb98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x28fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28fb9c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x28fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28fba0: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x28fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x28fba4: 0x26230014  addiu       $v1, $s1, 0x14
    ctx->pc = 0x28fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x28fba8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28fbac: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x28fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28fbb0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28fbb4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x28fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x28fbb8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x28fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x28fbbc: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x28fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x28fbc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28fbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28fbc4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x28fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x28fbc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28fbcc: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x28fbccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x28fbd0: 0x131a00  sll         $v1, $s3, 8
    ctx->pc = 0x28fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x28fbd4: 0x2631025  or          $v0, $s3, $v1
    ctx->pc = 0x28fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x28fbd8: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x28fbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x28fbdc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28fbe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28fbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28fbe4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28fbe8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28fbec: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x28fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x28fbf0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28fbf4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x28fbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28fbf8: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x28fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x28fbfc: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28fc00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28fc04: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x28fc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x28fc08: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x28fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x28fc0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28fc10: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x28fc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x28fc14: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x28fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x28fc18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28fc1c: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x28fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x28fc20: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x28fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x28fc24: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x28fc24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x28fc28: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x28fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x28fc2c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x28fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28fc30: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x28fc34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x28fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x28fc38: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x28fc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x28fc3c: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x28fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x28fc40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28fc44: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x28fc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x28fc48: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x28fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x28fc4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28fc50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x28fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x28fc54: 0x2482e7a8  addiu       $v0, $a0, -0x1858
    ctx->pc = 0x28fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961064));
    // 0x28fc58: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x28fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x28fc5c: 0x8e025dc4  lw          $v0, 0x5DC4($s0)
    ctx->pc = 0x28fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24004)));
    // 0x28fc60: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28FC60u;
    {
        const bool branch_taken_0x28fc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fc60) {
            ctx->pc = 0x28FCA0u;
            return;
        }
    }
    ctx->pc = 0x28FC68u;
    // 0x28fc68: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x28fc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x28fc6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28fc70: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28FC70u;
    {
        const bool branch_taken_0x28fc70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28fc70) {
            ctx->pc = 0x28FCA0u;
            return;
        }
    }
    ctx->pc = 0x28FC78u;
    // 0x28fc78: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x28fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x28fc7c: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x28fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x28fc80: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x28fc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x28fc84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x28fc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28fc88: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x28fc8c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x28fc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x28fc90: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x28fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x28fc94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28fc94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28fc98: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28FC98u;
    {
        const bool branch_taken_0x28fc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fc98) {
            ctx->pc = 0x28FD24u;
            return;
        }
    }
    ctx->pc = 0x28FCA0u;
}
