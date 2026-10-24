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

// Function: entry_003095dc
// Address: 0x3095dc - 0x309678
void entry_003095dc_0x3095dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003095dc_0x3095dc");
#endif

    switch (ctx->pc) {
        case 0x3095ecu: goto label_3095ec;
        case 0x3095f8u: goto label_3095f8;
        case 0x309608u: goto label_309608;
        case 0x309614u: goto label_309614;
        default: break;
    }

    ctx->pc = 0x3095dcu;

    // 0x3095dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3095dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3095e0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3095e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3095e4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3095E4u;
    SET_GPR_U32(ctx, 31, 0x3095ECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3095E4u, 0x3095ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3095ECu;
label_3095ec:
    // 0x3095ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3095ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3095f0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3095F0u;
    SET_GPR_U32(ctx, 31, 0x3095F8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3095F0u, 0x3095F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3095F8u;
label_3095f8:
    // 0x3095f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3095f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3095fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3095fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309600: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x309600u;
    SET_GPR_U32(ctx, 31, 0x309608u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x309600u, 0x309608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309608u;
label_309608:
    // 0x309608: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x309608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30960c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30960Cu;
    SET_GPR_U32(ctx, 31, 0x309614u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30960Cu, 0x309614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309614u;
label_309614:
    // 0x309614: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309618: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x309618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30961c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x30961Cu;
    {
        const bool branch_taken_0x30961c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30961c) {
            ctx->pc = 0x309678u;
            return;
        }
    }
    ctx->pc = 0x309624u;
    // 0x309624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309628: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30962c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30962cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x309630: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x309630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x309634: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309638: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309638u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30963c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309640: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x309644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309648: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30964c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309650: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309650u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x309654: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x309654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309658: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30965c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x30965cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x309660: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x309660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x309664: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x309664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x309668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30966c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309670: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x309670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x309674: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x309674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x309678u;
}
