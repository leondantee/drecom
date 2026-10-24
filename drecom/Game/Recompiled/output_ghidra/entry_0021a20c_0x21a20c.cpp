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

// Function: entry_0021a20c
// Address: 0x21a20c - 0x21a30c
void entry_0021a20c_0x21a20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a20c_0x21a20c");
#endif

    switch (ctx->pc) {
        case 0x21a24cu: goto label_21a24c;
        case 0x21a2e0u: goto label_21a2e0;
        default: break;
    }

    ctx->pc = 0x21a20cu;

    // 0x21a20c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x21a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21a210: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x21a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21a214: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21a214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21a218: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21a21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21a220: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21a224: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21a224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21a228: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21a228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21a22c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21a230: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21a230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21a234: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21a234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21a238: 0x24041701  addiu       $a0, $zero, 0x1701
    ctx->pc = 0x21a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5889));
    // 0x21a23c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21a23cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a240: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x21a240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21a244: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21A244u;
    SET_GPR_U32(ctx, 31, 0x21A24Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21A244u, 0x21A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A24Cu;
label_21a24c:
    // 0x21a24c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a250: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21a250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21a254: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a258: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a258u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a25c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a260: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21a260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21a264: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a268: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a26c: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21a26cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21a270: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a274: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a278: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21a278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a27c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a27cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a280: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a284: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21a284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a288: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a28c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a290: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21a290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a294: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a298: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a298u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a29c: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2a0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2a4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2a8: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21a2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2ac: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2b0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2b4: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21a2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2b8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2bc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2c0: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2c4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2c8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2cc: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21a2d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2d4: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21a2d8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21A2D8u;
    SET_GPR_U32(ctx, 31, 0x21A2E0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21A2D8u, 0x21A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2E0u;
label_21a2e0:
    // 0x21a2e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2e4: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21a2e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21a2e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21a2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21a2ec: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x21a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a2f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21a2f4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21a2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21a2f8: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A2F8u;
    {
        const bool branch_taken_0x21a2f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a2f8) {
            ctx->pc = 0x21A30Cu;
            return;
        }
    }
    ctx->pc = 0x21A300u;
    // 0x21a300: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x21a300u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21A304u;
    {
        const bool branch_taken_0x21a304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a304) {
            ctx->pc = 0x21A328u;
            return;
        }
    }
    ctx->pc = 0x21A30Cu;
}
