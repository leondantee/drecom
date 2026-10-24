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

// Function: Scr_set
// Address: 0x13b4f0 - 0x13b760
void Scr_set_0x13b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_set_0x13b4f0");
#endif

    switch (ctx->pc) {
        case 0x13b584u: goto label_13b584;
        case 0x13b5ccu: goto label_13b5cc;
        case 0x13b5e4u: goto label_13b5e4;
        case 0x13b5f4u: goto label_13b5f4;
        case 0x13b608u: goto label_13b608;
        case 0x13b658u: goto label_13b658;
        case 0x13b664u: goto label_13b664;
        case 0x13b680u: goto label_13b680;
        case 0x13b69cu: goto label_13b69c;
        case 0x13b6b8u: goto label_13b6b8;
        case 0x13b6d4u: goto label_13b6d4;
        case 0x13b6f0u: goto label_13b6f0;
        case 0x13b70cu: goto label_13b70c;
        case 0x13b728u: goto label_13b728;
        case 0x13b744u: goto label_13b744;
        case 0x13b74cu: goto label_13b74c;
        default: break;
    }

    ctx->pc = 0x13b4f0u;

    // 0x13b4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b4f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x13b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x13b4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b4fc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b500: 0x24500b10  addiu       $s0, $v0, 0xB10
    ctx->pc = 0x13b500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x13b504: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x13b504u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0B22u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0B22u, _value); } while (0);
    // 0x13b508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b50c: 0x0  nop
    ctx->pc = 0x13b50cu;
    // NOP
    // 0x13b510: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x13b510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5D0C30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0C30u, _value); } while (0); }
    // 0x13b514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b518: 0x0  nop
    ctx->pc = 0x13b518u;
    // NOP
    // 0x13b51c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x13b51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5D0C34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0C34u, _value); } while (0); }
    // 0x13b520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b524: 0x0  nop
    ctx->pc = 0x13b524u;
    // NOP
    // 0x13b528: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x13b528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5D0C38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0C38u, _value); } while (0); }
    // 0x13b52c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13b530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13b530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b534: 0x0  nop
    ctx->pc = 0x13b534u;
    // NOP
    // 0x13b538: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x13b538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5D0C3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0C3Cu, _value); } while (0); }
    // 0x13b53c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b53cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b540: 0x0  nop
    ctx->pc = 0x13b540u;
    // NOP
    // 0x13b544: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x13b544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5D0BE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0BE0u, _value); } while (0); }
    // 0x13b548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b54c: 0x0  nop
    ctx->pc = 0x13b54cu;
    // NOP
    // 0x13b550: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x13b550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5D0BE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0BE4u, _value); } while (0); }
    // 0x13b554: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b558: 0x0  nop
    ctx->pc = 0x13b558u;
    // NOP
    // 0x13b55c: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x13b55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5D0BE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0BE8u, _value); } while (0); }
    // 0x13b560: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b564: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x13b564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0068u));
    // 0x13b568: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x13b568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b56c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b570: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x13b570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x13b574: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x13b574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b578: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13b578u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b57c: 0xc04edd8  jal         func_13B760
    ctx->pc = 0x13B57Cu;
    SET_GPR_U32(ctx, 31, 0x13B584u);
    ctx->pc = 0x13B760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B760u, 0x13B57Cu, 0x13B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B584u;
label_13b584:
    // 0x13b584: 0x3c020160  lui         $v0, 0x160
    ctx->pc = 0x13b584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)352 << 16));
    // 0x13b588: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x13b588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x13b58c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b590: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x13b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x13b594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b594u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13b598: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13b59c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13b59cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x13b5a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b5a4: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x13b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x13b5a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13b5ac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13b5b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13b5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13b5b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13b5b8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13b5b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b5bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b5c0: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x13b5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13b5c4: 0xc04f07c  jal         func_13C1F0
    ctx->pc = 0x13B5C4u;
    SET_GPR_U32(ctx, 31, 0x13B5CCu);
    ctx->pc = 0x13C1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1F0u, 0x13B5C4u, 0x13B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5CCu;
label_13b5cc:
    // 0x13b5cc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13b5d0: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x13b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x13b5d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13b5d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x13b5d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13b5d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b5dc: 0xc04f0d4  jal         func_13C350
    ctx->pc = 0x13B5DCu;
    SET_GPR_U32(ctx, 31, 0x13B5E4u);
    ctx->pc = 0x13C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C350u, 0x13B5DCu, 0x13B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5E4u;
