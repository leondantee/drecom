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

// Function: R110_init
// Address: 0x2775b0 - 0x2778a0
void R110_init_0x2775b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R110_init_0x2775b0");
#endif

    switch (ctx->pc) {
        case 0x2775d8u: goto label_2775d8;
        case 0x2775e0u: goto label_2775e0;
        case 0x2775f0u: goto label_2775f0;
        case 0x277670u: goto label_277670;
        case 0x2776b8u: goto label_2776b8;
        case 0x277778u: goto label_277778;
        case 0x2777f4u: goto label_2777f4;
        default: break;
    }

    ctx->pc = 0x2775b0u;

    // 0x2775b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2775b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2775b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2775b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2775b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2775b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2775bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2775bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2775c0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2775c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2775c4: 0x24511a50  addiu       $s1, $v0, 0x1A50
    ctx->pc = 0x2775c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
    // 0x2775c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2775c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2775cc: 0x2444de30  addiu       $a0, $v0, -0x21D0
    ctx->pc = 0x2775ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x2775d0: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x2775D0u;
    SET_GPR_U32(ctx, 31, 0x2775D8u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x2775D0u, 0x2775D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775D8u;
label_2775d8:
    // 0x2775d8: 0xc09de54  jal         func_277950
    ctx->pc = 0x2775D8u;
    SET_GPR_U32(ctx, 31, 0x2775E0u);
    ctx->pc = 0x277950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277950u, 0x2775D8u, 0x2775E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775E0u;
label_2775e0:
    // 0x2775e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2775e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2775e4: 0x2444db20  addiu       $a0, $v0, -0x24E0
    ctx->pc = 0x2775e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957856));
    // 0x2775e8: 0xc0a1048  jal         func_284120
    ctx->pc = 0x2775E8u;
    SET_GPR_U32(ctx, 31, 0x2775F0u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x2775E8u, 0x2775F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775F0u;
label_2775f0:
    // 0x2775f0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x2775f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x2775f4: 0x246383c0  addiu       $v1, $v1, -0x7C40
    ctx->pc = 0x2775f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x2775f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2775f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2775fc: 0xac23d91c  sw          $v1, -0x26E4($at)
    ctx->pc = 0x2775fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD91Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD91Cu, _value); } while (0);
    // 0x277600: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277604: 0x8c241aa4  lw          $a0, 0x1AA4($at)
    ctx->pc = 0x277604u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x277608: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x277608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x27760c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27760cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x277610: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x277610u;
    {
        const bool branch_taken_0x277610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x277610) {
            ctx->pc = 0x2776DCu;
            goto label_2776dc;
        }
    }
    ctx->pc = 0x277618u;
    // 0x277618: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x277618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27761c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277620: 0xa023d7d1  sb          $v1, -0x282F($at)
    ctx->pc = 0x277620u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD7D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD7D1u, _value); } while (0);
    // 0x277624: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x277624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x277628: 0x24637a00  addiu       $v1, $v1, 0x7A00
    ctx->pc = 0x277628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31232));
    // 0x27762c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27762cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277630: 0xac23d73c  sw          $v1, -0x28C4($at)
    ctx->pc = 0x277630u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD73Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD73Cu, _value); } while (0);
    // 0x277634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277638: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27763c: 0xa023d871  sb          $v1, -0x278F($at)
    ctx->pc = 0x27763cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD871u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD871u, _value); } while (0);
    // 0x277640: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277644: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277648: 0xa023d911  sb          $v1, -0x26EF($at)
    ctx->pc = 0x277648u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x27764c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277650: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x277650u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x277654: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x277654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277658: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x277658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27765c: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x27765Cu;
    {
        const bool branch_taken_0x27765c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27765c) {
            ctx->pc = 0x2776C8u;
            goto label_2776c8;
        }
    }
    ctx->pc = 0x277664u;
    // 0x277664: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x277664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x277668: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x277668u;
    SET_GPR_U32(ctx, 31, 0x277670u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x277668u, 0x277670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277670u;
label_277670:
    // 0x277670: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277674: 0x8c30f9e0  lw          $s0, -0x620($at)
    ctx->pc = 0x277674u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x277678: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x277678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27767c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x277680: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x277680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x277684: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x277684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x277688: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x277688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27768c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x277690: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x277690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x277694: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x277694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x277698: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x277698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27769c: 0x3444001d  ori         $a0, $v0, 0x1D
    ctx->pc = 0x27769cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2776a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2776a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2776a4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2776a4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2776a8: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x2776a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2776ac: 0x240800c9  addiu       $t0, $zero, 0xC9
    ctx->pc = 0x2776acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2776b0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2776B0u;
    SET_GPR_U32(ctx, 31, 0x2776B8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2776B0u, 0x2776B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776B8u;
label_2776b8:
    // 0x2776b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2776b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2776bc: 0xac201a20  sw          $zero, 0x1A20($at)
    ctx->pc = 0x2776bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A20u, _value); } while (0);
    // 0x2776c0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2776C0u;
    {
        const bool branch_taken_0x2776c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2776c0) {
            ctx->pc = 0x277848u;
            goto label_277848;
        }
    }
    ctx->pc = 0x2776C8u;
