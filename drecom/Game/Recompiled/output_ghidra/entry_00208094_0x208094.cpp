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

// Function: entry_00208094
// Address: 0x208094 - 0x2082bc
void entry_00208094_0x208094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208094_0x208094");
#endif

    switch (ctx->pc) {
        case 0x2080c0u: goto label_2080c0;
        case 0x2080d4u: goto label_2080d4;
        case 0x20814cu: goto label_20814c;
        case 0x208180u: goto label_208180;
        case 0x2081e8u: goto label_2081e8;
        case 0x208204u: goto label_208204;
        case 0x208230u: goto label_208230;
        case 0x20823cu: goto label_20823c;
        default: break;
    }

    ctx->pc = 0x208094u;

    // 0x208094: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x208094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x208098: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x208098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x20809c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20809cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2080a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2080a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2080a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2080a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2080a8: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2080a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2080ac: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2080acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2080b0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2080b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2080b4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2080b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2080b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2080B8u;
    SET_GPR_U32(ctx, 31, 0x2080C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2080B8u, 0x2080C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080C0u;
label_2080c0:
    // 0x2080c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2080c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2080c4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2080c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2080c8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2080c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2080cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2080CCu;
    SET_GPR_U32(ctx, 31, 0x2080D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2080CCu, 0x2080D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080D4u;
label_2080d4:
    // 0x2080d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2080d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2080d8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2080d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2080dc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2080dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2080e0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2080e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2080e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2080e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2080e8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2080e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2080ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2080ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2080f0: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x2080f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2080f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2080f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2080f8: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x2080f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x2080fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2080fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208100: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x208100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x208104: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x208104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x208108: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x208108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20810c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20810cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208110: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x208110u;
    {
        const bool branch_taken_0x208110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208110) {
            ctx->pc = 0x2082BCu;
            return;
        }
    }
    ctx->pc = 0x208118u;
    // 0x208118: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20811c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20811cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x208120: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208124: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x208124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x208128: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208128u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20812c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208130: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x208130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x208134: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208134u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x208138: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20813c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x20813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208140: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x208140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x208144: 0xc06765c  jal         func_19D970
    ctx->pc = 0x208144u;
    SET_GPR_U32(ctx, 31, 0x20814Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x208144u, 0x20814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20814Cu;
label_20814c:
    // 0x20814c: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x20814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x208150: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x208150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x208154: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208158: 0x0  nop
    ctx->pc = 0x208158u;
    // NOP
    // 0x20815c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20815cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x208160: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x208160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208164: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x208164u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x208168: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x208168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x20816c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208170: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x208170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x208174: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x208174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208178: 0xc067844  jal         func_19E110
    ctx->pc = 0x208178u;
    SET_GPR_U32(ctx, 31, 0x208180u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x208178u, 0x208180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208180u;
label_208180:
    // 0x208180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208184: 0x0  nop
    ctx->pc = 0x208184u;
    // NOP
    // 0x208188: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x208188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x20818c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x20818cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x208190: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x208190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x208194: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208198: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x208198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x20819c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20819cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2081a0: 0x0  nop
    ctx->pc = 0x2081a0u;
    // NOP
    // 0x2081a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2081a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2081a8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2081a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2081ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2081acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2081b0: 0x0  nop
    ctx->pc = 0x2081b0u;
    // NOP
    // 0x2081b4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2081b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2081b8: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x2081b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x2081bc: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x2081bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x2081c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2081c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2081c4: 0x0  nop
    ctx->pc = 0x2081c4u;
    // NOP
    // 0x2081c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2081c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2081cc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2081ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2081d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2081d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2081d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2081d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2081d8: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x2081d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x2081dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2081dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2081e0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2081E0u;
    SET_GPR_U32(ctx, 31, 0x2081E8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2081E8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2081E8u) { return; }
    ctx->pc = 0x2081E8u;
label_2081e8:
    // 0x2081e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2081e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2081ec: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x2081ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2081f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2081f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2081f4: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x2081f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2081f8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2081f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2081fc: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2081FCu;
    SET_GPR_U32(ctx, 31, 0x208204u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x208204u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x208204u) { return; }
    ctx->pc = 0x208204u;
label_208204:
    // 0x208204: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208204u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208208: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20820c: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x20820cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x208210: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208214: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x208214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x208218: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x208218u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20821c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208220: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x208220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x208224: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x208224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x208228: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x208228u;
    SET_GPR_U32(ctx, 31, 0x208230u);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x208228u, 0x208230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208230u;
label_208230:
    // 0x208230: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x208230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208234: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x208234u;
    SET_GPR_U32(ctx, 31, 0x20823Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x20823Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20823Cu) { return; }
    ctx->pc = 0x20823Cu;
label_20823c:
    // 0x20823c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x20823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x208240: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208244: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x208244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x208248: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20824c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x20824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x208250: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208250u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6192C0u));
    // 0x208254: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208258: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x208258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x20825c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20825cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x208260: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208264: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x208264u;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208268: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x208268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x20826c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20826cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208270: 0x0  nop
    ctx->pc = 0x208270u;
    // NOP
    // 0x208274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208278: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20827c: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x20827cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x208280: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x208280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x208284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208288: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20828c: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x20828cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x208290: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208294: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x208294u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x208298: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20829c: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x20829cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x2082a0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2082a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2082a4: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x2082a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x2082a8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2082a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2082ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2082acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2082b0: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x2082b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x2082b4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2082B4u;
    SET_GPR_U32(ctx, 31, 0x2082BCu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2082B4u, 0x2082BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2082BCu;
}
