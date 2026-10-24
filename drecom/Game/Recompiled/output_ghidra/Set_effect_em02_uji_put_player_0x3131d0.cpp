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

// Function: Set_effect_em02_uji_put_player
// Address: 0x3131d0 - 0x3134cc
void Set_effect_em02_uji_put_player_0x3131d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em02_uji_put_player_0x3131d0");
#endif

    switch (ctx->pc) {
        case 0x3131f4u: goto label_3131f4;
        case 0x313228u: goto label_313228;
        case 0x313248u: goto label_313248;
        case 0x3133d8u: goto label_3133d8;
        case 0x3134b8u: goto label_3134b8;
        default: break;
    }

    ctx->pc = 0x3131d0u;

    // 0x3131d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3131d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3131d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3131d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3131d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3131d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3131dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3131dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3131e0: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x3131e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3131e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3131e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3131e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3131e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3131ec: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x3131ECu;
    SET_GPR_U32(ctx, 31, 0x3131F4u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x3131ECu, 0x3131F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3131F4u;
label_3131f4:
    // 0x3131f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3131f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3131f8: 0x8422f1ac  lh          $v0, -0xE54($at)
    ctx->pc = 0x3131f8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x3131fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3131fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x313200: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x313200u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x313204: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313204u;
    {
        const bool branch_taken_0x313204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313204) {
            ctx->pc = 0x313228u;
            goto label_313228;
        }
    }
    ctx->pc = 0x31320Cu;
    // 0x31320c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x31320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x313210: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x313210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313214: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x313214u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313218: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x313218u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31321c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x31321cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313220: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x313220u;
    SET_GPR_U32(ctx, 31, 0x313228u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x313220u, 0x313228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313228u;
label_313228:
    // 0x313228: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x313228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31322c: 0x8422f1ac  lh          $v0, -0xE54($at)
    ctx->pc = 0x31322cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EF1ACu));
    // 0x313230: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x313230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x313234: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x313234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x313238: 0xa422f1ac  sh          $v0, -0xE54($at)
    ctx->pc = 0x313238u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EF1ACu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3EF1ACu, _value); } while (0);
    // 0x31323c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x313240: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x313240u;
    SET_GPR_U32(ctx, 31, 0x313248u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x313240u, 0x313248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313248u;
label_313248:
    // 0x313248: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31324c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x31324cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313250: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313254: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31325c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31325cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313260: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x313264: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313268: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x31326c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31326cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313270: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313278: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x31327c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x31327cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313280: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x313284: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313288: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x31328c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313290: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x313290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x313294: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x313294u;
    {
        const bool branch_taken_0x313294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313294) {
            ctx->pc = 0x313328u;
            goto label_313328;
        }
    }
    ctx->pc = 0x31329Cu;
    // 0x31329c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3132a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3132a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3132a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3132a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3132a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3132ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3132acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3132b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3132b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3132b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3132b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3132b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3132b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3132bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3132bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3132c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3132c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3132c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3132c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3132c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3132c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3132cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3132ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3132d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3132d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3132d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3132d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3132d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3132d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3132dc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3132dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3132e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3132e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3132e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3132e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3132e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3132E8u;
    {
        const bool branch_taken_0x3132e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3132e8) {
            ctx->pc = 0x31330Cu;
            goto label_31330c;
        }
    }
    ctx->pc = 0x3132F0u;
    // 0x3132f0: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x3132f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3132f4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3132f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3132f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3132f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3132fc: 0x0  nop
    ctx->pc = 0x3132fcu;
    // NOP
    // 0x313300: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313304: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x313304u;
    {
        const bool branch_taken_0x313304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313304) {
            ctx->pc = 0x3133ACu;
            goto label_3133ac;
        }
    }
    ctx->pc = 0x31330Cu;
