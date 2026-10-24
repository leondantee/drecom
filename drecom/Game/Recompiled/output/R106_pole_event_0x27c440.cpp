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

// Function: R106_pole_event
// Address: 0x27c440 - 0x27ca1c
void R106_pole_event_0x27c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_pole_event_0x27c440");
#endif

    switch (ctx->pc) {
        case 0x27c4b4u: goto label_27c4b4;
        case 0x27c4c8u: goto label_27c4c8;
        case 0x27c4d8u: goto label_27c4d8;
        case 0x27c4ecu: goto label_27c4ec;
        case 0x27c4f8u: goto label_27c4f8;
        case 0x27c500u: goto label_27c500;
        case 0x27c540u: goto label_27c540;
        case 0x27c55cu: goto label_27c55c;
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5e8u: goto label_27c5e8;
        case 0x27c608u: goto label_27c608;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c674u: goto label_27c674;
        case 0x27c6c8u: goto label_27c6c8;
        case 0x27c6d8u: goto label_27c6d8;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c6f8u: goto label_27c6f8;
        case 0x27c708u: goto label_27c708;
        case 0x27c71cu: goto label_27c71c;
        case 0x27c73cu: goto label_27c73c;
        case 0x27c744u: goto label_27c744;
        case 0x27c784u: goto label_27c784;
        case 0x27c7a0u: goto label_27c7a0;
        case 0x27c7e4u: goto label_27c7e4;
        case 0x27c7f8u: goto label_27c7f8;
        case 0x27c804u: goto label_27c804;
        case 0x27c878u: goto label_27c878;
        case 0x27c888u: goto label_27c888;
        case 0x27c8a8u: goto label_27c8a8;
        case 0x27c8c4u: goto label_27c8c4;
        case 0x27c8d4u: goto label_27c8d4;
        case 0x27c8e8u: goto label_27c8e8;
        case 0x27c93cu: goto label_27c93c;
        case 0x27c9b0u: goto label_27c9b0;
        case 0x27ca04u: goto label_27ca04;
        default: break;
    }

    ctx->pc = 0x27c440u;

    // 0x27c440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27c444: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x27c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x27c448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27c44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27c450: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c454: 0x8c30f9ec  lw          $s0, -0x614($at)
    ctx->pc = 0x27c454u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x27c458: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c45c: 0x90221b48  lbu         $v0, 0x1B48($at)
    ctx->pc = 0x27c45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B48u));
    // 0x27c460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c464: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c468: 0xa0221b48  sb          $v0, 0x1B48($at)
    ctx->pc = 0x27c468u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B48u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B48u, _value); } while (0);
    // 0x27c46c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c470: 0x90221b49  lbu         $v0, 0x1B49($at)
    ctx->pc = 0x27c470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B49u));
    // 0x27c474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c478: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c47c: 0xa0221b49  sb          $v0, 0x1B49($at)
    ctx->pc = 0x27c47cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B49u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B49u, _value); } while (0);
    // 0x27c480: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c484: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c488: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27c488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27c48c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27c48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27c490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c494: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c498: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c49c: 0xa0201b4c  sb          $zero, 0x1B4C($at)
    ctx->pc = 0x27c49cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c4a0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27c4a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27c4a8: 0x2445ca20  addiu       $a1, $v0, -0x35E0
    ctx->pc = 0x27c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953504));
    // 0x27c4ac: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27C4ACu;
    SET_GPR_U32(ctx, 31, 0x27C4B4u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27C4ACu, 0x27C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4B4u;
label_27c4b4:
    // 0x27c4b4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27c4b8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27c4bc: 0x2445d090  addiu       $a1, $v0, -0x2F70
    ctx->pc = 0x27c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955152));
    // 0x27c4c0: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27C4C0u;
    SET_GPR_U32(ctx, 31, 0x27C4C8u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27C4C0u, 0x27C4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4C8u;
label_27c4c8:
    // 0x27c4c8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x27c4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x27c4cc: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x27c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x27c4d0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C4D0u;
    SET_GPR_U32(ctx, 31, 0x27C4D8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C4D0u, 0x27C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4D8u;
label_27c4d8:
    // 0x27c4d8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c4dc: 0x34447070  ori         $a0, $v0, 0x7070
    ctx->pc = 0x27c4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28784);
    // 0x27c4e0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x27c4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x27c4e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C4E4u;
    SET_GPR_U32(ctx, 31, 0x27C4ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C4E4u, 0x27C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4ECu;
label_27c4ec:
    // 0x27c4ec: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c4ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c4f0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27C4F0u;
    {
        const bool branch_taken_0x27c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c4f0) {
            ctx->pc = 0x27C560u;
            goto label_27c560;
        }
    }
    ctx->pc = 0x27C4F8u;
label_27c4f8:
    // 0x27c4f8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27C4F8u;
    SET_GPR_U32(ctx, 31, 0x27C500u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27C4F8u, 0x27C500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C500u;
label_27c500:
    // 0x27c500: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27c500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27c504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27c504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c508: 0x0  nop
    ctx->pc = 0x27c508u;
    // NOP
    // 0x27c50c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27c50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27c510: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x27c510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x27c514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c518: 0x0  nop
    ctx->pc = 0x27c518u;
    // NOP
    // 0x27c51c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c51cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27c520: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27c520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27c524: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c528: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c52c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c530: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c534: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27c534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c538: 0xc084964  jal         func_212590
    ctx->pc = 0x27C538u;
    SET_GPR_U32(ctx, 31, 0x27C540u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C538u, 0x27C540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C540u;
label_27c540:
    // 0x27c540: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c544: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c548: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c548u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c54c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c550: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27c550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c554: 0xc084964  jal         func_212590
    ctx->pc = 0x27C554u;
    SET_GPR_U32(ctx, 31, 0x27C55Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C554u, 0x27C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C55Cu;
label_27c55c:
    // 0x27c55c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27c560:
    // 0x27c560: 0x2e220014  sltiu       $v0, $s1, 0x14
    ctx->pc = 0x27c560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x27c564: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27C564u;
    {
        const bool branch_taken_0x27c564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c564) {
            ctx->pc = 0x27C4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c4f8;
        }
    }
    ctx->pc = 0x27C56Cu;
    // 0x27c56c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c570: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c578: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c57c: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c57cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c584: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c588: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c58c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27c590: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c594: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c59c: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c5a0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x27c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x27c5a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27c5a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c5ac: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c5acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c5b0: 0xc09f3a0  jal         func_27CE80
    ctx->pc = 0x27C5B0u;
    SET_GPR_U32(ctx, 31, 0x27C5B8u);
    ctx->pc = 0x27CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CE80u, 0x27C5B0u, 0x27C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5B8u;
label_27c5b8:
    // 0x27c5b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27c5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27c5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c5c0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27c5c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c5c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27c5c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c5c8: 0x24060173  addiu       $a2, $zero, 0x173
    ctx->pc = 0x27c5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
    // 0x27c5cc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x27C5CCu;
    SET_GPR_U32(ctx, 31, 0x27C5D4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x27C5CCu, 0x27C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5D4u;
label_27c5d4:
    // 0x27c5d4: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c5d8: 0x3444a0a0  ori         $a0, $v0, 0xA0A0
    ctx->pc = 0x27c5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41120);
    // 0x27c5dc: 0x3c050173  lui         $a1, 0x173
    ctx->pc = 0x27c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)371 << 16));
    // 0x27c5e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C5E0u;
    SET_GPR_U32(ctx, 31, 0x27C5E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C5E0u, 0x27C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5E8u;
label_27c5e8:
    // 0x27c5e8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27c5e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27c5ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27c5f0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27c5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c5f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27c5f8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x27c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x27c5fc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c5fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c600: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27C600u;
    {
        const bool branch_taken_0x27c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c600) {
            ctx->pc = 0x27C630u;
            goto label_27c630;
        }
    }
    ctx->pc = 0x27C608u;
