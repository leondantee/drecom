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

// Function: entry_0020d494
// Address: 0x20d494 - 0x20d55c
void entry_0020d494_0x20d494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d494_0x20d494");
#endif

    switch (ctx->pc) {
        case 0x20d4dcu: goto label_20d4dc;
        case 0x20d4ecu: goto label_20d4ec;
        case 0x20d4fcu: goto label_20d4fc;
        case 0x20d53cu: goto label_20d53c;
        default: break;
    }

    ctx->pc = 0x20d494u;

    // 0x20d494: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20d494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20d498: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d49c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d4a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20d4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20d4a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20d4a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20d4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20d4ac: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x20d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x20d4b0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20d4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20d4b4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x20d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d4b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x20d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d4bc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x20d4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d4c0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x20d4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d4c4: 0x2408001b  addiu       $t0, $zero, 0x1B
    ctx->pc = 0x20d4c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20d4c8: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x20d4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d4cc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x20d4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20d4d0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x20d4d0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d4d4: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20D4D4u;
    SET_GPR_U32(ctx, 31, 0x20D4DCu);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20D4D4u, 0x20D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4DCu;
label_20d4dc:
    // 0x20d4dc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x20d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x20d4e0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20d4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20d4e4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20D4E4u;
    SET_GPR_U32(ctx, 31, 0x20D4ECu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20D4E4u, 0x20D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4ECu;
label_20d4ec:
    // 0x20d4ec: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x20d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x20d4f0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x20d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x20d4f4: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x20D4F4u;
    SET_GPR_U32(ctx, 31, 0x20D4FCu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x20D4F4u, 0x20D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D4FCu;
label_20d4fc:
    // 0x20d4fc: 0x24020508  addiu       $v0, $zero, 0x508
    ctx->pc = 0x20d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x20d500: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x20d500u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20d504: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x20d504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20d508: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20d50c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20d50cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d510: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x20d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20d514: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20d514u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20d518: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20d51c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20d520: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20d524: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d528: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x20d528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20d52c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x20d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20d530: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20d530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20d534: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20D534u;
    SET_GPR_U32(ctx, 31, 0x20D53Cu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20D53Cu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20D53Cu) { return; }
    ctx->pc = 0x20D53Cu;
label_20d53c:
    // 0x20d53c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20d540: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20d544: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20d544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20d548: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x20d548u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x20d54c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x20d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20d550: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20d550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20d554: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20D554u;
    SET_GPR_U32(ctx, 31, 0x20D55Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20D554u, 0x20D55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D55Cu;
}
