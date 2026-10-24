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

// Function: entry_00204064
// Address: 0x204064 - 0x2040b8
void entry_00204064_0x204064(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204064_0x204064");
#endif

    switch (ctx->pc) {
        case 0x20407cu: goto label_20407c;
        case 0x2040acu: goto label_2040ac;
        default: break;
    }

    ctx->pc = 0x204064u;

    // 0x204064: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x204064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204068: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x204068u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20406c: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x20406cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x204070: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204070u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204074: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x204074u;
    SET_GPR_U32(ctx, 31, 0x20407Cu);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x204074u, 0x20407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20407Cu;
label_20407c:
    // 0x20407c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20407Cu;
    {
        const bool branch_taken_0x20407c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20407c) {
            ctx->pc = 0x2040B8u;
            return;
        }
    }
    ctx->pc = 0x204084u;
    // 0x204084: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x204084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x204088: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x204088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x20408c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20408cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204090: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204094: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x204098: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204098u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20409c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20409cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2040a0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2040a4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2040A4u;
    SET_GPR_U32(ctx, 31, 0x2040ACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2040A4u, 0x2040ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040ACu;
label_2040ac:
    // 0x2040ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2040acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2040b0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2040b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2040b4: 0xa4249270  sh          $a0, -0x6D90($at)
    ctx->pc = 0x2040b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    ctx->pc = 0x2040b8u;
}
