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

// Function: entry_0021989c
// Address: 0x21989c - 0x219998
void entry_0021989c_0x21989c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021989c_0x21989c");
#endif

    switch (ctx->pc) {
        case 0x2198dcu: goto label_2198dc;
        case 0x21996cu: goto label_21996c;
        default: break;
    }

    ctx->pc = 0x21989cu;

    // 0x21989c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x21989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2198a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2198a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2198a4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2198a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2198a8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2198a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2198ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2198acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2198b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2198b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2198b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2198b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2198b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2198b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2198bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2198bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2198c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2198c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2198c4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2198c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2198c8: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x2198c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x2198cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2198ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2198d0: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2198d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2198d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2198D4u;
    SET_GPR_U32(ctx, 31, 0x2198DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2198D4u, 0x2198DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198DCu;
label_2198dc:
    // 0x2198dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2198e0: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2198e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2198e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2198e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2198e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2198e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2198ec: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2198ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2198f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2198f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2198f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2198f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2198f8: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2198f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2198fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2198fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219900: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219900u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219904: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x219904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x219908: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21990c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21990cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219910: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x219910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x219914: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219918: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21991c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21991cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x219920: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219924: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219928: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x219928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21992c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21992cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219930: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219930u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219934: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x219934u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x219938: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21993c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21993cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219940: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x219940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x219944: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219948: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21994c: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21994cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x219950: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219954: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x219954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x219958: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x219958u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21995c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21995cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219960: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x219960u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x219964: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x219964u;
    SET_GPR_U32(ctx, 31, 0x21996Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x219964u, 0x21996Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21996Cu;
label_21996c:
    // 0x21996c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219970: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x219970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x219974: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x219974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x219978: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x219978u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21997c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21997cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x219980: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x219980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x219984: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219984u;
    {
        const bool branch_taken_0x219984 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x219984) {
            ctx->pc = 0x219998u;
            return;
        }
    }
    ctx->pc = 0x21998Cu;
    // 0x21998c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21998cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219990: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x219990u;
    {
        const bool branch_taken_0x219990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219990) {
            ctx->pc = 0x2199B4u;
            return;
        }
    }
    ctx->pc = 0x219998u;
}
