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

// Function: entry_001f0150
// Address: 0x1f0150 - 0x1f01c8
void entry_001f0150_0x1f0150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f0150_0x1f0150");
#endif

    switch (ctx->pc) {
        case 0x1f0158u: goto label_1f0158;
        case 0x1f01b0u: goto label_1f01b0;
        default: break;
    }

    ctx->pc = 0x1f0150u;

    // 0x1f0150: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0150u;
    SET_GPR_U32(ctx, 31, 0x1F0158u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0150u, 0x1F0158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0158u;
label_1f0158:
    // 0x1f0158: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f015c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1f015cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1f0160: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0164: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f0164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f0168: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0168u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f016c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0170: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1f0170u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f0174: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1f0174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x1f0178: 0x3462fa35  ori         $v0, $v1, 0xFA35
    ctx->pc = 0x1f0178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x1f017c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f017cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0180: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1f0180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0188: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f0188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f018c: 0x3c033b3e  lui         $v1, 0x3B3E
    ctx->pc = 0x1f018cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15166 << 16));
    // 0x1f0190: 0x3463a2f1  ori         $v1, $v1, 0xA2F1
    ctx->pc = 0x1f0190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41713);
    // 0x1f0194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0198: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f019c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f019cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f01a0: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x1f01a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1f01a4: 0x24110020  addiu       $s1, $zero, 0x20
    ctx->pc = 0x1f01a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f01a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F01A8u;
    SET_GPR_U32(ctx, 31, 0x1F01B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F01A8u, 0x1F01B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01B0u;
label_1f01b0:
    // 0x1f01b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f01b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f01b4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f01b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f01b8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1f01b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1f01bc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F01BCu;
    {
        const bool branch_taken_0x1f01bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f01bc) {
            ctx->pc = 0x1F01C8u;
            return;
        }
    }
    ctx->pc = 0x1F01C4u;
    // 0x1f01c4: 0x24110021  addiu       $s1, $zero, 0x21
    ctx->pc = 0x1f01c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->pc = 0x1f01c8u;
}