label_27c608:
    // 0x27c608: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c60c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27c610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c614: 0x0  nop
    ctx->pc = 0x27c614u;
    // NOP
    // 0x27c618: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c61c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c624: 0xc084964  jal         func_212590
    ctx->pc = 0x27C624u;
    SET_GPR_U32(ctx, 31, 0x27C62Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C624u, 0x27C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C62Cu;
label_27c62c:
    // 0x27c62c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27c630:
    // 0x27c630: 0x2e220173  sltiu       $v0, $s1, 0x173
    ctx->pc = 0x27c630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)371) ? 1 : 0);
    // 0x27c634: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27C634u;
    {
        const bool branch_taken_0x27c634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c634) {
            ctx->pc = 0x27C608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c608;
        }
    }
    ctx->pc = 0x27C63Cu;
    // 0x27c63c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c640: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c648: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c64c: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c64cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c650: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c654: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c654u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c658: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c65c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27c660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C660u;
    {
        const bool branch_taken_0x27c660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c660) {
            ctx->pc = 0x27C674u;
            goto label_27c674;
        }
    }
    ctx->pc = 0x27C668u;
    // 0x27c668: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27c66c: 0xc062010  jal         func_188040
    ctx->pc = 0x27C66Cu;
    SET_GPR_U32(ctx, 31, 0x27C674u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x27C66Cu, 0x27C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C674u;
label_27c674:
    // 0x27c674: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c678: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c678u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c67c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x27c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x27c680: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27c680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c684: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27c688: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c68c: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c68cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c690: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c694: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c698: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x27c698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x27c69c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27c69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c6a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27c6a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c6a8: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c6a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c6ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c6b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27c6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c6b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27c6b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c6b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27c6b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c6bc: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x27c6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x27c6c0: 0xc0561d4  jal         func_158750
    ctx->pc = 0x27C6C0u;
    SET_GPR_U32(ctx, 31, 0x27C6C8u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x27C6C0u, 0x27C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6C8u;
label_27c6c8:
    // 0x27c6c8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x27c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x27c6cc: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x27c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x27c6d0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C6D0u;
    SET_GPR_U32(ctx, 31, 0x27C6D8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C6D0u, 0x27C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6D8u;
label_27c6d8:
    // 0x27c6d8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c6dc: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x27c6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c6e0: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x27c6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x27c6e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C6E4u;
    SET_GPR_U32(ctx, 31, 0x27C6ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C6E4u, 0x27C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6ECu;
label_27c6ec:
    // 0x27c6ec: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x27c6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x27c6f0: 0xc084964  jal         func_212590
    ctx->pc = 0x27C6F0u;
    SET_GPR_U32(ctx, 31, 0x27C6F8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C6F0u, 0x27C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C6F8u;
label_27c6f8:
    // 0x27c6f8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x27c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x27c6fc: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x27c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x27c700: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C700u;
    SET_GPR_U32(ctx, 31, 0x27C708u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C700u, 0x27C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C708u;
label_27c708:
    // 0x27c708: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c70c: 0x34447070  ori         $a0, $v0, 0x7070
    ctx->pc = 0x27c70cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28784);
    // 0x27c710: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x27c710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x27c714: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C714u;
    SET_GPR_U32(ctx, 31, 0x27C71Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C714u, 0x27C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C71Cu;
label_27c71c:
    // 0x27c71c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c720: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c728: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c72c: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c72cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c730: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c730u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c734: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27C734u;
    {
        const bool branch_taken_0x27c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c734) {
            ctx->pc = 0x27C7A8u;
            goto label_27c7a8;
        }
    }
    ctx->pc = 0x27C73Cu;
label_27c73c:
    // 0x27c73c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27C73Cu;
    SET_GPR_U32(ctx, 31, 0x27C744u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27C73Cu, 0x27C744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C744u;
label_27c744:
    // 0x27c744: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27c748: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27c748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c74c: 0x0  nop
    ctx->pc = 0x27c74cu;
    // NOP
    // 0x27c750: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27c750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27c754: 0x3c0240f0  lui         $v0, 0x40F0
    ctx->pc = 0x27c754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16624 << 16));
    // 0x27c758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c75c: 0x0  nop
    ctx->pc = 0x27c75cu;
    // NOP
    // 0x27c760: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27c760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27c764: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x27c764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27c768: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c76c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c774: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c778: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27c778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27c77c: 0xc084964  jal         func_212590
    ctx->pc = 0x27C77Cu;
    SET_GPR_U32(ctx, 31, 0x27C784u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C77Cu, 0x27C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C784u;
label_27c784:
    // 0x27c784: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c788: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27c788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c78c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c78cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c790: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c798: 0xc084964  jal         func_212590
    ctx->pc = 0x27C798u;
    SET_GPR_U32(ctx, 31, 0x27C7A0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C798u, 0x27C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7A0u;
label_27c7a0:
    // 0x27c7a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27c7a4: 0x0  nop
    ctx->pc = 0x27c7a4u;
    // NOP
label_27c7a8:
    // 0x27c7a8: 0x2e220014  sltiu       $v0, $s1, 0x14
    ctx->pc = 0x27c7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x27c7ac: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x27C7ACu;
    {
        const bool branch_taken_0x27c7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c7ac) {
            ctx->pc = 0x27C73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c73c;
        }
    }
    ctx->pc = 0x27C7B4u;
    // 0x27c7b4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c7b8: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c7b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c7bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c7c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c7c4: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c7c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c7c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27c7cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27c7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c7d0: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x27c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27c7d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27c7d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c7d8: 0x24060173  addiu       $a2, $zero, 0x173
    ctx->pc = 0x27c7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
    // 0x27c7dc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x27C7DCu;
    SET_GPR_U32(ctx, 31, 0x27C7E4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x27C7DCu, 0x27C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7E4u;
label_27c7e4:
    // 0x27c7e4: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c7e8: 0x3444a0a0  ori         $a0, $v0, 0xA0A0
    ctx->pc = 0x27c7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41120);
    // 0x27c7ec: 0x3c050173  lui         $a1, 0x173
    ctx->pc = 0x27c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)371 << 16));
    // 0x27c7f0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C7F0u;
    SET_GPR_U32(ctx, 31, 0x27C7F8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C7F0u, 0x27C7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C7F8u;
label_27c7f8:
    // 0x27c7f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27c7f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c7fc: 0x0  nop
    ctx->pc = 0x27c7fcu;
    // NOP
    // 0x27c800: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_27c804:
    // 0x27c804: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x27c804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c808: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27c808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x27c80c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c80cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c810: 0x0  nop
    ctx->pc = 0x27c810u;
    // NOP
    // 0x27c814: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c818: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27c81c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c820: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c828: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c82c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c830: 0x3c02c692  lui         $v0, 0xC692
    ctx->pc = 0x27c830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50834 << 16));
    // 0x27c834: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27c834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27c838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c83c: 0x0  nop
    ctx->pc = 0x27c83cu;
    // NOP
    // 0x27c840: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c844: 0x0  nop
    ctx->pc = 0x27c844u;
    // NOP
    // 0x27c848: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27C848u;
    {
        const bool branch_taken_0x27c848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c848) {
            ctx->pc = 0x27C86Cu;
            goto label_27c86c;
        }
    }
    ctx->pc = 0x27C850u;
    // 0x27c850: 0x3c02c692  lui         $v0, 0xC692
    ctx->pc = 0x27c850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50834 << 16));
    // 0x27c854: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27c854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27c858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c85c: 0x0  nop
    ctx->pc = 0x27c85cu;
    // NOP
    // 0x27c860: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c864: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27C864u;
    {
        const bool branch_taken_0x27c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c864) {
            ctx->pc = 0x27C880u;
            goto label_27c880;
        }
    }
    ctx->pc = 0x27C86Cu;
