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

// Function: entry_0019c314
// Address: 0x19c314 - 0x19c3dc
void entry_0019c314_0x19c314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c314_0x19c314");
#endif

    switch (ctx->pc) {
        case 0x19c35cu: goto label_19c35c;
        case 0x19c36cu: goto label_19c36c;
        case 0x19c37cu: goto label_19c37c;
        case 0x19c3bcu: goto label_19c3bc;
        default: break;
    }

    ctx->pc = 0x19c314u;

    // 0x19c314: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x19c314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x19c318: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19c318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19c31c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c320: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x19c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19c324: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19c328: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c32c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x19c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x19c330: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19c330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19c334: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x19c334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c338: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c33c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x19c33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c340: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c344: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x19c344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x19c348: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x19c348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c34c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x19c34cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19c350: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19c350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c354: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x19C354u;
    SET_GPR_U32(ctx, 31, 0x19C35Cu);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x19C354u, 0x19C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C35Cu;
label_19c35c:
    // 0x19c35c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x19c360: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19c364: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19C364u;
    SET_GPR_U32(ctx, 31, 0x19C36Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19C364u, 0x19C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C36Cu;
label_19c36c:
    // 0x19c36c: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x19c36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x19c370: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x19c370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x19c374: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x19C374u;
    SET_GPR_U32(ctx, 31, 0x19C37Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x19C374u, 0x19C37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C37Cu;
label_19c37c:
    // 0x19c37c: 0x24020508  addiu       $v0, $zero, 0x508
    ctx->pc = 0x19c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x19c380: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x19c380u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19c384: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x19c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x19c388: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x19c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19c38c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19c38cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c390: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x19c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19c394: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19c394u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x19c398: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19c398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19c39c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x19c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x19c3a0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19c3a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c3a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19c3ac: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x19c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19c3b0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x19c3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x19c3b4: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x19C3B4u;
    SET_GPR_U32(ctx, 31, 0x19C3BCu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x19C3BCu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19C3BCu) { return; }
    ctx->pc = 0x19C3BCu;
label_19c3bc:
    // 0x19c3bc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x19c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x19c3c0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19c3c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19c3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c3c8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x19c3c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19c3cc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x19c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19c3d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19c3d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19c3d4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x19C3D4u;
    SET_GPR_U32(ctx, 31, 0x19C3DCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x19C3D4u, 0x19C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C3DCu;
}
