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

// Function: entry_002e9f54
// Address: 0x2e9f54 - 0x2ea060
void entry_002e9f54_0x2e9f54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e9f54_0x2e9f54");
#endif

    switch (ctx->pc) {
        case 0x2e9f94u: goto label_2e9f94;
        case 0x2ea034u: goto label_2ea034;
        default: break;
    }

    ctx->pc = 0x2e9f54u;

    // 0x2e9f54: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2e9f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e9f58: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2e9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2e9f5c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2e9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e9f60: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x2e9f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2e9f64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e9f68: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2e9f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e9f6c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2e9f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2e9f70: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2e9f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e9f74: 0x3bc38  dsll        $s7, $v1, 16
    ctx->pc = 0x2e9f74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << 16);
    // 0x2e9f78: 0x36e3ffff  ori         $v1, $s7, 0xFFFF
    ctx->pc = 0x2e9f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x2e9f7c: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2e9f7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e9f80: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x2e9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2e9f84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e9f84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e9f88: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2e9f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e9f8c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2E9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F94u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2E9F8Cu, 0x2E9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F94u;
label_2e9f94:
    // 0x2e9f94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e9f94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e9f98: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9f9c: 0xac23a618  sw          $v1, -0x59E8($at)
    ctx->pc = 0x2e9f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2e9fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9fa4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fa8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fac: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2e9facu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9fb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e9fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9fb4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fb8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fbc: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2e9fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9fc0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fc4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fc8: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2e9fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9fd0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fd4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fd8: 0xa043011b  sb          $v1, 0x11B($v0)
    ctx->pc = 0x2e9fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9fdc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fe0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9fe4: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2e9fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9fe8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9fec: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9ff0: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2e9ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e9ff4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2e9ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2e9ff8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2e9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2e9ffc: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2e9ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea000: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea004: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea004u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea008: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2ea008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea00c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea010: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea014: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2ea014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea018: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea01c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea01cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea020: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2ea020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea024: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea028: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea02c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EA02Cu;
    SET_GPR_U32(ctx, 31, 0x2EA034u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EA02Cu, 0x2EA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA034u;
label_2ea034:
    // 0x2ea034: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea038: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2ea038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ea03c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea040: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ea040u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea044: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea048: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2ea048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea04c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA04Cu;
    {
        const bool branch_taken_0x2ea04c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ea04c) {
            ctx->pc = 0x2EA060u;
            return;
        }
    }
    ctx->pc = 0x2EA054u;
    // 0x2ea054: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2ea054u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea058: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EA058u;
    {
        const bool branch_taken_0x2ea058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea058) {
            ctx->pc = 0x2EA088u;
            return;
        }
    }
    ctx->pc = 0x2EA060u;
}
