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

// Function: entry_003501cc
// Address: 0x3501cc - 0x350310
void entry_003501cc_0x3501cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003501cc_0x3501cc");
#endif

    switch (ctx->pc) {
        case 0x3501dcu: goto label_3501dc;
        case 0x3501ecu: goto label_3501ec;
        case 0x350278u: goto label_350278;
        case 0x350288u: goto label_350288;
        case 0x3502bcu: goto label_3502bc;
        case 0x3502f4u: goto label_3502f4;
        default: break;
    }

    ctx->pc = 0x3501ccu;

    // 0x3501cc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3501ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3501d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3501d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3501d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3501D4u;
    SET_GPR_U32(ctx, 31, 0x3501DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3501D4u, 0x3501DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3501DCu;
label_3501dc:
    // 0x3501dc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3501dcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3501e0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3501e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3501e4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3501E4u;
    SET_GPR_U32(ctx, 31, 0x3501ECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3501E4u, 0x3501ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3501ECu;
label_3501ec:
    // 0x3501ec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x3501ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3501f0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3501f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3501f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3501f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3501f8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3501f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3501fc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3501fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350200: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x350200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350204: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350208: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x350208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x35020c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35020cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350210: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350214: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x350214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350218: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35021c: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x35021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350220: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350224: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x350224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x350228: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35022c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x35022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350230: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x350230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x350234: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x350234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x350238: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x350238u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35023c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x35023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350240: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350244: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x350244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x350248: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35024c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x35024cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350250: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x350250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x350254: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x350254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x350258: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x350258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35025c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x35025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350264: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x350264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x350268: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x350268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35026c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35026cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350270: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350270u;
    SET_GPR_U32(ctx, 31, 0x350278u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350270u, 0x350278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350278u;
label_350278:
    // 0x350278: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x350278u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35027c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350280: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350280u;
    SET_GPR_U32(ctx, 31, 0x350288u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350280u, 0x350288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350288u;
label_350288:
    // 0x350288: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x350288u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35028c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x350290: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x350290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x350294: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x350294u;
    {
        const bool branch_taken_0x350294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350294) {
            ctx->pc = 0x350920u;
            return;
        }
    }
    ctx->pc = 0x35029Cu;
    // 0x35029c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x35029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502a0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3502a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502a4: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3502a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3502a8: 0x24065a25  addiu       $a2, $zero, 0x5A25
    ctx->pc = 0x3502a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23077));
    // 0x3502ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3502acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3502b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3502b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3502b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3502B4u;
    SET_GPR_U32(ctx, 31, 0x3502BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3502B4u, 0x3502BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3502BCu;
label_3502bc:
    // 0x3502bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3502bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3502c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3502c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502c4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3502c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3502c8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x3502c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3502cc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3502ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502d0: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3502d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x3502d4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3502d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3502d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3502d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3502dc: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x3502dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3502e0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3502e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x3502e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3502E4u;
    {
        const bool branch_taken_0x3502e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3502e4) {
            ctx->pc = 0x350310u;
            return;
        }
    }
    ctx->pc = 0x3502ECu;
    // 0x3502ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3502ECu;
    SET_GPR_U32(ctx, 31, 0x3502F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3502ECu, 0x3502F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3502F4u;
label_3502f4:
    // 0x3502f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3502f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3502f8: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x3502f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3502fc: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x3502fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x350300: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x350300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x350304: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x350304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x350308: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x350308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35030c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x35030cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x350310u;
}