label_2776c8:
    // 0x2776c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2776c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2776cc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2776ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2776d0: 0xac231a20  sw          $v1, 0x1A20($at)
    ctx->pc = 0x2776d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A20u, _value); } while (0);
    // 0x2776d4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2776D4u;
    {
        const bool branch_taken_0x2776d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2776d4) {
            ctx->pc = 0x277848u;
            goto label_277848;
        }
    }
    ctx->pc = 0x2776DCu;
label_2776dc:
    // 0x2776dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2776dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2776e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2776e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2776e4: 0xa023d731  sb          $v1, -0x28CF($at)
    ctx->pc = 0x2776e4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
    // 0x2776e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2776e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2776ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2776ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2776f0: 0xa023d7d1  sb          $v1, -0x282F($at)
    ctx->pc = 0x2776f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD7D1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD7D1u, _value); } while (0);
    // 0x2776f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2776f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2776f8: 0x8c30f9e0  lw          $s0, -0x620($at)
    ctx->pc = 0x2776f8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x2776fc: 0x3c03448d  lui         $v1, 0x448D
    ctx->pc = 0x2776fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17549 << 16));
    // 0x277700: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x277700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x277704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277708: 0x0  nop
    ctx->pc = 0x277708u;
    // NOP
    // 0x27770c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x27770cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x277710: 0x3c0341fa  lui         $v1, 0x41FA
    ctx->pc = 0x277710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16890 << 16));
    // 0x277714: 0x346384b1  ori         $v1, $v1, 0x84B1
    ctx->pc = 0x277714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33969);
    // 0x277718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x277718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27771c: 0x0  nop
    ctx->pc = 0x27771cu;
    // NOP
    // 0x277720: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x277720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x277724: 0x3c03c58c  lui         $v1, 0xC58C
    ctx->pc = 0x277724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50572 << 16));
    // 0x277728: 0x34637c00  ori         $v1, $v1, 0x7C00
    ctx->pc = 0x277728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31744);
    // 0x27772c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27772cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277730: 0x0  nop
    ctx->pc = 0x277730u;
    // NOP
    // 0x277734: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x277734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x277738: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x277738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27773c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27773cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277740: 0x0  nop
    ctx->pc = 0x277740u;
    // NOP
    // 0x277744: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x277744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x277748: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x277748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27774c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x27774cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x277750: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x277750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x277754: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277758: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x277758u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27775c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27775cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x277760: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x277760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x277764: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x277764u;
    {
        const bool branch_taken_0x277764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x277764) {
            ctx->pc = 0x27781Cu;
            goto label_27781c;
        }
    }
    ctx->pc = 0x27776Cu;
    // 0x27776c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x277770: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x277770u;
    SET_GPR_U32(ctx, 31, 0x277778u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x277770u, 0x277778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277778u;
label_277778:
    // 0x277778: 0x3c02448d  lui         $v0, 0x448D
    ctx->pc = 0x277778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17549 << 16));
    // 0x27777c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x277780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277784: 0x0  nop
    ctx->pc = 0x277784u;
    // NOP
    // 0x277788: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x277788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27778c: 0x3c0241fa  lui         $v0, 0x41FA
    ctx->pc = 0x27778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16890 << 16));
    // 0x277790: 0x344284b1  ori         $v0, $v0, 0x84B1
    ctx->pc = 0x277790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33969);
    // 0x277794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277798: 0x0  nop
    ctx->pc = 0x277798u;
    // NOP
    // 0x27779c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27779cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2777a0: 0x3c02c58c  lui         $v0, 0xC58C
    ctx->pc = 0x2777a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50572 << 16));
    // 0x2777a4: 0x34427c00  ori         $v0, $v0, 0x7C00
    ctx->pc = 0x2777a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31744);
    // 0x2777a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2777a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2777ac: 0x0  nop
    ctx->pc = 0x2777acu;
    // NOP
    // 0x2777b0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2777b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2777b4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2777b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2777b8: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x2777b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2777bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2777bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2777c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2777c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2777c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2777c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2777c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2777c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2777cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2777ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2777d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2777d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2777d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2777d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2777d8: 0x3444001d  ori         $a0, $v0, 0x1D
    ctx->pc = 0x2777d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x2777dc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2777dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2777e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2777e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2777e4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2777e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2777e8: 0x240800ca  addiu       $t0, $zero, 0xCA
    ctx->pc = 0x2777e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x2777ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2777ECu;
    SET_GPR_U32(ctx, 31, 0x2777F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2777ECu, 0x2777F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777F4u;
label_2777f4:
    // 0x2777f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2777f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2777f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2777f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2777fc: 0xa023d871  sb          $v1, -0x278F($at)
    ctx->pc = 0x2777fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD871u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD871u, _value); } while (0);
    // 0x277800: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x277800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277804: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277808: 0xa023d911  sb          $v1, -0x26EF($at)
    ctx->pc = 0x277808u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x27780c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27780cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277810: 0xac201a20  sw          $zero, 0x1A20($at)
    ctx->pc = 0x277810u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A20u, _value); } while (0);
    // 0x277814: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x277814u;
    {
        const bool branch_taken_0x277814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277814) {
            ctx->pc = 0x277834u;
            goto label_277834;
        }
    }
    ctx->pc = 0x27781Cu;
