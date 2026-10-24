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

// Function: entry_001c7170
// Address: 0x1c7170 - 0x1c71e4
void entry_001c7170_0x1c7170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7170_0x1c7170");
#endif

    switch (ctx->pc) {
        case 0x1c7194u: goto label_1c7194;
        case 0x1c71e0u: goto label_1c71e0;
        default: break;
    }

    ctx->pc = 0x1c7170u;

    // 0x1c7170: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7174: 0x908309da  lbu         $v1, 0x9DA($a0)
    ctx->pc = 0x1c7174u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2522)));
    // 0x1c7178: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c7178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c717c: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x1c717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x1c7180: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1c7180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c7184: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C7184u;
    {
        const bool branch_taken_0x1c7184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c7184) {
            ctx->pc = 0x1C71E4u;
            return;
        }
    }
    ctx->pc = 0x1C718Cu;
    // 0x1c718c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1C718Cu;
    SET_GPR_U32(ctx, 31, 0x1C7194u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1C718Cu, 0x1C7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7194u;
label_1c7194:
    // 0x1c7194: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c7194u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7198: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c7198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c719c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1c719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1c71a0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1c71a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c71a4: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1c71a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1c71a8: 0x24c59228  addiu       $a1, $a2, -0x6DD8
    ctx->pc = 0x1c71a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939176));
    // 0x1c71ac: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1c71acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c71b0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1c71b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c71b4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x1c71b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1c71b8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c71b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c71bc: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x1c71bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x1c71c0: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x1c71c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x1c71c4: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1c71c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1c71c8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1c71c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c71cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1c71ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1c71d0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1c71d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1c71d4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1c71d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c71d8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1C71D8u;
    SET_GPR_U32(ctx, 31, 0x1C71E0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1C71D8u, 0x1C71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C71E0u;
label_1c71e0:
    // 0x1c71e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c71e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1c71e4u;
}
