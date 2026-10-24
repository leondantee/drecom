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

// Function: entry_002df664
// Address: 0x2df664 - 0x2df724
void entry_002df664_0x2df664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df664_0x2df664");
#endif

    switch (ctx->pc) {
        case 0x2df688u: goto label_2df688;
        case 0x2df6a0u: goto label_2df6a0;
        case 0x2df6b4u: goto label_2df6b4;
        case 0x2df6c8u: goto label_2df6c8;
        case 0x2df6d8u: goto label_2df6d8;
        case 0x2df6e4u: goto label_2df6e4;
        default: break;
    }

    ctx->pc = 0x2df664u;

    // 0x2df664: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x2df664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
    // 0x2df668: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2df668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2df66c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2df66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2df670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df674: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df678: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x2df678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df67c: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x2df67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2df680: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DF680u;
    SET_GPR_U32(ctx, 31, 0x2DF688u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DF680u, 0x2DF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF688u;
label_2df688:
    // 0x2df688: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df68c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2df68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2df690: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df694: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2df694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2df698: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DF698u;
    SET_GPR_U32(ctx, 31, 0x2DF6A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DF698u, 0x2DF6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6A0u;
label_2df6a0:
    // 0x2df6a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6a4: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2df6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2df6a8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2df6a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2df6ac: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DF6ACu;
    SET_GPR_U32(ctx, 31, 0x2DF6B4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DF6B4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DF6B4u) { return; }
    ctx->pc = 0x2DF6B4u;
label_2df6b4:
    // 0x2df6b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6bc: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x2df6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2df6c0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x2DF6C0u;
    SET_GPR_U32(ctx, 31, 0x2DF6C8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x2DF6C0u, 0x2DF6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6C8u;
label_2df6c8:
    // 0x2df6c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2df6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df6d0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DF6D0u;
    SET_GPR_U32(ctx, 31, 0x2DF6D8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DF6D0u, 0x2DF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6D8u;
label_2df6d8:
    // 0x2df6d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6dc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DF6DCu;
    SET_GPR_U32(ctx, 31, 0x2DF6E4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DF6DCu, 0x2DF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6E4u;
label_2df6e4:
    // 0x2df6e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6e8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2df6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2df6ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2DF6ECu;
    {
        const bool branch_taken_0x2df6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df6ec) {
            ctx->pc = 0x2DF724u;
            return;
        }
    }
    ctx->pc = 0x2DF6F4u;
    // 0x2df6f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2df6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df6f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df6fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2df6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df700: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2df700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2df704: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df708: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2df708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2df70c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df710: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2df710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df718: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2df718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2df71c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df720: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2df720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2df724u;
}