label_27781c:
    // 0x27781c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277820: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277824: 0xa023d911  sb          $v1, -0x26EF($at)
    ctx->pc = 0x277824u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD911u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD911u, _value); } while (0);
    // 0x277828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27782c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27782cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277830: 0xac231a20  sw          $v1, 0x1A20($at)
    ctx->pc = 0x277830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621A20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A20u, _value); } while (0);
label_277834:
    // 0x277834: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277838: 0x8c30f9e4  lw          $s0, -0x61C($at)
    ctx->pc = 0x277838u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x27783c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x277840: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x277840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x277844: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x277844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_277848:
    // 0x277848: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x277848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27784c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27784cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277850: 0xa023d4b1  sb          $v1, -0x2B4F($at)
    ctx->pc = 0x277850u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x277854: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x277854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x277858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27785c: 0xa023d4b3  sb          $v1, -0x2B4D($at)
    ctx->pc = 0x27785cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B3u, _value); } while (0);
    // 0x277860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277864: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277868: 0xa423d4b8  sh          $v1, -0x2B48($at)
    ctx->pc = 0x277868u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4B8u, _value); } while (0);
    // 0x27786c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27786cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277870: 0xa420d4ba  sh          $zero, -0x2B46($at)
    ctx->pc = 0x277870u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BAu, _value); } while (0);
    // 0x277874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277878: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27787c: 0xa423d4bc  sh          $v1, -0x2B44($at)
    ctx->pc = 0x27787cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BCu, _value); } while (0);
    // 0x277880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277884: 0xa420d4be  sh          $zero, -0x2B42($at)
    ctx->pc = 0x277884u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4BEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BEu, _value); } while (0);
    // 0x277888: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x277888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27788c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27788cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277894: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x277894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x277898: 0x3e00008  jr          $ra
    ctx->pc = 0x277898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2778A0u;
}
