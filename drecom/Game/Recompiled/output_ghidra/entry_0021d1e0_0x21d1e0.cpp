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

// Function: entry_0021d1e0
// Address: 0x21d1e0 - 0x21d2e0
void entry_0021d1e0_0x21d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d1e0_0x21d1e0");
#endif

    switch (ctx->pc) {
        case 0x21d220u: goto label_21d220;
        case 0x21d2b4u: goto label_21d2b4;
        default: break;
    }

    ctx->pc = 0x21d1e0u;

    // 0x21d1e0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21d1e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x21d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21d1e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x21d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x21d1ec: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x21d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21d1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d1f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21d1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21d1f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21d1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21d1fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21d1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21d200: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21d204: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21d204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21d208: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x21d208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21d20c: 0x24041700  addiu       $a0, $zero, 0x1700
    ctx->pc = 0x21d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5888));
    // 0x21d210: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21d210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d214: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x21d214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21d218: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21D218u;
    SET_GPR_U32(ctx, 31, 0x21D220u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21D218u, 0x21D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D220u;
label_21d220:
    // 0x21d220: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d224: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x21d224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x21d228: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d22c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d230: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x21d230u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d234: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21d238: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d23c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d240: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x21d240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d244: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d248: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d24c: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x21d24cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d250: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d254: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d258: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x21d258u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d25c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d260: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d264: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x21d264u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d268: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d26c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d270: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x21d270u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d274: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d278: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d278u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d27c: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x21d27cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d280: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d284: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d284u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d288: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x21d288u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d28c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d290: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d290u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d294: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x21d294u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d298: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d29c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x21d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d2a0: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x21d2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x21d2a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d2a8: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x21d2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x21d2ac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21D2ACu;
    SET_GPR_U32(ctx, 31, 0x21D2B4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21D2ACu, 0x21D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2B4u;
label_21d2b4:
    // 0x21d2b4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d2b8: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x21d2b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x21d2bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x21d2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x21d2c0: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x21d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d2c4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x21d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x21d2c8: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x21d2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x21d2cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D2CCu;
    {
        const bool branch_taken_0x21d2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21d2cc) {
            ctx->pc = 0x21D2E0u;
            return;
        }
    }
    ctx->pc = 0x21D2D4u;
    // 0x21d2d4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x21d2d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21d2d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21D2D8u;
    {
        const bool branch_taken_0x21d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d2d8) {
            ctx->pc = 0x21D2FCu;
            return;
        }
    }
    ctx->pc = 0x21D2E0u;
}
