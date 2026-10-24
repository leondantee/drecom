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

// Function: entry_001bc2d4
// Address: 0x1bc2d4 - 0x1bc354
void entry_001bc2d4_0x1bc2d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc2d4_0x1bc2d4");
#endif

    switch (ctx->pc) {
        case 0x1bc2f8u: goto label_1bc2f8;
        case 0x1bc328u: goto label_1bc328;
        default: break;
    }

    ctx->pc = 0x1bc2d4u;

    // 0x1bc2d4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc2d8: 0xc4a11280  lwc1        $f1, 0x1280($a1)
    ctx->pc = 0x1bc2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc2dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bc2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc2e0: 0xc4801284  lwc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc2e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bc2e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bc2e8: 0xe4801284  swc1        $f0, 0x1284($a0)
    ctx->pc = 0x1bc2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4740), bits); }
    // 0x1bc2ec: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bc2ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bc2f0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BC2F0u;
    SET_GPR_U32(ctx, 31, 0x1BC2F8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BC2F0u, 0x1BC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC2F8u;
label_1bc2f8:
    // 0x1bc2f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bc2f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc2fc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc300: 0x8464127e  lh          $a0, 0x127E($v1)
    ctx->pc = 0x1bc300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1bc304: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1BC304u;
    {
        const bool branch_taken_0x1bc304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc304) {
            ctx->pc = 0x1BC3D4u;
            return;
        }
    }
    ctx->pc = 0x1BC30Cu;
    // 0x1bc30c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc310: 0x84a3127e  lh          $v1, 0x127E($a1)
    ctx->pc = 0x1bc310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x1bc314: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bc314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bc318: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x1bc318u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bc31c: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x1bc31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1bc320: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BC320u;
    SET_GPR_U32(ctx, 31, 0x1BC328u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BC320u, 0x1BC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC328u;
label_1bc328:
    // 0x1bc328: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1bc328u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bc32c: 0x12000087  beqz        $s0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1BC32Cu;
    {
        const bool branch_taken_0x1bc32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc32c) {
            ctx->pc = 0x1BC54Cu;
            return;
        }
    }
    ctx->pc = 0x1BC334u;
    // 0x1bc334: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bc334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc338: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BC338u;
    {
        const bool branch_taken_0x1bc338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bc338) {
            ctx->pc = 0x1BC354u;
            return;
        }
    }
    ctx->pc = 0x1BC340u;
    // 0x1bc340: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bc340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc344: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc348: 0xac641b68  sw          $a0, 0x1B68($v1)
    ctx->pc = 0x1bc348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7016), GPR_U32(ctx, 4));
    // 0x1bc34c: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1BC34Cu;
    {
        const bool branch_taken_0x1bc34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc34c) {
            ctx->pc = 0x1BC54Cu;
            return;
        }
    }
    ctx->pc = 0x1BC354u;
}
