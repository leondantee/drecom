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

// Function: entry_0024b950
// Address: 0x24b950 - 0x24ba14
void entry_0024b950_0x24b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b950_0x24b950");
#endif

    switch (ctx->pc) {
        case 0x24b95cu: goto label_24b95c;
        case 0x24b970u: goto label_24b970;
        case 0x24b97cu: goto label_24b97c;
        case 0x24b988u: goto label_24b988;
        case 0x24ba10u: goto label_24ba10;
        default: break;
    }

    ctx->pc = 0x24b950u;

    // 0x24b950: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24b954: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24B954u;
    SET_GPR_U32(ctx, 31, 0x24B95Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24B95Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B95Cu) { return; }
    ctx->pc = 0x24B95Cu;
label_24b95c:
    // 0x24b95c: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x24b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24b960: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x24b960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24b964: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x24b964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24b968: 0xc040c92  jal         func_103248
    ctx->pc = 0x24B968u;
    SET_GPR_U32(ctx, 31, 0x24B970u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x24B970u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B970u) { return; }
    ctx->pc = 0x24B970u;
label_24b970:
    // 0x24b970: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x24b970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24b974: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x24B974u;
    SET_GPR_U32(ctx, 31, 0x24B97Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x24B974u, 0x24B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B97Cu;
label_24b97c:
    // 0x24b97c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x24b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24b980: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x24B980u;
    SET_GPR_U32(ctx, 31, 0x24B988u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x24B980u, 0x24B988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B988u;
label_24b988:
    // 0x24b988: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x24b988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b98c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x24b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x24b990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b994: 0x0  nop
    ctx->pc = 0x24b994u;
    // NOP
    // 0x24b998: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24b998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b99c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x24b99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24b9a0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x24b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24b9a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b9ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b9b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b9b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b9b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b9bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24b9bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9c0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x24b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24b9c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b9cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b9d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b9d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b9d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b9dc: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24b9dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24b9e0: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x24b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x24b9e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24b9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24b9e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24b9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24b9ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b9f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24b9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24b9f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24b9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24b9f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24b9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24b9fc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x24b9fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ba00: 0x24042300  addiu       $a0, $zero, 0x2300
    ctx->pc = 0x24ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8960));
    // 0x24ba04: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24ba04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24ba08: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24BA08u;
    SET_GPR_U32(ctx, 31, 0x24BA10u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24BA08u, 0x24BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA10u;
label_24ba10:
    // 0x24ba10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ba10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x24ba14u;
}
