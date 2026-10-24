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

// Function: Em05_R1_hover_move
// Address: 0x2083f0 - 0x2089cc
void Em05_R1_hover_move_0x2083f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_hover_move_0x2083f0");
#endif

    switch (ctx->pc) {
        case 0x208444u: goto label_208444;
        case 0x20849cu: goto label_20849c;
        case 0x2084b0u: goto label_2084b0;
        case 0x208528u: goto label_208528;
        case 0x20855cu: goto label_20855c;
        case 0x2085c4u: goto label_2085c4;
        case 0x2085e0u: goto label_2085e0;
        case 0x20860cu: goto label_20860c;
        case 0x208618u: goto label_208618;
        case 0x208698u: goto label_208698;
        case 0x2086a8u: goto label_2086a8;
        case 0x2087f8u: goto label_2087f8;
        case 0x208808u: goto label_208808;
        case 0x208814u: goto label_208814;
        case 0x208860u: goto label_208860;
        case 0x2088e8u: goto label_2088e8;
        default: break;
    }

    ctx->pc = 0x2083f0u;

    // 0x2083f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2083f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2083f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2083f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2083f8: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x2083f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x2083fc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2083fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208400: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x208400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x208404: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x208404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x208408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20840c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x20840Cu;
    {
        const bool branch_taken_0x20840c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20840c) {
            ctx->pc = 0x208470u;
            goto label_208470;
        }
    }
    ctx->pc = 0x208414u;
    // 0x208414: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208414u;
    {
        const bool branch_taken_0x208414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208414) {
            ctx->pc = 0x208424u;
            goto label_208424;
        }
    }
    ctx->pc = 0x20841Cu;
    // 0x20841c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x20841Cu;
    {
        const bool branch_taken_0x20841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20841c) {
            ctx->pc = 0x20882Cu;
            goto label_20882c;
        }
    }
    ctx->pc = 0x208424u;
label_208424:
    // 0x208424: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208428: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20842c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20842cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x208430: 0x24063c07  addiu       $a2, $zero, 0x3C07
    ctx->pc = 0x208430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15367));
    // 0x208434: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x208434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208438: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x208438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20843c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20843Cu;
    SET_GPR_U32(ctx, 31, 0x208444u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20843Cu, 0x208444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208444u;
label_208444:
    // 0x208444: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208448: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x208448u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20844c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20844cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208450: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x208450u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x208454: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208458: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x208458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20845c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208460: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x208460u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x208464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208468: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20846c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x20846cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_208470:
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
            goto label_208698;
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
label_208698:
    // 0x208698: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20869c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20869cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2086a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2086A0u;
    SET_GPR_U32(ctx, 31, 0x2086A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2086A0u, 0x2086A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086A8u;
label_2086a8:
    // 0x2086a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2086a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2086ac: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2086acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2086b0: 0x3c0245fa  lui         $v0, 0x45FA
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17914 << 16));
    // 0x2086b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2086b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2086b8: 0x0  nop
    ctx->pc = 0x2086b8u;
    // NOP
    // 0x2086bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2086bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2086c0: 0x0  nop
    ctx->pc = 0x2086c0u;
    // NOP
    // 0x2086c4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2086C4u;
    {
        const bool branch_taken_0x2086c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2086c4) {
            ctx->pc = 0x2086E0u;
            goto label_2086e0;
        }
    }
    ctx->pc = 0x2086CCu;
    // 0x2086cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2086ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2086d0: 0x0  nop
    ctx->pc = 0x2086d0u;
    // NOP
    // 0x2086d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2086d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2086d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2086D8u;
    {
        const bool branch_taken_0x2086d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2086d8) {
            ctx->pc = 0x2086F0u;
            goto label_2086f0;
        }
    }
    ctx->pc = 0x2086E0u;