label_31330c:
    // 0x31330c: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x31330cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x313310: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x313310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x313314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313318: 0x0  nop
    ctx->pc = 0x313318u;
    // NOP
    // 0x31331c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31331cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313320: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x313320u;
    {
        const bool branch_taken_0x313320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313320) {
            ctx->pc = 0x3133ACu;
            goto label_3133ac;
        }
    }
    ctx->pc = 0x313328u;
label_313328:
    // 0x313328: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x31332c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x31332cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313330: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313334: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31333c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313340: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x313344: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313348: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313348u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x31334c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313350: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313354: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313358: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x31335c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x31335cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313360: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x313364: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313368: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313368u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x31336c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31336cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313370: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x313370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x313374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313374u;
    {
        const bool branch_taken_0x313374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313374) {
            ctx->pc = 0x313398u;
            goto label_313398;
        }
    }
    ctx->pc = 0x31337Cu;
    // 0x31337c: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x31337cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x313380: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x313380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x313384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313388: 0x0  nop
    ctx->pc = 0x313388u;
    // NOP
    // 0x31338c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x31338cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313390: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x313390u;
    {
        const bool branch_taken_0x313390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313390) {
            ctx->pc = 0x3133ACu;
            goto label_3133ac;
        }
    }
    ctx->pc = 0x313398u;
label_313398:
    // 0x313398: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x313398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31339c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3133a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3133a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3133a4: 0x0  nop
    ctx->pc = 0x3133a4u;
    // NOP
    // 0x3133a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3133a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3133ac:
    // 0x3133ac: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3133acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x3133b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3133b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3133b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x3133b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3133b8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3133b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3133bc: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x3133bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3133c0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x3133c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3133c4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3133c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3133c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3133c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3133cc: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x3133ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3133d0: 0xc0c4988  jal         func_312620
    ctx->pc = 0x3133D0u;
    SET_GPR_U32(ctx, 31, 0x3133D8u);
    ctx->pc = 0x312620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312620u, 0x3133D0u, 0x3133D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3133D8u;
label_3133d8:
    // 0x3133d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3133d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3133dc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3133dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3133e0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3133e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3133e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3133e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3133e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3133e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3133ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3133ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3133f0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x3133f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3133f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3133f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3133f8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x3133f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x3133fc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3133fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x313400: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x313400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x313404: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x313404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x313408: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x313408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x31340c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x31340cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x313410: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x313410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x313414: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313418: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x313418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x31341c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31341cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x313420: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x313420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x313424: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x313424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x313428: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x313428u;
    {
        const bool branch_taken_0x313428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x313428) {
            ctx->pc = 0x3134B8u;
            goto label_3134b8;
        }
    }
    ctx->pc = 0x313430u;
    // 0x313430: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x313430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313434: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313434u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313438: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31343c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31343cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x313440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313444: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313448: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x313448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31344c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31344cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313450: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x313450u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x313454: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x313454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x313458: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x313458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x31345c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31345cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313460: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x313460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x313464: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x313464u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x313468: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x313468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31346c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31346cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x313470: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x313470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x313474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x313474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x313478: 0x30500019  andi        $s0, $v0, 0x19
    ctx->pc = 0x313478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)25);
    // 0x31347c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x31347cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x313480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313484: 0x0  nop
    ctx->pc = 0x313484u;
    // NOP
    // 0x313488: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x31348c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x31348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x313490: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x313490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x313494: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x313494u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x313498: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x313498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x31349c: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x31349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x3134a0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x3134a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3134a4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3134a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3134a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3134a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3134ac: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x3134acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3134b0: 0xc0c4988  jal         func_312620
    ctx->pc = 0x3134B0u;
    SET_GPR_U32(ctx, 31, 0x3134B8u);
    ctx->pc = 0x312620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312620u, 0x3134B0u, 0x3134B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3134B8u;
label_3134b8:
    // 0x3134b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3134b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3134bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3134bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3134c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3134c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3134c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3134C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3134C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3134CCu;
}