label_13b5e4:
    // 0x13b5e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13b5e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b5e8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x13b5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13b5ec: 0xc05be64  jal         func_16F990
    ctx->pc = 0x13B5ECu;
    SET_GPR_U32(ctx, 31, 0x13B5F4u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x13B5ECu, 0x13B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B5F4u;
label_13b5f4:
    // 0x13b5f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13b5f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b5f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13b5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13b5fc: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x13b5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13b600: 0xc04f160  jal         func_13C580
    ctx->pc = 0x13B600u;
    SET_GPR_U32(ctx, 31, 0x13B608u);
    ctx->pc = 0x13C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C580u, 0x13B600u, 0x13B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B608u;
label_13b608:
    // 0x13b608: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13b608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13b60c: 0x24630ae8  addiu       $v1, $v1, 0xAE8
    ctx->pc = 0x13b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x13b610: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13b610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x13b614: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b618: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x13b618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x13b61c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13b620: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13b620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13b624: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13b624u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x13b628: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13b62c: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x13b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x13b630: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13b630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x13b634: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x13b634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13b638: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13b638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13b63c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x13b63cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x13b640: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x13b640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x13b644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B644u;
    {
        const bool branch_taken_0x13b644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b644) {
            ctx->pc = 0x13B658u;
            goto label_13b658;
        }
    }
    ctx->pc = 0x13B64Cu;
    // 0x13b64c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13b64cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b650: 0xc06c408  jal         func_1B1020
    ctx->pc = 0x13B650u;
    SET_GPR_U32(ctx, 31, 0x13B658u);
    ctx->pc = 0x1B1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1020u, 0x13B650u, 0x13B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B658u;
label_13b658:
    // 0x13b658: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x13b658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x13b65c: 0xc04f114  jal         func_13C450
    ctx->pc = 0x13B65Cu;
    SET_GPR_U32(ctx, 31, 0x13B664u);
    ctx->pc = 0x13C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C450u, 0x13B65Cu, 0x13B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B664u;
label_13b664:
    // 0x13b664: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b668: 0x244466b0  addiu       $a0, $v0, 0x66B0
    ctx->pc = 0x13b668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26288));
    // 0x13b66c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b66cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b670: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b670u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b674: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b674u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b678: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B678u;
    SET_GPR_U32(ctx, 31, 0x13B680u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B678u, 0x13B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B680u;
label_13b680:
    // 0x13b680: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b684: 0x244466d0  addiu       $a0, $v0, 0x66D0
    ctx->pc = 0x13b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26320));
    // 0x13b688: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b68c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b68cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b690: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b690u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b694: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B694u;
    SET_GPR_U32(ctx, 31, 0x13B69Cu);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B694u, 0x13B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B69Cu;
label_13b69c:
    // 0x13b69c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b6a0: 0x244466f0  addiu       $a0, $v0, 0x66F0
    ctx->pc = 0x13b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x13b6a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b6a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6a8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b6a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b6acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6b0: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B6B0u;
    SET_GPR_U32(ctx, 31, 0x13B6B8u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B6B0u, 0x13B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6B8u;
label_13b6b8:
    // 0x13b6b8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b6bc: 0x24446710  addiu       $a0, $v0, 0x6710
    ctx->pc = 0x13b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
    // 0x13b6c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b6c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b6c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b6c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6cc: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B6CCu;
    SET_GPR_U32(ctx, 31, 0x13B6D4u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B6CCu, 0x13B6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6D4u;
label_13b6d4:
    // 0x13b6d4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b6d8: 0x24446730  addiu       $a0, $v0, 0x6730
    ctx->pc = 0x13b6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
    // 0x13b6dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b6dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b6e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b6e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b6e8: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B6E8u;
    SET_GPR_U32(ctx, 31, 0x13B6F0u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B6E8u, 0x13B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6F0u;
label_13b6f0:
    // 0x13b6f0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b6f4: 0x24446750  addiu       $a0, $v0, 0x6750
    ctx->pc = 0x13b6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26448));
    // 0x13b6f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b6fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b6fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b700: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b700u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b704: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B704u;
    SET_GPR_U32(ctx, 31, 0x13B70Cu);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B704u, 0x13B70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B70Cu;
label_13b70c:
    // 0x13b70c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b710: 0x24446770  addiu       $a0, $v0, 0x6770
    ctx->pc = 0x13b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26480));
    // 0x13b714: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13b714u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b718: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b718u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b71c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b71cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b720: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B720u;
    SET_GPR_U32(ctx, 31, 0x13B728u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B720u, 0x13B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B728u;
label_13b728:
    // 0x13b728: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13b728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13b72c: 0x24446790  addiu       $a0, $v0, 0x6790
    ctx->pc = 0x13b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26512));
    // 0x13b730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13b730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b734: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13b734u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b738: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13b738u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13b73c: 0xc075bb4  jal         func_1D6ED0
    ctx->pc = 0x13B73Cu;
    SET_GPR_U32(ctx, 31, 0x13B744u);
    ctx->pc = 0x1D6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6ED0u, 0x13B73Cu, 0x13B744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B744u;
label_13b744:
    // 0x13b744: 0xc04f890  jal         func_13E240
    ctx->pc = 0x13B744u;
    SET_GPR_U32(ctx, 31, 0x13B74Cu);
    ctx->pc = 0x13E240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E240u, 0x13B744u, 0x13B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B74Cu;
label_13b74c:
    // 0x13b74c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x13b74cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b754: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13b754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b758: 0x3e00008  jr          $ra
    ctx->pc = 0x13B758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B760u;
}