label_2086e0:
    // 0x2086e0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2086e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2086e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2086e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2086e8: 0x0  nop
    ctx->pc = 0x2086e8u;
    // NOP
    // 0x2086ec: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2086ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2086f0:
    // 0x2086f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2086f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2086f4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2086f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2086f8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2086f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2086fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2086fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208700: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x208700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x208704: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208708: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x208708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20870c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208710: 0x24421358  addiu       $v0, $v0, 0x1358
    ctx->pc = 0x208710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4952));
    // 0x208714: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x208714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208718: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20871c: 0x0  nop
    ctx->pc = 0x20871cu;
    // NOP
    // 0x208720: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x208720u;
    {
        const bool branch_taken_0x208720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208720) {
            ctx->pc = 0x208744u;
            goto label_208744;
        }
    }
    ctx->pc = 0x208728u;
    // 0x208728: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x208728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x20872c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20872cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x208730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208734: 0x0  nop
    ctx->pc = 0x208734u;
    // NOP
    // 0x208738: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x208738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x20873c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20873Cu;
    {
        const bool branch_taken_0x20873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20873c) {
            ctx->pc = 0x208758u;
            goto label_208758;
        }
    }
    ctx->pc = 0x208744u;
label_208744:
    // 0x208744: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x208744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x208748: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x208748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20874c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20874cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208750: 0x0  nop
    ctx->pc = 0x208750u;
    // NOP
    // 0x208754: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x208754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_208758:
    // 0x208758: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20875c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x20875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208760: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x208760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x208764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x208764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x208768: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x208768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x20876c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208770: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x208770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208774: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x208774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x208778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20877c: 0x0  nop
    ctx->pc = 0x20877cu;
    // NOP
    // 0x208780: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x208780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208784: 0x0  nop
    ctx->pc = 0x208784u;
    // NOP
    // 0x208788: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x208788u;
    {
        const bool branch_taken_0x208788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208788) {
            ctx->pc = 0x2087A0u;
            goto label_2087a0;
        }
    }
    ctx->pc = 0x208790u;
    // 0x208790: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x208790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x208794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208798: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20879c: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x20879cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_2087a0:
    // 0x2087a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2087a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087a4: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2087a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2087a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2087a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2087ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2087acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2087b0: 0x0  nop
    ctx->pc = 0x2087b0u;
    // NOP
    // 0x2087b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2087b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2087b8: 0x0  nop
    ctx->pc = 0x2087b8u;
    // NOP
    // 0x2087bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2087BCu;
    {
        const bool branch_taken_0x2087bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2087bc) {
            ctx->pc = 0x2087D4u;
            goto label_2087d4;
        }
    }
    ctx->pc = 0x2087C4u;
    // 0x2087c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2087c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2087c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2087c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2087cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2087ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087d0: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2087d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_2087d4:
    // 0x2087d4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2087d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087d8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x2087d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2087dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2087dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087e0: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x2087e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2087e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2087e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2087e8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2087e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2087ec: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2087ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087f0: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2087F0u;
    SET_GPR_U32(ctx, 31, 0x2087F8u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2087F0u, 0x2087F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2087F8u;
label_2087f8:
    // 0x2087f8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2087f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2087fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2087fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x208800: 0xc080f60  jal         func_203D80
    ctx->pc = 0x208800u;
    SET_GPR_U32(ctx, 31, 0x208808u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x208800u, 0x208808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208808u;
label_208808:
    // 0x208808: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x208808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20880c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20880Cu;
    SET_GPR_U32(ctx, 31, 0x208814u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20880Cu, 0x208814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208814u;
label_208814:
    // 0x208814: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208818: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x208818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x20881c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20881Cu;
    {
        const bool branch_taken_0x20881c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20881c) {
            ctx->pc = 0x20882Cu;
            goto label_20882c;
        }
    }
    ctx->pc = 0x208824u;
    // 0x208824: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208828: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x208828u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_20882c:
    // 0x20882c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208830: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x208834: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x208834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20883c: 0x0  nop
    ctx->pc = 0x20883cu;
    // NOP
    // 0x208840: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x208840u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208844: 0x0  nop
    ctx->pc = 0x208844u;
    // NOP
    // 0x208848: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x208848u;
    {
        const bool branch_taken_0x208848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208848) {
            ctx->pc = 0x2088B0u;
            goto label_2088b0;
        }
    }
    ctx->pc = 0x208850u;
    // 0x208850: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208854: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x208854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x208858: 0xc067588  jal         func_19D620
    ctx->pc = 0x208858u;
    SET_GPR_U32(ctx, 31, 0x208860u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x208858u, 0x208860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208860u;
label_208860:
    // 0x208860: 0x3c034662  lui         $v1, 0x4662
    ctx->pc = 0x208860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18018 << 16));
    // 0x208864: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x208864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x208868: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x208868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20886c: 0x0  nop
    ctx->pc = 0x20886cu;
    // NOP
    // 0x208870: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x208870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208874: 0x0  nop
    ctx->pc = 0x208874u;
    // NOP
    // 0x208878: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x208878u;
    {
        const bool branch_taken_0x208878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208878) {
            ctx->pc = 0x2088B0u;
            goto label_2088b0;
        }
    }
    ctx->pc = 0x208880u;
    // 0x208880: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208884: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208888: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x208888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20888c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x208890: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208894: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x208894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x208898: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20889c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20889cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2088a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2088a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2088a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2088a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2088acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2088b0:
    // 0x2088b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2088b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2088b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2088b8: 0x3c03460c  lui         $v1, 0x460C
    ctx->pc = 0x2088b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17932 << 16));
    // 0x2088bc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2088bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2088c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2088c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2088c4: 0x0  nop
    ctx->pc = 0x2088c4u;
    // NOP
    // 0x2088c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2088c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2088cc: 0x0  nop
    ctx->pc = 0x2088ccu;
    // NOP
    // 0x2088d0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2088D0u;
    {
        const bool branch_taken_0x2088d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2088d0) {
            ctx->pc = 0x208924u;
            goto label_208924;
        }
    }
    ctx->pc = 0x2088D8u;
    // 0x2088d8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2088dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2088e0: 0xc05d25c  jal         func_174970
    ctx->pc = 0x2088E0u;
    SET_GPR_U32(ctx, 31, 0x2088E8u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x2088E0u, 0x2088E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088E8u;
label_2088e8:
    // 0x2088e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2088e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2088ec: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2088ECu;
    {
        const bool branch_taken_0x2088ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2088ec) {
            ctx->pc = 0x208924u;
            goto label_208924;
        }
    }
    ctx->pc = 0x2088F4u;
    // 0x2088f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2088f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2088f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2088f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2088fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x208900: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x208900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x208904: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208908: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x208908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20890c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208910: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x208910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x208914: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208918: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x208918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20891c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208920: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x208920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_208924:
    // 0x208924: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208928: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x208928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20892c: 0x3c03466a  lui         $v1, 0x466A
    ctx->pc = 0x20892cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18026 << 16));
    // 0x208930: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x208930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
    // 0x208934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x208934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208938: 0x0  nop
    ctx->pc = 0x208938u;
    // NOP
    // 0x20893c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20893cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208940: 0x0  nop
    ctx->pc = 0x208940u;
    // NOP
    // 0x208944: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x208944u;
    {
        const bool branch_taken_0x208944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208944) {
            ctx->pc = 0x20897Cu;
            goto label_20897c;
        }
    }
    ctx->pc = 0x20894Cu;
    // 0x20894c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20894cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208950: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208954: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x208954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x208958: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x208958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20895c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208960: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x208960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x208964: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208968: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x208968u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20896c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208970: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x208970u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x208974: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208978: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x208978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_20897c:
    // 0x20897c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208980: 0x8c631360  lw          $v1, 0x1360($v1)
    ctx->pc = 0x208980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4960)));
    // 0x208984: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x208984u;
    {
        const bool branch_taken_0x208984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x208984) {
            ctx->pc = 0x2089BCu;
            goto label_2089bc;
        }
    }
    ctx->pc = 0x20898Cu;
    // 0x20898c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208990: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208994: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x208994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x208998: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x208998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20899c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2089a0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2089a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2089a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2089a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2089a8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2089a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2089ac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2089acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2089b0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2089b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2089b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2089b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2089b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2089b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2089bc:
    // 0x2089bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2089bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2089c0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2089c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2089c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2089C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2089C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2089CCu;
}
