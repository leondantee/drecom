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

// Function: entry_002501d4
// Address: 0x2501d4 - 0x250380
void entry_002501d4_0x2501d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002501d4_0x2501d4");
#endif

    switch (ctx->pc) {
        case 0x2502ccu: goto label_2502cc;
        case 0x2502f0u: goto label_2502f0;
        case 0x25032cu: goto label_25032c;
        case 0x250338u: goto label_250338;
        case 0x250374u: goto label_250374;
        default: break;
    }

    ctx->pc = 0x2501d4u;

    // 0x2501d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2501d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2501d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2501d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2501dc: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x2501dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2501e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2501e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2501e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2501e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2501e8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2501e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2501ec: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2501ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2501f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2501f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2501f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2501f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2501f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2501f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2501fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2501fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250200: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250204: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250208: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25020c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250210: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x250210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x250214: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250218: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25021c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250220: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250224: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250228: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25022c: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x25022cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250230: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250234: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x250234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x250238: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25023c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25023cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250240: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250244: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25024c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250250: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250250u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250254: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250258: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x250258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x25025c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x25025cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250260: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250264: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250268: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x25026c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250270: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250274: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x250274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x250278: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25027c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x25027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250280: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250284: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250288: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25028c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25028cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250290: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250294: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x250294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250298: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x250298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25029c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2502a0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2502a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2502a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2502a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2502a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2502a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2502ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2502acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2502b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2502b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2502b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2502b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2502b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2502b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2502bc: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x2502bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2502c0: 0x24040704  addiu       $a0, $zero, 0x704
    ctx->pc = 0x2502c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1796));
    // 0x2502c4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2502C4u;
    SET_GPR_U32(ctx, 31, 0x2502CCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2502C4u, 0x2502CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502CCu;
label_2502cc:
    // 0x2502cc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x2502ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2502d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2502d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2502d4: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2502d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2502d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2502d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2502dc: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x2502dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x2502e0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2502e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2502e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2502e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2502e8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2502E8u;
    SET_GPR_U32(ctx, 31, 0x2502F0u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2502E8u, 0x2502F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2502F0u;
label_2502f0:
    // 0x2502f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2502f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2502f4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x2502f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2502f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2502f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2502fc: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2502fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250300: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x250304: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x250304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250308: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25030c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25030cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x250314: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x250314u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250318: 0x24041603  addiu       $a0, $zero, 0x1603
    ctx->pc = 0x250318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5635));
    // 0x25031c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x25031cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x250320: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x250324: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x250324u;
    SET_GPR_U32(ctx, 31, 0x25032Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x250324u, 0x25032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25032Cu;
label_25032c:
    // 0x25032c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25032cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250330: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250330u;
    SET_GPR_U32(ctx, 31, 0x250338u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250330u, 0x250338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250338u;
label_250338:
    // 0x250338: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x250338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25033c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x25033cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250340: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x250340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x250344: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x250344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x250348: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x250348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25034c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x25034cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x250350: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x250350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x250354: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x250354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x250358: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x250358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25035c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x25035cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x250360: 0x24042805  addiu       $a0, $zero, 0x2805
    ctx->pc = 0x250360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10245));
    // 0x250364: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x250364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x250368: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x250368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x25036c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x25036Cu;
    SET_GPR_U32(ctx, 31, 0x250374u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x25036Cu, 0x250374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250374u;
label_250374:
    // 0x250374: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x250374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x250378: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x250378u;
    SET_GPR_U32(ctx, 31, 0x250380u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x250378u, 0x250380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250380u;
}