label_27c86c:
    // 0x27c86c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c870: 0xc084964  jal         func_212590
    ctx->pc = 0x27C870u;
    SET_GPR_U32(ctx, 31, 0x27C878u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C870u, 0x27C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C878u;
label_27c878:
    // 0x27c878: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x27C878u;
    {
        const bool branch_taken_0x27c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c878) {
            ctx->pc = 0x27C804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c804;
        }
    }
    ctx->pc = 0x27C880u;
label_27c880:
    // 0x27c880: 0xc0685c8  jal         func_1A1720
    ctx->pc = 0x27C880u;
    SET_GPR_U32(ctx, 31, 0x27C888u);
    ctx->pc = 0x1A1720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1720u, 0x27C880u, 0x27C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C888u;
label_27c888:
    // 0x27c888: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c88c: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c890: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c894: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c898: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c898u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c89c: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x27c89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27c8a0: 0xc056204  jal         func_158810
    ctx->pc = 0x27C8A0u;
    SET_GPR_U32(ctx, 31, 0x27C8A8u);
    ctx->pc = 0x158810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158810u, 0x27C8A0u, 0x27C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8A8u;
label_27c8a8:
    // 0x27c8a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c8ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27c8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c8b0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27c8b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c8b4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27c8b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c8b8: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x27c8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x27c8bc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x27C8BCu;
    SET_GPR_U32(ctx, 31, 0x27C8C4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x27C8BCu, 0x27C8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8C4u;
label_27c8c4:
    // 0x27c8c4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x27c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x27c8c8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x27c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x27c8cc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C8CCu;
    SET_GPR_U32(ctx, 31, 0x27C8D4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C8CCu, 0x27C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8D4u;
label_27c8d4:
    // 0x27c8d4: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c8d8: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x27c8d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c8dc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x27c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x27c8e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C8E0u;
    SET_GPR_U32(ctx, 31, 0x27C8E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C8E0u, 0x27C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8E8u;
label_27c8e8:
    // 0x27c8e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c8ec: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c8f0: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x27c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x27c8f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27c8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c8f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27c8fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c900: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c904: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c908: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c90c: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x27c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x27c910: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27c910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c914: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27c914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27c918: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c91c: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c91cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c920: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x27c920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x27c924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c928: 0x0  nop
    ctx->pc = 0x27c928u;
    // NOP
    // 0x27c92c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27c930: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c930u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c934: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x27C934u;
    {
        const bool branch_taken_0x27c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c934) {
            ctx->pc = 0x27C9B8u;
            goto label_27c9b8;
        }
    }
    ctx->pc = 0x27C93Cu;
label_27c93c:
    // 0x27c93c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x27c93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c940: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27c940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x27c944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c948: 0x0  nop
    ctx->pc = 0x27c948u;
    // NOP
    // 0x27c94c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27c94cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27c950: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27c954: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c958: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x27c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27c95c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c960: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c964: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c968: 0x3c02c692  lui         $v0, 0xC692
    ctx->pc = 0x27c968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50834 << 16));
    // 0x27c96c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27c970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c974: 0x0  nop
    ctx->pc = 0x27c974u;
    // NOP
    // 0x27c978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c97c: 0x0  nop
    ctx->pc = 0x27c97cu;
    // NOP
    // 0x27c980: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27C980u;
    {
        const bool branch_taken_0x27c980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c980) {
            ctx->pc = 0x27C9A4u;
            goto label_27c9a4;
        }
    }
    ctx->pc = 0x27C988u;
    // 0x27c988: 0x3c02c692  lui         $v0, 0xC692
    ctx->pc = 0x27c988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50834 << 16));
    // 0x27c98c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27c990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c994: 0x0  nop
    ctx->pc = 0x27c994u;
    // NOP
    // 0x27c998: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c99c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27C99Cu;
    {
        const bool branch_taken_0x27c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c99c) {
            ctx->pc = 0x27C9C8u;
            goto label_27c9c8;
        }
    }
    ctx->pc = 0x27C9A4u;
