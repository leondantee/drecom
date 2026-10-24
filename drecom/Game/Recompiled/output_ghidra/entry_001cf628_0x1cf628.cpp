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

// Function: entry_001cf628
// Address: 0x1cf628 - 0x1cf698
void entry_001cf628_0x1cf628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf628_0x1cf628");
#endif

    switch (ctx->pc) {
        case 0x1cf694u: goto label_1cf694;
        default: break;
    }

    ctx->pc = 0x1cf628u;

    // 0x1cf628: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf62c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cf630: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1cf630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1cf634: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1cf634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1cf638: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1CF638u;
    {
        const bool branch_taken_0x1cf638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf638) {
            ctx->pc = 0x1CF700u;
            return;
        }
    }
    ctx->pc = 0x1CF640u;
    // 0x1cf640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf644: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf648: 0xe4a01564  swc1        $f0, 0x1564($a1)
    ctx->pc = 0x1cf648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5476), bits); }
    // 0x1cf64c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf650: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cf650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf654: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf658: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1cf65c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf660: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1cf660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf664: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf668: 0xe4a01570  swc1        $f0, 0x1570($a1)
    ctx->pc = 0x1cf668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 5488), bits); }
    // 0x1cf66c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf670: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1cf670u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cf674: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf678: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1cf678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1cf67c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF67Cu;
    {
        const bool branch_taken_0x1cf67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf67c) {
            ctx->pc = 0x1CF698u;
            return;
        }
    }
    ctx->pc = 0x1CF684u;
    // 0x1cf684: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf688: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1cf688u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1cf68c: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1CF68Cu;
    SET_GPR_U32(ctx, 31, 0x1CF694u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1CF68Cu, 0x1CF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF694u;
label_1cf694:
    // 0x1cf694: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1cf694u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cf698u;
}
