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

// Function: entry_0013f924
// Address: 0x13f924 - 0x13faa8
void entry_0013f924_0x13f924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f924_0x13f924");
#endif

    switch (ctx->pc) {
        case 0x13f948u: goto label_13f948;
        case 0x13f960u: goto label_13f960;
        case 0x13f980u: goto label_13f980;
        case 0x13f998u: goto label_13f998;
        case 0x13f9d8u: goto label_13f9d8;
        case 0x13f9ecu: goto label_13f9ec;
        case 0x13fa04u: goto label_13fa04;
        case 0x13fa20u: goto label_13fa20;
        case 0x13fa78u: goto label_13fa78;
        default: break;
    }

    ctx->pc = 0x13f924u;

    // 0x13f924: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f928: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13f928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13f92c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x13f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f930: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x13f930u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x13f934: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x13f934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x13f938: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f938u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f93c: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f93cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f940: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F940u;
    SET_GPR_U32(ctx, 31, 0x13F948u);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F940u, 0x13F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F948u;
label_13f948:
    // 0x13f948: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f948u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f94c: 0x8fa916a8  lw          $t1, 0x16A8($sp)
    ctx->pc = 0x13f94cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f950: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x13f950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x13f954: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x13f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x13f958: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F958u;
    SET_GPR_U32(ctx, 31, 0x13F960u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F960u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F960u) { return; }
    ctx->pc = 0x13F960u;
label_13f960:
    // 0x13f960: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13f960u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f964: 0x8fa616a8  lw          $a2, 0x16A8($sp)
    ctx->pc = 0x13f964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f968: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13f968u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f96c: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13f96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f970: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x13f970u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13f974: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f978: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F978u;
    SET_GPR_U32(ctx, 31, 0x13F980u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13F980u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F980u) { return; }
    ctx->pc = 0x13F980u;
label_13f980:
    // 0x13f980: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x13f980u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f984: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f988: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13f988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13f98c: 0x27a515e0  addiu       $a1, $sp, 0x15E0
    ctx->pc = 0x13f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5600));
    // 0x13f990: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F990u;
    SET_GPR_U32(ctx, 31, 0x13F998u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F998u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F998u) { return; }
    ctx->pc = 0x13F998u;
label_13f998:
    // 0x13f998: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x13f998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f99c: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9a0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x13f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x13f9a4: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9a8: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x13f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13f9ac: 0xafa416a8  sw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 4));
    // 0x13f9b0: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9b4: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x13f9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x13f9b8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13f9b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13f9bc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x13f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f9c0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13f9c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f9c4: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x13f9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13f9c8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f9c8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f9cc: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f9d0: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F9D0u;
    SET_GPR_U32(ctx, 31, 0x13F9D8u);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F9D0u, 0x13F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F9D8u;
label_13f9d8:
    // 0x13f9d8: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9dc: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x13f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x13f9e0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13f9e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f9e4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F9E4u;
    SET_GPR_U32(ctx, 31, 0x13F9ECu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F9ECu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F9ECu) { return; }
    ctx->pc = 0x13F9ECu;
label_13f9ec:
    // 0x13f9ec: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13f9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f9f4: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f9f8: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f9fc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F9FCu;
    SET_GPR_U32(ctx, 31, 0x13FA04u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13FA04u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FA04u) { return; }
    ctx->pc = 0x13FA04u;
label_13fa04:
    // 0x13fa04: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x13fa04u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fa08: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fa0c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x13fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x13fa10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fa10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fa14: 0x27a51590  addiu       $a1, $sp, 0x1590
    ctx->pc = 0x13fa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5520));
    // 0x13fa18: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FA18u;
    SET_GPR_U32(ctx, 31, 0x13FA20u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FA20u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FA20u) { return; }
    ctx->pc = 0x13FA20u;
label_13fa20:
    // 0x13fa20: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x13fa20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13fa24: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fa28: 0xac65002c  sw          $a1, 0x2C($v1)
    ctx->pc = 0x13fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 5));
    // 0x13fa2c: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fa30: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x13fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13fa34: 0xafa316a8  sw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 3));
    // 0x13fa38: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13fa38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fa3c: 0x27a61250  addiu       $a2, $sp, 0x1250
    ctx->pc = 0x13fa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4688));
    // 0x13fa40: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x13fa40u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13fa44: 0x78e40010  lq          $a0, 0x10($a3)
    ctx->pc = 0x13fa44u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x13fa48: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x13fa48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13fa4c: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x13fa4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x13fa50: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x13fa50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x13fa54: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x13fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x13fa58: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x13fa58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
    // 0x13fa5c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x13fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x13fa60: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x13fa60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x13fa64: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x13fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x13fa68: 0x27a41570  addiu       $a0, $sp, 0x1570
    ctx->pc = 0x13fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fa6c: 0x27a51610  addiu       $a1, $sp, 0x1610
    ctx->pc = 0x13fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fa70: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FA70u;
    SET_GPR_U32(ctx, 31, 0x13FA78u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FA70u, 0x13FA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FA78u;
label_13fa78:
    // 0x13fa78: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fa78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fa7c: 0x32030820  andi        $v1, $s0, 0x820
    ctx->pc = 0x13fa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2080);
    // 0x13fa80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13FA80u;
    {
        const bool branch_taken_0x13fa80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fa80) {
            ctx->pc = 0x13FAA8u;
            return;
        }
    }
    ctx->pc = 0x13FA88u;
    // 0x13fa88: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x13fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x13fa8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fa8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fa90: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fa94: 0x27a51570  addiu       $a1, $sp, 0x1570
    ctx->pc = 0x13fa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5488));
    // 0x13fa98: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fa9c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x13fa9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13faa0: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FAA0u;
    SET_GPR_U32(ctx, 31, 0x13FAA8u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FAA0u, 0x13FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FAA8u;
}
