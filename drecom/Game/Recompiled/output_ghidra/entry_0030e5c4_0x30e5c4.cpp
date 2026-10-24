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

// Function: entry_0030e5c4
// Address: 0x30e5c4 - 0x30e68c
void entry_0030e5c4_0x30e5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e5c4_0x30e5c4");
#endif

    switch (ctx->pc) {
        case 0x30e5fcu: goto label_30e5fc;
        case 0x30e60cu: goto label_30e60c;
        case 0x30e618u: goto label_30e618;
        case 0x30e628u: goto label_30e628;
        case 0x30e634u: goto label_30e634;
        default: break;
    }

    ctx->pc = 0x30e5c4u;

    // 0x30e5c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x30e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x30e5c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30e5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e5cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30e5d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e5d4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x30e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x30e5d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x30e5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30e5dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x30e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e5e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30e5e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x30e5e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e5e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e5e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e5ec: 0x24460330  addiu       $a2, $v0, 0x330
    ctx->pc = 0x30e5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 816));
    // 0x30e5f0: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x30e5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30e5f4: 0xc086488  jal         func_219220
    ctx->pc = 0x30E5F4u;
    SET_GPR_U32(ctx, 31, 0x30E5FCu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x30E5F4u, 0x30E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E5FCu;
label_30e5fc:
    // 0x30e5fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e600: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e604: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30E604u;
    SET_GPR_U32(ctx, 31, 0x30E60Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30E604u, 0x30E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E60Cu;
label_30e60c:
    // 0x30e60c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e610: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30E610u;
    SET_GPR_U32(ctx, 31, 0x30E618u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30E610u, 0x30E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E618u;
label_30e618:
    // 0x30e618: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e61c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30e61cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30e620: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30E620u;
    SET_GPR_U32(ctx, 31, 0x30E628u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30E620u, 0x30E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E628u;
label_30e628:
    // 0x30e628: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x30e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e62c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30E62Cu;
    SET_GPR_U32(ctx, 31, 0x30E634u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30E62Cu, 0x30E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E634u;
label_30e634:
    // 0x30e634: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e638: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30e638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30e63c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E63Cu;
    {
        const bool branch_taken_0x30e63c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e63c) {
            ctx->pc = 0x30E68Cu;
            return;
        }
    }
    ctx->pc = 0x30E644u;
    // 0x30e644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e64c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30e64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e650: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30e650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e654: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e658: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30e658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30e65c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e660: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30e660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e664: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e668: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30e668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30e66c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x30e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e670: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30e670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30e674: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x30e674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e678: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x30e678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x30e67c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x30e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x30e680: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30e680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30e684: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30e688: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30e688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    ctx->pc = 0x30e68cu;
}
