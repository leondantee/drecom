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

// Function: entry_0023b51c
// Address: 0x23b51c - 0x23b5c8
void entry_0023b51c_0x23b51c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b51c_0x23b51c");
#endif

    switch (ctx->pc) {
        case 0x23b554u: goto label_23b554;
        case 0x23b57cu: goto label_23b57c;
        default: break;
    }

    ctx->pc = 0x23b51cu;

    // 0x23b51c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b520: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b524: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23b524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23b528: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23b528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23b52c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b530: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23b530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23b534: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x23b534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b538: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x23b538u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b53c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b540: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x23b540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b544: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b548: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23b548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23b54c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B54Cu;
    SET_GPR_U32(ctx, 31, 0x23B554u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B54Cu, 0x23B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B554u;
label_23b554:
    // 0x23b554: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23b554u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23b558: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23b558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23b55c: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x23b55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x23b560: 0x24830064  addiu       $v1, $a0, 0x64
    ctx->pc = 0x23b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x23b564: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23b564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23b568: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23b568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23b56c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b570: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x23b570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23b574: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B574u;
    SET_GPR_U32(ctx, 31, 0x23B57Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B574u, 0x23B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B57Cu;
label_23b57c:
    // 0x23b57c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b580: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x23b580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x23b584: 0x2470000a  addiu       $s0, $v1, 0xA
    ctx->pc = 0x23b584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x23b588: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x23b588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x23b58c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23b58cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23b590: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x23b590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b594: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23b598: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x23b598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x23b59c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23b59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23b5a0: 0x8c301a58  lw          $s0, 0x1A58($at)
    ctx->pc = 0x23b5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x23b5a4: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x23b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x23b5a8: 0x2033024  and         $a2, $s0, $v1
    ctx->pc = 0x23b5a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x23b5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23b5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23b5b0: 0xac261a58  sw          $a2, 0x1A58($at)
    ctx->pc = 0x23b5b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x23b5b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23b5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23b5b8: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x23b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x23b5bc: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x23b5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x23b5c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x23b5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x23b5c4: 0xac251a50  sw          $a1, 0x1A50($at)
    ctx->pc = 0x23b5c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x5D1A50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A50u, _value); } while (0);
    ctx->pc = 0x23b5c8u;
}