label_27c9a4:
    // 0x27c9a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c9a8: 0xc084964  jal         func_212590
    ctx->pc = 0x27C9A8u;
    SET_GPR_U32(ctx, 31, 0x27C9B0u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C9A8u, 0x27C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C9B0u;
label_27c9b0:
    // 0x27c9b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27c9b4: 0x0  nop
    ctx->pc = 0x27c9b4u;
    // NOP
label_27c9b8:
    // 0x27c9b8: 0x2e220173  sltiu       $v0, $s1, 0x173
    ctx->pc = 0x27c9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)371) ? 1 : 0);
    // 0x27c9bc: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x27C9BCu;
    {
        const bool branch_taken_0x27c9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c9bc) {
            ctx->pc = 0x27C93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c93c;
        }
    }
    ctx->pc = 0x27C9C4u;
    // 0x27c9c4: 0x0  nop
    ctx->pc = 0x27c9c4u;
    // NOP
label_27c9c8:
    // 0x27c9c8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27c9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27c9cc: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x27c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x27c9d0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27c9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c9d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c9d8: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x27c9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27c9dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c9e0: 0xae021290  sw          $v0, 0x1290($s0)
    ctx->pc = 0x27c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4752), GPR_U32(ctx, 2));
    // 0x27c9e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c9e8: 0x8c221a9c  lw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c9ec: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x27c9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x27c9f0: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x27c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x27c9f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c9f8: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c9f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c9fc: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27C9FCu;
    SET_GPR_U32(ctx, 31, 0x27CA04u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27C9FCu, 0x27CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CA04u;
label_27ca04:
    // 0x27ca04: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27ca04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ca08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ca08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ca0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ca0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ca10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27ca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27ca14: 0x3e00008  jr          $ra
    ctx->pc = 0x27CA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CA1Cu;
}
