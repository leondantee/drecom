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

// Function: entry_0018d1d0
// Address: 0x18d1d0 - 0x18d260
void entry_0018d1d0_0x18d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d1d0_0x18d1d0");
#endif

    switch (ctx->pc) {
        case 0x18d200u: goto label_18d200;
        default: break;
    }

    ctx->pc = 0x18d1d0u;

    // 0x18d1d0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18d1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18d1d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d1d8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d1dc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x18D1DCu;
    {
        const bool branch_taken_0x18d1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d1dc) {
            ctx->pc = 0x18D260u;
            return;
        }
    }
    ctx->pc = 0x18D1E4u;
    // 0x18d1e4: 0x92220095  lbu         $v0, 0x95($s1)
    ctx->pc = 0x18d1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 149)));
    // 0x18d1e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18d1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d1ec: 0x9202034c  lbu         $v0, 0x34C($s0)
    ctx->pc = 0x18d1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x18d1f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d1f4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x18d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d1f8: 0xc05e990  jal         func_17A640
    ctx->pc = 0x18D1F8u;
    SET_GPR_U32(ctx, 31, 0x18D200u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x18D1F8u, 0x18D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D200u;
label_18d200:
    // 0x18d200: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x18d200u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d204: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x18d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x18d208: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d20c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d210: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x18d210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x18d214: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x18d214u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d218: 0x3c020130  lui         $v0, 0x130
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)304 << 16));
    // 0x18d21c: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x18d21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x18d220: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x18d220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x18d224: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d228: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18d22c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x18d22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x18d230: 0x43a025  or          $s4, $v0, $v1
    ctx->pc = 0x18d230u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18d234: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18d238: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d23c: 0x2821825  or          $v1, $s4, $v0
    ctx->pc = 0x18d23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x18d240: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x18d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x18d244: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x18d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x18d248: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x18d24c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18d24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d250: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x18d254: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18d254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d258: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18d258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18d25c: 0xfe020aa0  sd          $v0, 0xAA0($s0)
    ctx->pc = 0x18d25cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2720), GPR_U64(ctx, 2));
    ctx->pc = 0x18d260u;
}
