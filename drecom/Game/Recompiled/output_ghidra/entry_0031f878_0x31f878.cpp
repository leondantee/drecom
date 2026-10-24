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

// Function: entry_0031f878
// Address: 0x31f878 - 0x31f918
void entry_0031f878_0x31f878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f878_0x31f878");
#endif

    switch (ctx->pc) {
        case 0x31f8c8u: goto label_31f8c8;
        case 0x31f8e4u: goto label_31f8e4;
        case 0x31f90cu: goto label_31f90c;
        default: break;
    }

    ctx->pc = 0x31f878u;

    // 0x31f878: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x31f878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x31f87c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f880: 0xa0640345  sb          $a0, 0x345($v1)
    ctx->pc = 0x31f880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 837), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f884: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f888: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x31f888u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x31f88c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x31f88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x31f890: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x31f890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31f894: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x31f894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31f898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f89c: 0xa0640348  sb          $a0, 0x348($v1)
    ctx->pc = 0x31f89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 840), (uint8_t)GPR_U32(ctx, 4));
    // 0x31f8a0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x31f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31f8a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x31f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31f8a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8ac: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x31f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f8b0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8b8: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x31f8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f8bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f8c0: 0xc040c80  jal         func_103200
    ctx->pc = 0x31F8C0u;
    SET_GPR_U32(ctx, 31, 0x31F8C8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x31F8C8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31F8C8u) { return; }
    ctx->pc = 0x31F8C8u;
label_31f8c8:
    // 0x31f8c8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31f8c8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31f8cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x31f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f8d4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x31f8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f8d8: 0xc46c027c  lwc1        $f12, 0x27C($v1)
    ctx->pc = 0x31f8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31f8dc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x31F8DCu;
    SET_GPR_U32(ctx, 31, 0x31F8E4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x31F8E4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31F8E4u) { return; }
    ctx->pc = 0x31F8E4u;
label_31f8e4:
    // 0x31f8e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31f8e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31f8e8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x31f8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f8ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x31f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31f8f4: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x31f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31f8f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f8fc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x31f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31f900: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x31f900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f904: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31F904u;
    SET_GPR_U32(ctx, 31, 0x31F90Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31F904u, 0x31F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F90Cu;
label_31f90c:
    // 0x31f90c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31f90cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31f910: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31F910u;
    {
        const bool branch_taken_0x31f910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f910) {
            ctx->pc = 0x31F940u;
            return;
        }
    }
    ctx->pc = 0x31F918u;
}
