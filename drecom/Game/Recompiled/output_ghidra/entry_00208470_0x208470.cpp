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

// Function: entry_00208470
// Address: 0x208470 - 0x208698
void entry_00208470_0x208470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00208470_0x208470");
#endif

    switch (ctx->pc) {
        case 0x20849cu: goto label_20849c;
        case 0x2084b0u: goto label_2084b0;
        case 0x208528u: goto label_208528;
        case 0x20855cu: goto label_20855c;
        case 0x2085c4u: goto label_2085c4;
        case 0x2085e0u: goto label_2085e0;
        case 0x20860cu: goto label_20860c;
        case 0x208618u: goto label_208618;
        default: break;
    }

    ctx->pc = 0x208470u;

    // 0x208470: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208474: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208478: 0x3c023cc4  lui         $v0, 0x3CC4
    ctx->pc = 0x208478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15556 << 16));
    // 0x20847c: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x20847cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x208480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x208480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x208484: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x208484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x208488: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x208488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20848c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x208490: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x208490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x208494: 0xc05c848  jal         func_172120
    ctx->pc = 0x208494u;
    SET_GPR_U32(ctx, 31, 0x20849Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x208494u, 0x20849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20849Cu;
label_20849c:
    // 0x20849c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20849cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2084a0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2084a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2084a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2084a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2084a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2084A8u;
    SET_GPR_U32(ctx, 31, 0x2084B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2084A8u, 0x2084B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2084B0u;
label_2084b0:
    // 0x2084b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2084b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2084b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2084b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2084b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2084b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2084bc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2084bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2084c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2084c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2084c4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2084c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2084c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2084c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2084cc: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x2084ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2084d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2084d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2084d4: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x2084d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x2084d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2084d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2084dc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2084dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2084e0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2084e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2084e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2084e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2084e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2084e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2084ec: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2084ECu;
    {
        const bool branch_taken_0x2084ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2084ec) {
            ctx->pc = 0x208698u;
            return;
        }
    }
    ctx->pc = 0x2084F4u;
    // 0x2084f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2084f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2084f8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2084f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2084fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2084fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208500: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x208500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x208504: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x208504u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208508: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20850c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x20850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x208510: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208510u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x208514: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208518: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x208518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20851c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x20851cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x208520: 0xc06765c  jal         func_19D970
    ctx->pc = 0x208520u;
    SET_GPR_U32(ctx, 31, 0x208528u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x208520u, 0x208528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208528u;
label_208528:
    // 0x208528: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x208528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x20852c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x20852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x208530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x208530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x208534: 0x0  nop
    ctx->pc = 0x208534u;
    // NOP
    // 0x208538: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x208538u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20853c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x20853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208540: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x208540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x208544: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x208544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x208548: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20854c: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x20854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x208550: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x208550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x208554: 0xc067844  jal         func_19E110
    ctx->pc = 0x208554u;
    SET_GPR_U32(ctx, 31, 0x20855Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x208554u, 0x20855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20855Cu;
label_20855c:
    // 0x20855c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20855cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208560: 0x0  nop
    ctx->pc = 0x208560u;
    // NOP
    // 0x208564: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x208564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x208568: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x208568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x20856c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x20856cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x208570: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208574: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x208574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x208578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20857c: 0x0  nop
    ctx->pc = 0x20857cu;
    // NOP
    // 0x208580: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x208580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x208584: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x208584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x208588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20858c: 0x0  nop
    ctx->pc = 0x20858cu;
    // NOP
    // 0x208590: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x208590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x208594: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x208594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x208598: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x208598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x20859c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20859cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2085a0: 0x0  nop
    ctx->pc = 0x2085a0u;
    // NOP
    // 0x2085a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2085a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2085a8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2085a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2085ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2085acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2085b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2085b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2085b4: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x2085b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x2085b8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2085b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2085bc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2085BCu;
    SET_GPR_U32(ctx, 31, 0x2085C4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2085C4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2085C4u) { return; }
    ctx->pc = 0x2085C4u;
label_2085c4:
    // 0x2085c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2085c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2085c8: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x2085c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2085cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2085ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2085d0: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x2085d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2085d4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2085d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2085d8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2085D8u;
    SET_GPR_U32(ctx, 31, 0x2085E0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2085E0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2085E0u) { return; }
    ctx->pc = 0x2085E0u;
label_2085e0:
    // 0x2085e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2085e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2085e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2085e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2085e8: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x2085e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x2085ec: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2085ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2085f0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2085f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2085f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2085f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2085f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2085f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2085fc: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x2085fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x208600: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x208600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x208604: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x208604u;
    SET_GPR_U32(ctx, 31, 0x20860Cu);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x208604u, 0x20860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20860Cu;
label_20860c:
    // 0x20860c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x20860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x208610: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x208610u;
    SET_GPR_U32(ctx, 31, 0x208618u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x208618u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x208618u) { return; }
    ctx->pc = 0x208618u;
label_208618:
    // 0x208618: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x208618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20861c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20861cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208620: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x208620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x208624: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208628: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x208628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20862c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20862cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6192C0u));
    // 0x208630: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x208634: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x208634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x208638: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x208638u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x20863c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20863cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208640: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x208640u;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208644: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x208644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x208648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20864c: 0x0  nop
    ctx->pc = 0x20864cu;
    // NOP
    // 0x208650: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208654: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208658: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x208658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x20865c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x20865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x208660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208664: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208668: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x208668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x20866c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20866cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208670: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x208670u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x208674: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x208674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208678: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x208678u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x20867c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20867cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x208680: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x208680u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x208684: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208688: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x208688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20868c: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x20868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x208690: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x208690u;
    SET_GPR_U32(ctx, 31, 0x208698u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x208690u, 0x208698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208698u;
}
