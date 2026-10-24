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

// Function: entry_0030f35c
// Address: 0x30f35c - 0x30f420
void entry_0030f35c_0x30f35c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030f35c_0x30f35c");
#endif

    switch (ctx->pc) {
        case 0x30f3b0u: goto label_30f3b0;
        case 0x30f3d4u: goto label_30f3d4;
        case 0x30f3e8u: goto label_30f3e8;
        case 0x30f3f8u: goto label_30f3f8;
        case 0x30f40cu: goto label_30f40c;
        default: break;
    }

    ctx->pc = 0x30f35cu;

    // 0x30f35c: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x30f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x30f360: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x30f360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x30f364: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x30f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x30f368: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x30f368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30f36c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x30f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30f370: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x30f370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30f374: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30f378: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x30f378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30f37c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30f380: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x30f380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f384: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f388: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x30f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x30f38c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x30f38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30f390: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x30f390u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x30f394: 0x3c023fc8  lui         $v0, 0x3FC8
    ctx->pc = 0x30f394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16328 << 16));
    // 0x30f398: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30f39c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30f39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f3a0: 0x27b20250  addiu       $s2, $sp, 0x250
    ctx->pc = 0x30f3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30f3a4: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x30f3a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x30f3a8: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x30F3A8u;
    SET_GPR_U32(ctx, 31, 0x30F3B0u);
    ctx->pc = 0x19DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DC30u, 0x30F3A8u, 0x30F3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F3B0u;
label_30f3b0:
    // 0x30f3b0: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30f3b4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x30f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f3b8: 0x3c02bfc8  lui         $v0, 0xBFC8
    ctx->pc = 0x30f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49096 << 16));
    // 0x30f3bc: 0x3442f5c3  ori         $v0, $v0, 0xF5C3
    ctx->pc = 0x30f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62915);
    // 0x30f3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f3c4: 0x0  nop
    ctx->pc = 0x30f3c4u;
    // NOP
    // 0x30f3c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x30f3c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30f3cc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x30F3CCu;
    SET_GPR_U32(ctx, 31, 0x30F3D4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x30F3CCu, 0x30F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F3D4u;
label_30f3d4:
    // 0x30f3d4: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x30f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30f3d8: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x30f3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30f3dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30f3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30f3e0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x30F3E0u;
    SET_GPR_U32(ctx, 31, 0x30F3E8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x30F3E8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F3E8u) { return; }
    ctx->pc = 0x30F3E8u;
label_30f3e8:
    // 0x30f3e8: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x30f3e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x30f3ec: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x30f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x30f3f0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F3F0u;
    SET_GPR_U32(ctx, 31, 0x30F3F8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F3F8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F3F8u) { return; }
    ctx->pc = 0x30F3F8u;
label_30f3f8:
    // 0x30f3f8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x30f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x30f3fc: 0x27a30260  addiu       $v1, $sp, 0x260
    ctx->pc = 0x30f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x30f400: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x30f400u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x30f404: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F404u;
    SET_GPR_U32(ctx, 31, 0x30F40Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F40Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F40Cu) { return; }
    ctx->pc = 0x30F40Cu;
label_30f40c:
    // 0x30f40c: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x30f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x30f410: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x30f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x30f414: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x30f414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30f418: 0xc040c9e  jal         func_103278
    ctx->pc = 0x30F418u;
    SET_GPR_U32(ctx, 31, 0x30F420u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x30F420u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x30F420u) { return; }
    ctx->pc = 0x30F420u;
}
