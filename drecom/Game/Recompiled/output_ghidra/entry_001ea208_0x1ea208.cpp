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

// Function: entry_001ea208
// Address: 0x1ea208 - 0x1ea2a0
void entry_001ea208_0x1ea208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ea208_0x1ea208");
#endif

    switch (ctx->pc) {
        case 0x1ea240u: goto label_1ea240;
        case 0x1ea24cu: goto label_1ea24c;
        case 0x1ea28cu: goto label_1ea28c;
        case 0x1ea298u: goto label_1ea298;
        default: break;
    }

    ctx->pc = 0x1ea208u;

    // 0x1ea208: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea20c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ea210: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1ea210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1ea214: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea218: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ea21c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ea220: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ea224: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ea228: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea22c: 0x24040e0f  addiu       $a0, $zero, 0xE0F
    ctx->pc = 0x1ea22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3599));
    // 0x1ea230: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea230u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea234: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea238: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1EA238u;
    SET_GPR_U32(ctx, 31, 0x1EA240u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA238u, 0x1EA240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA240u;
label_1ea240:
    // 0x1ea240: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea244: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1EA244u;
    SET_GPR_U32(ctx, 31, 0x1EA24Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA244u, 0x1EA24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA24Cu;
label_1ea24c:
    // 0x1ea24c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ea250: 0xac220a90  sw          $v0, 0xA90($at)
    ctx->pc = 0x1ea250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600A90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A90u, _value); } while (0);
    // 0x1ea254: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1ea254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea258: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1ea258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1ea25c: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x1ea25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1ea260: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ea264: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ea264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ea268: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ea268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ea26c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ea26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ea270: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ea270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ea274: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1ea274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ea278: 0x24040e0f  addiu       $a0, $zero, 0xE0F
    ctx->pc = 0x1ea278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3599));
    // 0x1ea27c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1ea27cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ea280: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ea280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ea284: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1EA284u;
    SET_GPR_U32(ctx, 31, 0x1EA28Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1EA284u, 0x1EA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA28Cu;
label_1ea28c:
    // 0x1ea28c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ea28cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ea290: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1EA290u;
    SET_GPR_U32(ctx, 31, 0x1EA298u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1EA290u, 0x1EA298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA298u;
label_1ea298:
    // 0x1ea298: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1ea298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1ea29c: 0xac220a94  sw          $v0, 0xA94($at)
    ctx->pc = 0x1ea29cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x600A94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600A94u, _value); } while (0);
    ctx->pc = 0x1ea2a0u;
}
